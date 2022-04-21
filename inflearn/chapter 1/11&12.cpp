#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
	
	int count = 0, num;
	string s;
	cin >> s;
	
	for(int i = 1; i < s.length(); i++)
		count += 9 * pow(10, i-1) * i;

	num = atoi(s.c_str());
	num = num - pow(10, s.length()-1) + 1;
	
	count += num * s.length();
	
	cout << count;
	
	return 0;
}
