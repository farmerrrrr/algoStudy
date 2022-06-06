#include <iostream>

using namespace std;

int stack[30], top = -1;

void push(int n){
	stack[++top] = n;
}

int pop(){
	return stack[top--]; 
}

int main(){
	
	char tmp;
	char s[30];
	cin >> s;
	
	for(int i = 0; s[i] != '\0'; i++){
		tmp = s[i];
		if(tmp == '(')
			push(1);
		else if(tmp == ')')
			pop();
		if(top < -1){
			cout << "NO";
			return 0;
		}
	}
	
	if(top == -1)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
