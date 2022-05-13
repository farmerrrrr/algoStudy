#include <iostream>

using namespace std;

int main(){
	
	int n, m, p = -1, cnt = 0, sum = 0;
	int a[2000] = {0, };
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	cin >> m;
	
	if(m >= sum){
		cout << "-1";
		return 0;
	}
	
	while(cnt < m){
		p++;
		if(p >= n)
			p = 0;
		if(a[p] == 0)
			continue;
		a[p]--;
		cnt++;
	}
	
	while(1){
		p++;
		if(p >= n)
			p = 0;
		if(a[p] != 0)
			break;
	}

	cout << p+1;
		
	return 0;
}
