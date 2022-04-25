#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int i, c = 1, h = 1, pre = 0;
	char s[10];
	cin >> s;
	
	for(i = 1; s[i] != 'H'; i++){
		c = pre * 10 + (s[i] - 48);
		pre = c;
	}

	pre = 0;
	for(int j = i+1; s[j] != '\0'; j++){
		h = pre * 10 + (s[j] - 48);
		pre = h;
	}
	
	cout << c * 12 + h;
	
	return 0;
}
