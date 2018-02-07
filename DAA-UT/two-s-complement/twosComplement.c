/*  computer project 1 */
/*  Created by Nazanin Sabri*/
/* this program inputs 2's complement numbers, calculets the sum, average and maximum in decimal*/
#include <stdio.h>
#include <stdlib.h>
typedef struct ReturnValues{
	int value1;
	int value2;
} ReturnValues; 
int getNumberOfInputs()
{
	int numberOfInputs;
	/*in this part we ask the number of times we want to input numbers and check that the entered number is correct */
	do{
		printf("\nPlease enter the number of numbers you would like to enter: ");
		scanf("%d", &numberOfInputs);
		if(numberOfInputs<=0)
			printf("\n please enter a positive number.");
	}while(numberOfInputs<=0);
	return numberOfInputs;
}
ReturnValues getSignBit(int numberOfBits, int binaryNumber)
{
	ReturnValues f1;
	int  power1=1, power2=1, signBit=0;
	/*first we check the sign bit of the entered number*/
	for(int j=1; j<=numberOfBits; j++)
		power1=10*power1;
	for(int j=1; j<numberOfBits; j++)
		power2=10*power2;
	signBit=(binaryNumber%power1-binaryNumber%power2)/power2;
	f1.value1 = signBit;
	f1.value2 = power2;
	return f1;
}
int getPositiveBinaryValue(int binaryNumber, int power2, int signBit, int numberOfBits)
{
	/*the sign bit does not have a value so we subtract it*/
	binaryNumber=binaryNumber-signBit*power2;
	int notNumberBinary=0;
	/*here we NOT every bit of the given number: this needs to be done because the number given is in 2's complement and negative*/
	for(int j=1; j<numberOfBits; j++)
	{
		int remainder=0;
		remainder=binaryNumber%10;
		/*we know that we can only use 0 and 1 in binary so if the given number has any other digit it is an invalid input and the program must end*/
		if(remainder!=1 && remainder!=0)
		{
			printf("\ninvalid input!");
			exit(EXIT_FAILURE);
		}
		binaryNumber-=remainder;
		binaryNumber=binaryNumber/10;
		/*here is where the bits are changed-not-*/
		if(remainder==0)
			remainder=1;
		else
			remainder=0;
			/*we want the remainder to be multiplied by 10 and go to the digit where it belongs*/
			int power3=1;
			for (int i=1; i<j; i++)
				power3*=10;
		notNumberBinary=notNumberBinary+ remainder*power3;
	}
	return notNumberBinary;
}
int convertToDecimal(int binaryNumber)
{
	int remainder=0, k=1, decimalNumber=0;
	while(binaryNumber !=0)
	{
		remainder=binaryNumber%10;
		 /*we know that we can only use 0 and 1 in binary so if the given number has any other digit it is an invalid input and the program must end*/
		if(remainder!=0 && remainder!=1){
			printf("\ninvalid input!");
			exit(EXIT_FAILURE);
		}
		binaryNumber-=remainder;
		binaryNumber=binaryNumber/10;
		decimalNumber+=remainder*k;
		k=k*2;
	}
	return decimalNumber;
}
ReturnValues readNumbersAndCalculateMaxSum(int numberOfInputs)
{
	int binaryNumber, numberOfBits,power2, counter, j, notNumberBinary, decimalNumber;
	float sum=0, maximum;
	for(int counter=1; counter<=numberOfInputs; counter++)
	{
		int signBit=0;
		signed int decimalNumber=0;
		scanf("%d %d", &numberOfBits, &binaryNumber);
		ReturnValues f1Return;
		f1Return = getSignBit(numberOfBits, binaryNumber);
		signBit = f1Return.value1;
		power2 = f1Return.value2;
		/*if the sign bit is one (meaning the number is negative) we need to convert the 2's complement number to a sign magnitude*/
		if(signBit==1)
		{
			binaryNumber= getPositiveBinaryValue(binaryNumber, power2, signBit, numberOfBits);
		}
		/*here we convert the binary number to a decimal number, both when the number is negative and positive*/
		decimalNumber = convertToDecimal(binaryNumber);
		if(signBit==1)
			decimalNumber=(-1)*(decimalNumber+1);
		if(counter==1)
			maximum=decimalNumber;
		sum+=decimalNumber;
		if(decimalNumber>=maximum)
			maximum=decimalNumber;
	}
	ReturnValues f2;
	f2.value1 = sum;
	f2.value2 = maximum;
	return f2;
}
int main()
{
	int numberOfInputs;
	float average=0 ,sum=0, maximum;
	numberOfInputs = getNumberOfInputs();
	/*here we ask the user to input the numbers and do the needed operations on them*/
	ReturnValues f2;
	f2 = readNumbersAndCalculateMaxSum(numberOfInputs);
	sum = f2.value1;
	maximum = f2.value2;
	average= sum/numberOfInputs;
	printf("\n%.2f \n%.2f \n%.2f", average, sum, maximum);
	return 0;
}


