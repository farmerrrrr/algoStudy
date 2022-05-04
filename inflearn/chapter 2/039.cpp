#include <iostream>

using namespace std;

int main(){
	
	int n, m, p = 0, q = 0, k = 0;
	int a1[100], a2[100], res[200];
	
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a1[i];	
	
	cin >> m;
	for(int i = 0; i < m; i++)
		cin >> a2[i];
		
	while(p < n && q < m)
		res[k++] = (a1[p] < a2[q])? a1[p++] : a2[q++]; 
	
	if(p != n)
		for(int i = p; i < n; i++)
			res[k++] = a1[i];
	else
		for(int i = q; i < m; i++)
			res[k++] = a2[i];
			
	for(int i = 0; i < k; i++)
		cout << res[i] << " ";
	
	return 0;
}
