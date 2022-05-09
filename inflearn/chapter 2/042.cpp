#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n, m, tmp;
	vector<int> a;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		a.push_back(tmp);
	}
		
	sort(a.begin(), a.end());
	int low = 0, high = n-1;
	
	while(low <= high){
		int mid = (low + high)/2;
		if(m > a[mid])
			low = mid+1;
		else if(m < a[mid])
			high = mid-1;
		else{
			cout << mid+1;
			return 0;
		}
	}
	
	return 0;
}
