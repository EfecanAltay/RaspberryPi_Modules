#ifndef _HttpClient_H_INCLUDED_
#define _HttpClient_H_INCLUDED_

#include <stdio.h>
#include <iostream>
#include <string>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>

using namespace std;
using namespace Json;

typedef Value jsonData ;

class HttpClient{
	public:
		void HttpInit(void);
		void AddToHeader(string);
		void GetToURL(string);
		jsonData PostToURL(string,jsonData);
		string PostToURL(string,string);
		jsonData StringToJson(string);
		string JsonToString(jsonData);
	private:
		CURL *curl;
		CURLcode res;
		struct curl_slist *chunk = NULL;
		size_t write_to_string(void *,size_t,size_t,void *);
};

#endif