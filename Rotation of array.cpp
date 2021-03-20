#include<iostream>
#include<vector>
using namespace std;
void display(vector<long int> &v,long int N,long int k){
	long int j = k;
	while(j>0){
	
	long int temp = v[N-1];
	for(long int i=0; i<N ; i++){
		if(N-1-i != 0){
			v[N-1-i] = v[N-i-2];
		}
	
	}
	v[0] = temp;
	j--;
}

	
}
int main(){
	long int T,N,K,elem;
	cin>>T;
    for(int l =0; l<T; l++){
        cin>>N>>K;
        vector<long int> vec1;
	    for(long int i=0;i<N;i++){
            cin>>elem;
            vec1.push_back(elem);
        }
        display(vec1,N,K);
        for(long int i =0; i<N ; i++){
            cout<<vec1[i]<<" ";
        }
        cout<<endl;
    }

	
	
	return 0;
	
}
