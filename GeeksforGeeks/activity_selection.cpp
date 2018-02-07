#include <iostream>
#include <vector>
using namespace std;


void sortByFinish(vector <int>& start, vector <int>& finish){
	int temp;
	for(int i=0; i<finish.size(); i++){
		for(int j=0; j<finish.size(); j++){
			if(finish[i]<finish[j]){
				temp = finish[i];
				finish[i] = finish[j];
				finish[j] = temp;


				temp = start[i];
				start[i] = start[j];
				start[j] = temp;
			}
		}
	}
}

int pickActivities(vector <int>& start, vector <int>& finish){
	int act = 1;
	int end = finish[0];
	for(int i=1; i<start.size(); i++){
		if(start[i]>=end){
			end = finish[i]; 
			act+=1;
		}
	}
	return act;
}


int main(){
	vector <int> start; 
	vector <int> finish;
	int num=0;
	int act, x, y;
	cin>>act; 
	for(int i=0; i<act; i++){
		cout<<"start: ";
		cin>>x;
		start.push_back(x);
		cout<<"end: ";
		cin>>y;
		finish.push_back(y);
	}
	sortByFinish(start, finish);
	num = pickActivities(start, finish);
	cout<<"maximum number of activities is: "<<num<<endl;
	return 0;
}