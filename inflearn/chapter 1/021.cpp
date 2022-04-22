#include <iostream>

using namespace std;

int main(){
	
	int as = 0, bs = 0;
	char winer = 'D';
	int a[10], b[10];
	
	for(int i = 0; i < 10; i++)
		cin >> a[i];
	for(int i = 0; i < 10; i++)
		cin >> b[i];
	
	for(int i = 0; i < 10; i++){
		if(a[i] > b[i]){
			as += 3;
			winer = 'A';
		}
		else if(b[i] > a[i]){
			bs += 3;
			winer = 'B';
		}
		else{
			as++;
			bs++;
		}
	}
	
	cout << as << " " << bs << endl;
	
	if(as > bs)
		cout << "A";
	else if(bs > as)
		cout << "B";
	else
		cout << winer;
	
	return 0;
}
