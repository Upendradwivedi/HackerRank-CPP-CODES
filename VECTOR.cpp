#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n, q, size, value, which;
    cin >> n >> q;
    vector< vector<int> > nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    vector< vector<int> > cvec;
    for (int k = 0; k < q; ++k) {
    	vector<int> fvec;
        for(int i =0; i<2; i++){
        	cin>>which;
        	fvec.push_back(which);
        	
		}
		cvec.push_back(fvec);
    }
    for(int i = 0; i<cvec.size(); i++){
    	cout<<nvec[cvec[i][0]][cvec[i][1]]<<endl;
	}
    return 0;
	
}
