#include <iostream>

using namespace std;

int main(){
	
	int n;
	int a[100], b[100];
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
		
	for(int i = 0; i < n; i++){
		if(a[i] == b[i])
			cout << "D" << endl;
		else if(a[i] == 1){
			if(b[i] == 2)
				cout << "B" << endl;
			else
				cout << "A" << endl;
		}
		else if(a[i] == 2){
			if(b[i] == 1)
				cout << "A" << endl;
			else
				cout << "B" << endl;
		} 
		else if(a[i] == 3){
			if(b[i] == 1)
				cout << "B" << endl;
			else
				cout << "A" << endl;
		}  
	}	
	return 0;
}
