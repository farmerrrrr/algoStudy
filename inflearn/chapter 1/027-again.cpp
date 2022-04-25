#include <iostream>

using namespace std;

int main(){
	
	int n, j, tmp;
	int cnt[1001] = {0,};
	cin >> n;
	
	for(int i = 2; i <= n; i++){
		j = 2;
		tmp = i;
		while(1){
			if(tmp % j == 0){
				tmp /= j;
				cnt[j]++;
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
