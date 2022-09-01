#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	stack<int> st;
	int n, i, pos = 1, idx = 0;
	int arr[30];
	char print[60];
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	i = 0;
	while(i < n){
		st.push(arr[i++]);
		print[idx++] = 'P';
		while(!st.empty()){
			if(pos == st.top()){
				st.pop();
				print[idx++] = 'O';
				pos++;
			}
			else
				break;
		}
	}
	
	if(!st.empty())
		printf("impossible");
	else
		for(i = 0; i < idx; i++)
			printf("%c", print[i]);
	
	return 0;
}
