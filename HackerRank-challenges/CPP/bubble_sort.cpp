#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void sort(vector <int>& v){
    int temp;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<(v.size()-1); j++){
            if(v[j]>v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1]= temp;
            }
        }
    }
}

int main() {
    int n, x;
    vector <int> v;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

