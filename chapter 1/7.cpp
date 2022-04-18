#include <iostream>

using namespace std;

int main(){
	
	char s[100];
	gets(s);
	
	for(int i = 0; s[i] != '\0'; i++)
		if(s[i] >= 65 && s[i] <= 90)
			printf("%c", s[i]+32);
		else if(s[i] >= 97 && s[i] <= 122)
			printf("%c", s[i]);

	return 0;
}
