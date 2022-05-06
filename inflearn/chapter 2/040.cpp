#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n, m, i, j, k = 0,tmp;
	int a1[30000], a2[30000], res[30000];
	
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> a1[i];
	
	cin >> m;
	for(i = 0; i < m; i++)
		cin >> a2[i];
		
	sort(a1, a1+n);
	sort(a2, a2+m);
/*	
	for(i = 1; i < n; i++){
		j = i;
		while(a1[j] < a1[j-1]){
			tmp = a1[j];
			a1[j] = a1[j-1];
			a1[j-1] = tmp;
			j--;
		}
	}
	
	for(i = 1; i < m; i++){
		j = i;
		while(a2[j] < a2[j-1]){
			tmp = a2[j];
			a2[j] = a2[j-1];
			a2[j-1] = tmp;
			j--;
		}
	}
*/	
	i = 0; j = 0;
	while(i < n && j < m){
		if(a1[i] == a2[j]){
			res[k++] = a1[i];
			i++; j++;
		}
		else if(a1[i] < a2[j])
			i++;
		else
			j++;
	}
		
	for(i = 0; i < k; i++)
		cout << res[i] << " ";
	
	return 0;
}
