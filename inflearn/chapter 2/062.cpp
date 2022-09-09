#include <stdio.h>

int arr[101], tmp[101];
int n; 

void sort(int lt, int rt) {
	 if(lt < rt) {
	 	int mid = (lt + rt) / 2;
	 	sort(lt, mid);
	 	sort(mid + 1, rt);
	 	
	 	int p1 = lt, p2 = mid+1, p3 = lt;
	 	while(p1 <= mid && p2 <= rt) {
	 		if(arr[p1] < arr[p2])
	 			tmp[p3++] = arr[p1++];
	 		else
	 			tmp[p3++] = arr[p2++];
		}
		
		while(p1 <= mid)
			tmp[p3++] = arr[p1++];
		while(p2 <= rt)
			tmp[p3++] = arr[p2++];
		
		for(int i = lt; i <= rt; i++)
			arr[i] = tmp[i]; 
	 }
}

int main() {
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
		scanf("%d", arr+i);
	
	sort(1, n);
	
	for(int i = 1; i <= n; i++)
		printf("%d ", arr[i]);
	
	return 0;
}
