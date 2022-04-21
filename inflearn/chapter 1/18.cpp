#include <iostream>

using namespace std;

int main(){
	
	int n, thr, s, count = 0, max = 0;
	cin >> n >> thr;
	
	for(int i = 0; i < n; i++){
		cin >> s;
		if(s > thr)
			count++;
		else
			count = 0;
		if(max < count)
			max = count;
	}
	
	cout << max;
	
	return 0;
}
