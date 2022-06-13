#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	stack<char> s;
	string str;
	
	cin >> str;
	
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == '(')
			s.push(str[i]);
		else if(str[i] == ')'){
			if(s.empty()){
				cout << "NO";
				return 0;
			}
			s.pop();
		}
	}
	
	if(s.empty())
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
