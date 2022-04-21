#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	string str;
	cin >> str;
	
	int a, base = 1900;
	char s;
	
	base += (str[0] - 48) * 10 + (str[1] - 48);
	int str7 = str[7] - 48;
	s = (str7 % 2 == 0)? 'W' : 'M';
	base += (str7 >= 3)? 100 : 0;
	a = 2019 - base + 1;
	
	cout << a << " " << s;
	
	return 0;
}
