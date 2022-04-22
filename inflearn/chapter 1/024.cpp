#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int n, pre, cur, diff = 0;
	bool flag = true;
	int cnt[100] = {0,};
	cin >> n >> pre;
	
	for(int i = 1; i < n; i++){
		cin >> cur;
		if(abs(cur-pre) < n)
			cnt[abs(cur-pre)]++;
		else{
			flag = false;
			break;
		}
		pre = cur;
	}
	
	if(flag == true)
		for(int i = 1; i < n; i++)
			if(cnt[i] != 1)
				flag = false;
	
	if(flag == 1) 
		cout << "YES";
	else
		cout << "NO";
		
	return 0;
}
