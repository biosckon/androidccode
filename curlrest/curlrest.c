#include <all.h>


// https://ec.haxx.se/libcurl-easyhandle.html

int main(int argc, char *argv[]) {
	CURL *chandle = curl_easy_init();
	CURLcode res = curl_easy_setopt(
			chandle, CURLOPT_URL,
			"https://google.com");
	res = curl_easy_perform(chandle);

	printf("%d\n", res);
}
