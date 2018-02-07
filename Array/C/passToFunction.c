#include <stdio.h>

float average(float numbers[]){
	int i;
	float avg=0;
	for(i=0; i<6; i++)
		avg += numbers[i];
	avg = (avg/6);
	return avg;
}

int main(){
	float numbers[] = {1, 2.5, 3, 2, 2.5, 1.75};
	printf("%.2f\n", average(numbers));
	return 0;
}
