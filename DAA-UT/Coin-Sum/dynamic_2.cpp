#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void read_inputs(vector<int>& v)
{
	int x, n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		v.push_back(x);
	}
}
int min_number(int k, vector <int>& galons)
{
	vector <int> answer;
	answer.push_back(0);
	for(int i=1; i<=k; i++)
		answer.push_back(INT_MAX);
	for(int j=1; j<=k; j++)
	{
		for(int k=0; k<galons.size(); k++)
		{
			if(galons[k]<=j)
			{
				int value = answer[j-galons[k]];
				if(value != INT_MAX && value+1<answer[j])
					answer[j] = value+1;
			}
		}
	}
	if(answer[k]==INT_MAX)
		answer[k]=-1;
	return answer[k];
}
int solve_for_a_testcase()
{
	int k;
	cin>>k;
	vector <int> answer;
	vector <int> galons;
	read_inputs(galons);
	if(k<=0)
		return 0;
	return min_number(k, galons);
}
void solve_problem_two()
{
	int T; 
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cout<<solve_for_a_testcase();
		if(T!=1)
			cout<<"\n";
	}
}
int main()
{
	solve_problem_two();
	return 0;
}