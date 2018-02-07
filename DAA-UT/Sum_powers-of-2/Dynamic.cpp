#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int readingInputs(vector<int>& numbers)
{
    int max=0;
    vector <int> number;
    int T, n;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>n;
        if(n>max)
            max=n;
        numbers.push_back(n);
    }
    return max;
}
int numberOfMethods(int n)
{
    if (n < 2) return 1;
    unsigned h = n /2, k = 1;
    while(k <= h) k <<= 1;
    vector<unsigned long long> methods;
    methods.push_back(1);
    for(unsigned i = 1; i <= n; ++i) {
         methods.push_back(0);
    }
    while(k) {
        for(unsigned i = k; i <= n; i += k) {
            methods[i] += methods[i-k];
            methods[i] = methods[i]%1000000;
        }
        k /= 2;
    }
    return methods[n];
}
int main()
{
    int maxValue;
    vector<int> numbers; 
    maxValue = readingInputs(numbers);
    for(int i=0; i<numbers.size(); i++)
    {
        cout<<numberOfMethods(numbers[i])<<'\n';
    }
    return 0;
}