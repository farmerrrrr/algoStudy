#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
	
	int num = 0, digit = 0, count = 0;
	string str;
	cin >> str;
	
	for(int i = str.length() - 1; i >= 0; i--)
		if(str[i] >= 48 && str[i] <= 57)
			num += (str[i] - 48) * pow(10, digit++);
	
	for(int i = 1; i <= num; i++)
		if(num % i == 0)
			count++;
			
	cout << num << endl << count;
	
	return 0;
}
