#include <iostream>

using namespace std;

int main(){
	
	int n, pos = 1, j;
	bool flag = true;
	int cnt[1001] = {0,};
	cin >> n;
	
	for(int i = 2; i <= n; i++){	
		int tmp = i;
		j = 2;
		while(1){
			if(tmp % j == 0){
				cnt[j]++;
				tmp /= j;
			}
			else
				j++;
			
			if(tmp == 1)
				break;
		}
	}
	
	cout << n << "! = ";
	for(int i = 2; i <= n; i++)
		if(cnt[i] > 0)
			cout << cnt[i] << " "; 
	
	return 0;
}
