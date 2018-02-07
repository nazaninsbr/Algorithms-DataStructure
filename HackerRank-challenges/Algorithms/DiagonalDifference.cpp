#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main(){
    int n, sumPrimary, sumSecond;
    sumPrimary = sumSecond = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int k=0; k<n; k++){
        sumPrimary += a[k][k];
    }
    for(int k=0; k<n; k++){
        sumSecond += a[k][n-1-k];
    }
    cout<<abs(sumSecond-sumPrimary);
    return 0;
}

