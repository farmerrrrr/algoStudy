#include <iostream>

using namespace std;

int main(){
	
	int count[10] = {0,};
	string s;
	cin >> s;
	
	for(int i = 0; s[i]!='\0'; i++)
		count[s[i]-48]++;
		
	int max = count[0], numOfMax = 0;
	
	for(int i = 1; i <= 9; i++){
		if(max < count[i]){
			max = count[i];
			numOfMax = i;
		}
		if(max == count[i])
			if(numOfMax < i)
				numOfMax = i;
	}
	
	cout << numOfMax;
	
	return 0;
}
