#include <iostream>

using namespace std;

int main(){
	
	int city;
	cin >> city;
	int total = 0;
	
	const int length = city - 1;
	int road[length];
	for(int i = 0; i < length; i++)
		cin >> road[i];
	
	int money[length + 1];
	for(int i = 0; i < length + 1; i++)
		cin >> money[i];
	
	int pos = 0;

	for(int i = pos+1; i < length; i++){
		if(money[pos] > money[i]){
			for(int k = pos; k < i; k++)
				total += money[pos] * road[k];
			pos = i;
		}
		else if(i == (length-1)){
			for(int k = pos; k < length; k++)
				total += money[pos] * road[k];
			break;
		}	
	}
		
	cout << total;
	
	return 0;
}
