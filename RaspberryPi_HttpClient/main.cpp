#include "httpClient.h"


int main(){
	jsonData j_resdata;
	
	HttpClient httpClient ;
	httpClient.HttpInit();
	
	//string data = "{'domain_name' : 'test.com' ,'project_name' : 'test domain for my account' }"; 
	
	//jsonData j_reqdata = httpClient.StringToJson(data);
	
	string data = httpClient.GetToURL("http://www.example.com");
	//j_resdata = httpClient.PostToURL("https://api.kandy.io/v1.2/accounts/domains?key=AAT5811ba1421304cbba2302627317385ee",j_reqdata);
	//cout << j_resdata["message"].asString()<< endl;
	cout <<  data << endl;
	return 0;
}