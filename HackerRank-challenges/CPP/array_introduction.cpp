#include <iostream>
using namespace std;

int main() {
    int N, x;
    cin>>N;
    int arr[1000];
    for(int i=0; i<N; i++){
       cin>>x;
       arr[i] = x;
    }
    for(int j=N-1; j>=0; j--){
        cout<<arr[j]<<" ";
    }
    cout<<"\n";
    return 0;
}

