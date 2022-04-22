#include <iostream>

using namespace std;

int main(){
	
	int n;
	int rank[10000], prfm[10000];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> prfm[i];
		rank[i] = 1;
	}
	
	// use 025.cpp's logic
	for(int i = 1; i < n; i++)
		for(int j = 0; j < i; j++)
			if(prfm[i] <= prfm[j])
				rank[i]++;
	
	for(int i = 0; i < n; i++)
		cout << rank[i] << " ";
	
	return 0;
}
