#include <iostream>
using namespace std;
int powerOfX(int n, int x){
	if(n==1)
		return x;
	return x*powerOfX(n-1, x);
}
int main(){
	int n, x;
	cin>>x>>n; 
	cout<<powerOfX(n, x)<<endl;
}