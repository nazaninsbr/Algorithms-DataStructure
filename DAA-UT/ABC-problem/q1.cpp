#include <iostream>
#include <vector>
using namespace std;
unsigned long long solve_for_testcase()
{
	int n, val1, val2, val3;
	val1=val2=val3=0;
	vector <unsigned long long> v; 
	vector < vector <unsigned long long> > vv;
	vector <vector <vector <unsigned long long> > > answers;
	cin>>n; 
	for(int l=0; l<=n; l++)
		v.push_back(0);
	for(int l=0; l<=n; l++)
		vv.push_back(v);
	for(int l=0; l<=n; l++)
		answers.push_back(vv);
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=n; j++)
		{
			for(int k=0; k<=n; k++)
			{
				if(i>=j && j>=k)
				{
					if(i==0 && j==0 && k==0)
						answers[0][0][0]=1;
					else 
					{
						val1=val2=val3=0;
						if(i>0)
							val1= answers[i-1][j][k];
						if(j>0)
							val2= answers[i][j-1][k];
						if(k>0)
							val3= answers[i][j][k-1];
						answers[i][j][k]= val1+val2+val3;
					}
				}
			}
		}
	}
	return answers[n][n][n];
}
void solve_problem_one()
{
	int T;
	vector <unsigned long long> answers;
	cin>>T; 
	for(int i=0; i<T; i++)
	{
		cout<<solve_for_testcase();
		if(T!=1)
			cout<<"\n";
	}
}
int main()
{
	solve_problem_one();
	return 0;
}