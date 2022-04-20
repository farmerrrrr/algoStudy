#include <iostream>

using namespace std;

int main(){
	
	int count[2][58] = {{0, },};
	bool isEqual = true;
	string s[2];
	cin >> s[0] >> s[1];
	
	for(int i = 0; i <= 1; i++)
		for(int j = 0; s[i][j]!='\0'; j++)
			count[i][s[i][j]-65]++;
	
	for(int i = 0; i < 58; i++)
		if(count[0][i] != count[1][i])
			isEqual = false;
	
	if(isEqual == 1)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
