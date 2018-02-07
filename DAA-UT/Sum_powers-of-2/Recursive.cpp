#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void readingInputs(vector<int>& numbers)
{
	vector <int> number;
	int T, n;
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>n;
		numbers.push_back(n);
	}
}
int CalcBiggestPower(int number)
{
	double in, res;
	in = (double) number;
	res = log2 (in);
	return (int)res;
}
int CalcPower(int base, int power)
{
	int k;
	if(power==1)
		return base;
	if(power%2==1){
		k = CalcPower(base, floor(power/2));
		return k*k*base;
	}
	else {
		k = CalcPower(base, power/2);
		return k*k;
	}
}
int numberOfMethods(int number, int power)
{
	if(number==0)
		return 1;
	if(power<0)
		return 0;
	if(power==0)
		return 1;
	int result;
	result = CalcPower(2, power);
	if(number>=result)
		return numberOfMethods(number - result, power) + numberOfMethods(number, power-1);
	else 
		return numberOfMethods(number, power-1);

}
int main()
{
	int power;
	vector<int> numbers; 
	readingInputs(numbers);
	for(int i=0; i<numbers.size(); i++)
	{
		power = CalcBiggestPower(numbers[i]);
		cout<<numberOfMethods(numbers[i], power)%1000000<<'\n';
	}
	return 0;
}