#include <iostream>
using namespace std;

int n;
int a[1000];

int count(int mid){
	int cnt = 1, tmp = 0;
	for(int i = 0; i < n; i++){
		if((tmp + a[i]) <= mid)
			tmp += a[i];
		else{
			cnt++;
			tmp = a[i];
		}
	}
	
	return cnt;
}

int main(){
	
	int m, sum = 0, mid, res = 1;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	
	int low = 0, high = sum;
	while(low <= high){
		mid = (low + high)/2;
		if(count(mid) <= m){
			high = mid-1;
			res = mid;		
		}
		else
			low = mid+1;
	}
	
	cout << res;
	
	return 0;
}
