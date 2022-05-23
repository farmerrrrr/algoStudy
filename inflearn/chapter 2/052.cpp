#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int a[1501];
	int p2 = 1, p3 = 1, p5 = 1;
	a[1] = 1;
	int min = 1;
	
	for(int i = 2; i <= n; i++){
		min = (a[p2]*2 < a[p3]*3)? a[p2]*2 : a[p3]*3;
		if(a[p5]*5 < min)
			min = a[p5]*5;
		
		// don't use 'else if'. (ex. 6(2*3 = 3*2))
		if(min == a[p2]*2) p2++;
		if(min == a[p3]*3) p3++;
		if(min == a[p5]*5) p5++;
		
		a[i] = min;
	}
	
	cout << a[n];
	
	return 0;
}
