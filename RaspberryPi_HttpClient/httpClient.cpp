#include "httpClient.h"

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

string HttpClient::JsonToString(jsonData data){
		FastWriter fw ;
		jsonData j_reqdata;
		return fw.write(data);
}
jsonData HttpClient::StringToJson(string data){
		Reader reader;
		jsonData j_reqdata;
		reader.parse(data.c_str(),j_reqdata);
		return j_reqdata;
}
void HttpClient::HttpInit(){
	curl_global_init(CURL_GLOBAL_DEFAULT);				
	curl = curl_easy_init();
}
void HttpClient::AddToHeader(string header){
	if(curl) {
		chunk = curl_slist_append(chunk, header.c_str());
	}
}
void HttpClient::GetToURL(string url){
	if(curl) {
		
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER,chunk);
		curl_easy_setopt(curl, CURLOPT_URL,url.c_str());
	
		res = curl_easy_perform(curl);
		
		if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",curl_easy_strerror(res));
		curl_easy_cleanup(curl);
		}
		curl_global_cleanup();
}
string HttpClient::PostToURL(string url,string data){
	if(curl) {

		curl_easy_setopt(curl, CURLOPT_URL,url.c_str());
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE,(long)data.length());
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());
	
		string resData;
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &resData);
		
		return resData;
	if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}
jsonData HttpClient::PostToURL(string url,jsonData data){
	if(curl) {
		//FastWriter fw ;
		
		string s_data = JsonToString(data);
		
		curl_easy_setopt(curl, CURLOPT_URL,url.c_str());
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE,(long)s_data.length());
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, s_data.c_str());
	
		string resData;
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &resData);
	
		Reader reader;
		jsonData j_resdata;
		res = curl_easy_perform(curl);
		
		reader.parse(resData.c_str(),j_resdata);
		
		return j_resdata;
	if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}

