#include<stdio.h>
#include<iostream>
#include<curl/curl.h>

using namespace std;
class HttpClient{
	public:
		void HttpInit(void);
		void Get(char *);
		CURL *curl;
		CURLcode res;
};
void HttpClient::HttpInit(){
	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();
}
void HttpClient::Get(char * url){
	if(curl) {
	curl_easy_setopt(curl, CURLOPT_URL,url);
	
	res = curl_easy_perform(curl);
	printf("response:\n");
	if(res != CURLE_OK)
    fprintf(stderr, "curl_easy_perform() failed: %s\n",curl_easy_strerror(res));
	curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}

int main(){
	HttpClient httpClient ;
	httpClient.HttpInit();
	httpClient.Get("http://www.google.com.tr");
	return 0;
}