#include <iostream>

using namespace std;

int main(){
	
	int n, cur, pre, count = 1, max = 1;
	cin >> n >> pre;
	
	for(int i = 1; i < n; i++){
		cin >> cur;
		if(pre <= cur){
			count++;
			if(max < count)
				max = count;
		}
		else
			count = 1;
		pre = cur;
	}
	
	cout << max;
	
	return 0;
}
