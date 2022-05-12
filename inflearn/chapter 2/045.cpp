#include <iostream>

using namespace std;

int main(){
	
	int n, m, cnt = 0, chk = 0, pos = 1;
	int a[1001] = {0, };
	cin >> n >> m;
	
	while(cnt < n-1){
		if(pos > n)
			pos = 1;
		if(a[pos] == 0){
			chk++;
			if(chk == m){
				a[pos] = 1;
				chk = 0;
				cnt++;
			}
		}
		pos++;
	}
	
	for(int i = 1; i <= n; i++)
		if(a[i] != 1)
			cout << i;

	return 0;
}
