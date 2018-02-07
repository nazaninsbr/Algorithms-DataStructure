#include <stdio.h>

int main(){
	int myArr[5];
	for(int i=0; i<5; i++){
		myArr[i] = i+10;
	}
	for(int j=0; j<5; j++){
		printf("%d\n", myArr[j]);
	}
}
