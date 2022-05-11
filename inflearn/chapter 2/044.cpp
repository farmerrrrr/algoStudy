#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> a;
int n;

int count(int t){
	
	int cnt = 1, tmp = a[0];
	
	for(int i = 1; i < n; i++){
		if((a[i] - tmp) >= t){
			cnt++;
			tmp = a[i];
		}
	}
	
	return cnt;
}

int main(){
	
	int m, tmp, res = 0;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		cin >> tmp;
		a.push_back(tmp);
	}
	
	sort(a.begin(), a.end());
	
	int low = a[0], high = a[n-1], mid;
	
	while(low <= high){
		mid = (low + high)/2;
		if(count(mid) < m)
			high = mid - 1;
		else{
			low = mid + 1;
			res = mid;
		}
	}
	
	cout << res;

	return 0;
}
