#include <iostream>1
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	
	string s[100];
	int n, sum, max = 0, numOfMax;
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> s[i];
	
	for(int i = 0; i < n; i++){
		sum = 0;
		const char *str = s[i].c_str();
		for(int j = 0; s[i][j]!='\0'; j++){
			sum += str[j] - 48;
		}
		if(sum > max){
			max = sum;
			numOfMax = atoi(str);
		}
		else if(sum == max)
			if(atoi(str) > numOfMax)
				numOfMax = atoi(str);
	}
	
	cout << numOfMax;
	
	return 0;
}
