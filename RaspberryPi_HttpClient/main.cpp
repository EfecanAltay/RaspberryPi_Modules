#include "httpClient.h"


int main(){
	jsonData j_resdata;
	
	HttpClient httpClient ;
	httpClient.HttpInit();
	
	string data = "{'domain_name' : 'test.com' ,'project_name' : 'test domain for my account' }"; 
	
	jsonData j_reqdata = httpClient.StringToJson(data);
	
	//httpClient.GetToURL("https://api.kandy.io/v1.2/accounts/accesstokens?key=DAK8d4953ad50b645cabca174f794792d7a&account_api_secret=DAS8e5d1a3cdd104c03960b4ff0ea34c4c1&account_access_token=AAT08a1e59eb32441e88d4c83b592a8a171");
	j_resdata = httpClient.PostToURL("https://api.kandy.io/v1.2/accounts/domains?key=AAT5811ba1421304cbba2302627317385ee",j_reqdata);
	cout << j_resdata["message"].asString()<< endl;
	
	return 0;
}