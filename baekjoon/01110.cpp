#include <iostream>

using namespace std;

int main(){
	
	int n, pre, cur, tmp, p, c, count = 0;
	cin >> n;
	
	pre = n/10;
	p = pre;
	cur = n%10;
	c = cur;
	
	do{
		tmp = cur;
		cur = (pre+cur) % 10;
		pre = tmp;
		count++;
		if(pre == p && cur == c)
			break;
	}while(1);
	
	cout << count;
	
	return 0;
}
