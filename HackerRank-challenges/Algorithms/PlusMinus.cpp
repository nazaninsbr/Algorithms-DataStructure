#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    float n, neg, pos, zero;
    neg = pos = zero = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i]==0)
           zero++;
       if(arr[arr_i]<0)
           neg++;
       if(arr[arr_i]>0)
           pos++;
    }
    cout<<pos/n<<endl<<neg/n<<endl<<zero/n;
    return 0;
}

