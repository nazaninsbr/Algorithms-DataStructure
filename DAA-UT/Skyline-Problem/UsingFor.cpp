#include <iostream>
#include <vector>
using namespace std;
class BuildingValues{
public:
	int start;
	int end;
	int height;
	void UpdateValues(int s, int f, int h) {start= s; end=f; height=h;} 
};
class view{
public:
	int start;
	int height;
};
vector<view> find_points(vector<BuildingValues>& buildings, int max)
{
	int n;
	vector <view> see;
	vector <int> ind;
	for(int i=0; i<=max; i++)
	{
		for(int j=0; j<buildings.size(); j++)
		{
			if(i>=buildings[j].start && i<buildings[j].end)
			{
				ind.push_back(j);
			}
		}
		if(ind.size()==0)
		{
			if(see.size()!=0) 
			{
				if(see[see.size()-1].height != 0)
				{
					view V1; 
					V1.height=0; 
					V1.start=i;
					see.push_back(V1);
				}
			}
		}
		else{
			int max_h=0, max_ind=-1;
			for(int k=0; k<ind.size(); k++)
			{
				if(buildings[ind[k]].height>max_h)
				{
					max_h = buildings[ind[k]].height;
					max_ind = ind[k];
				}
			}
			if(see.size()==0)
			{
				view V1;
				V1.height = max_h;
				V1.start = i;
				see.push_back(V1);
			}
			else if(see[see.size()-1].height !=max_h)
			{
				view V1;
				V1.height = max_h;
				V1.start = i;
				see.push_back(V1);
			}
		}
		ind.clear();
	}
	return see;
}
vector <BuildingValues>read_inputs(int numberOfInputs)
{
    vector <BuildingValues> buildings;
    int n, s, f, h;
    BuildingValues values;
    for(int i=0; i<numberOfInputs; i++)
    {
        cin>>s>>f>>h;
        values.UpdateValues(s, f, h);
        buildings.push_back(values);
    }
    return buildings;
}
int findMax(vector <BuildingValues> buildings)
{
	int max=0;
	for(int i=0; i<buildings.size(); i++)
	{
		if(max<buildings[i].end)
			max = buildings[i].end;
	}
	return max;
}
int main()
{
    int T; 
    cin>>T; 
    vector <vector <BuildingValues> > TC;
    for(int i=0; i<T; i++)
    {
        int n; 
        vector <BuildingValues> BV;
        cin>>n;
        BV = read_inputs(n);
        TC.push_back(BV);
    }
    for(int i=0; i<TC.size(); i++)
    {
    	int max = findMax(TC[i]);
    	vector <view> result;
        result = find_points(TC[i] ,max);
		for(int i=0; i<result.size(); i++)
		{
			cout<<result[i].start<<" "<<result[i].height<<" ";
		}
		cout<<endl;
    }
    return 0;
}
