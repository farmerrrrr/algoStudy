#include <iostream>

using namespace std;

int main(){
	
	string s;
	cin >> s;
	
	int p = 0;
	bool isInvalid = false;
	
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] == '(')
			p++;
		else if(s[i] == ')')
			p--;
		if(p < 0)
			isInvalid = true;
	}
			
	if (isInvalid == true)
		cout << "NO";
	else if (p == 0)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
