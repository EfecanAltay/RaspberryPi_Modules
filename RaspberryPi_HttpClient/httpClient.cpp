#include<stdio.h>
#include<iostream>
#include<string>
#include<curl/curl.h>
#include<jsoncpp/json/json.h>

using namespace std;
using namespace Json;


static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

class HttpClient{
	public:
		void HttpInit(void);
		void AddToHeader(string);
		void GetToURL(string);
		Value PostToURL(string,Value);
		string PostToURL(string,string);
	private:
		CURL *curl;
		CURLcode res;
		struct curl_slist *chunk = NULL;
		size_t write_to_string(void *,size_t,size_t,void *);
};
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
Value HttpClient::PostToURL(string url,Value data){
	if(curl) {
		FastWriter fw ;
		Value j_reqdata;
		
		string s_data =fw.write(data);
		
		curl_easy_setopt(curl, CURLOPT_URL,url.c_str());
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE,(long)s_data.length());
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, s_data.c_str());
	
		string resData;
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &resData);
	
		Reader reader;
		Value j_resdata;
		res = curl_easy_perform(curl);
		
		reader.parse(resData.c_str(),j_resdata);
		
		return j_resdata;
	if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}

int main(){
	Value j_resdata;
	
	HttpClient httpClient ;
	httpClient.HttpInit();
		
	string data = "{'domain_name' : 'test.com' ,'project_name' : 'test domain for my account' }"; 
	
	Reader reader;
	Value j_reqdata;
	reader.parse(data.c_str(),j_reqdata);
	
	//httpClient.GetToURL("https://api.kandy.io/v1.2/accounts/accesstokens?key=DAK8d4953ad50b645cabca174f794792d7a&account_api_secret=DAS8e5d1a3cdd104c03960b4ff0ea34c4c1&account_access_token=AAT08a1e59eb32441e88d4c83b592a8a171");
	j_resdata = httpClient.PostToURL("https://api.kandy.io/v1.2/accounts/domains?key=AAT5811ba1421304cbba2302627317385ee",j_reqdata);
	cout << j_resdata["message"].asString()<< endl;
	
	return 0;
}