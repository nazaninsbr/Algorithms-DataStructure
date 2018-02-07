#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n, q, x, k;
    cin>>n>>q;
    int** ary = new int*[n];
    for(int i=0; i<n; i++){
        cin>>k; 
        ary[i] = new int[k];
        for(int j=0; j<k; j++){
            cin>>x;
            ary[i][j] = x;
        }
    }
    for(int k=0; k<q; k++){
        int s, e;
        cin>>s>>e;
        cout<<ary[s][e]<<"\n";
    }
    return 0;
}

