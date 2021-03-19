#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int arr[4] = {1,5,3,6};
	int b;
	for(int i = 0; i<4 ; i++ ){
		for (int j = 0; j<4 ; j++){
			if(arr[i]<arr[j]){
				b = arr[i];
				arr[i] = arr[j];
				arr[j] = b;
			}
		}
	}
	for(int i = 0; i<4; i++){
		cout<<arr[i];
	}

	return 0;
}

