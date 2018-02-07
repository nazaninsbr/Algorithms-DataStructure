#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector <int>& v){
	int temp;
	for(int i=0; i<v.size(); i++){
		for(int j=i; j<v.size(); j++){
			if(v[i]>v[j]){
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
}
vector <int> read_input(){
	vector <int> v;
	int n, x;
	cout<<"Please enter the number of your inputs: ";
	cin>>n; 
	for(int k=0; k<n; k++){
		cin>>x; 
		v.push_back(x);
	}
	return v;
}
void print_vector(vector <int>& v){
	for(int l=0; l<v.size(); l++){
		cout<<v[l]<<" ";
	}
	cout<<endl;
}
int main(){
	vector <int> num; 
	num = read_input();
	bubbleSort(num);
	print_vector(num);
}