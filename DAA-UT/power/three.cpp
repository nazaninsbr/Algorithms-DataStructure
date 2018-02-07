#include <iostream>
using namespace std;
int powerOfX(int n, int x){
	if(n==1)
		return x;
	int k;
	if(n%2==0)
	{
		k = powerOfX(n/2, x);
		return k*k;
	}
	else{
		k = powerOfX( (n-1)/2, x);
		return x*k*k;
	}
}
int main(){
	int n, x;
	cin>>x>>n; 
	cout<<powerOfX(n, x)<<endl;
}