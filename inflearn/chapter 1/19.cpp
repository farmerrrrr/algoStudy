#include <iostream>

using namespace std;

int main(){
	
	int n, count = 0;
	bool flag;
	int std[100];
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> std[i];
		
	for(int i = 0; i < n-1; i++){
		flag = true;
		for(int j = i+1; j < n; j++)
			if(std[i] <= std[j]){
				flag = false;
				break;
			}
		if(flag)
			count++;
	}
	
	cout << count;
	
	return 0;
}
