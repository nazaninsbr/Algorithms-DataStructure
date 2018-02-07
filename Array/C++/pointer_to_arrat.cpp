#include <iostream>
using namespace std;

int main(){
	int nums[5] = {1, 2, 3, 4, 5};
	int *p=nums; 
	for(int i=0; i<5; i++){
		cout<<"*(p+ "<<i<<"):";
		cout<<*(p+i)<<endl;
	}
	return 0;
}
