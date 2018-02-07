#include <iostream>
#include <vector>
#include <math.h>
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
vector<view> merge(vector<view>& left, vector<view>& right)
{
	vector <view> see; 
	int jr=0, jl=0, hl= -1, hr= -1;
	while( jl<left.size() && jr<right.size())
	{
		if(left[jl].start < right[jr].start)
		{
			view V2;
			V2.start = left[jl].start;
			hl = left[jl].height;
			V2.height= (hl>hr)? hl:hr;
			if(see.size()!=0){
				if(V2.height != see[see.size()-1].height)
				{
					see.push_back(V2);
				}
			}
			else{
				see.push_back(V2);
			}
			jl++;
		}
		else if(left[jl].start > right[jr].start)
		{
			view V2;
			V2.start = right[jr].start;
			hr = right[jr].height;
			V2.height= (hl>hr)? hl:hr;
			if(see.size()!=0){
				if(V2.height != see[see.size()-1].height)
				{
					see.push_back(V2);
				}
			}
			else{
				see.push_back(V2);
			}
			jr++;
		}
		else if(left[jl].start==right[jr].start){
			view V2;
			V2.start = right[jr].start;
			hr = right[jr].height;
			hl = left[jl].height;
			V2.height= (hl>hr)? hl:hr;
			if(see.size()!=0){
				if(V2.height != see[see.size()-1].height)
				{
					see.push_back(V2);
				}
			}
			else{
				see.push_back(V2);
			}
			jr++;
			jl++;
		}
	}
	while(jl<left.size())
	{
		
		if(see.size()!=0){
			if(left[jl].height != see[see.size()-1].height)
			{
				view V2;
				V2.start = left[jl].start;
				V2.height = left[jl].height;
				see.push_back(V2);
			}
		}
		else{
			view V2;
			V2.start = left[jl].start;
			V2.height = left[jl].height;
			see.push_back(V2);
		}
		jl++;
	}
	while(jr<right.size())
	{
		if(see.size()!=0){
			if(right[jr].height != see[see.size()-1].height)
			{
				view V2;
				V2.start = right[jr].start;
				V2.height = right[jr].height;
				see.push_back(V2);
			}
		}
		else{
			view V2;
			V2.start = right[jr].start;
			V2.height = right[jr].height;
			see.push_back(V2);
		}
		jr++;
	}
	return see;
}
vector<view> find_points(vector<BuildingValues>& buildings, int start, int end)
{
	if(start>end)
	{
		vector <view> vec;
		return vec;
	}
	if(start==end)
	{
		vector <view> vec;
		view V1, V2;
		V1.start = buildings[start].start;
		V1.height = buildings[start].height;
		V2.start = buildings[start].end;
		V2.height = 0;
		vec.push_back(V1);
		vec.push_back(V2);
		return vec;
	}
	vector<view> left, right;
	int middle = floor((start+end)/2);
	left = find_points(buildings, start, middle);
	right =  find_points(buildings, middle+1, end);
	return merge(left,right);
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
int main()
{
    int T; 
    cin>>T; 
    for(int i=0; i<T; i++)
    {
        int n; 
        cin>>n;
        if(n==0){
        	cout<<"0 0";
        	if(T!=1)
				cout<<endl;
        }
        else
        {
        	vector <BuildingValues> BV=read_inputs(n);
    		vector <view> result;
       		result = find_points(BV, 0, n-1);
			for(int i=0; i<result.size(); i++)
			{
				if(i==(result.size()-1))
					cout<<result[i].start<<" "<<result[i].height;
				else 
					cout<<result[i].start<<" "<<result[i].height<<" ";
			}
			if(T!=1)
				cout<<endl;
		}
    }
    return 0;
}
