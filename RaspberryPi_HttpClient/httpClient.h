#ifndef StepMotor_H
#define StepMotor_H
class HttpClient{
	public:
		void HttpInit(void);
		void Get(char *);
		CURL *curl;
		CURLcode res;
};
#endif