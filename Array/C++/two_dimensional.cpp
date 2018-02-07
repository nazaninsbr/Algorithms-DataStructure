#include <iostream>
using namespace std;

int main(){
	int a[3][4] = {
		{0, 100, -1, 5}, 
		{1, 2, 1, 2},
		{-3, 200, 43, 23}
	};
	for(int i=0; i<3; i++)
		for(int j=0; j<4; j++){
			cout<<a[i][j]<<endl;
		}
}
