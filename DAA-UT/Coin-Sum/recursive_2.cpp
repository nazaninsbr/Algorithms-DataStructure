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
	if(k==0)
		return 0;
	int answer = INT_MAX;
	for(int i=0; i<galons.size(); i++)
	{
		if(galons[i]<=k)
		{
			int value = min_number(k-galons[i], galons);
			if(value != INT_MAX && value <answer)
				answer = value+1;
		}
	}
	if(answer == INT_MAX || answer==0)
		answer=-1;
	return answer;
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