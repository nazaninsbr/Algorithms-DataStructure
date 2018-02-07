#include <vector>
#include <climits>
#include <iostream>


using namespace std;


int main(){
    vector <long long int> v(5);
    for(int i=0; i<5; i++){
        cin>>v[i];
    }
    long long int sum=0; 
    long long int min = LLONG_MAX;
    long long int max = LLONG_MIN;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(j!=i){
                sum += v[j];
            }
        }
        if(sum>max)
            max = sum;
        if(sum<min)
            min = sum;
        sum = 0;
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}

