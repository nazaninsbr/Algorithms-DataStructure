#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string time;
    cin >> time;
    if(time[time.size()-2]=='A'){
        if(time[0]=='1'){
            time[0]='0';
            time[1]='0';
        }
        time = time.substr(0, time.size()-2);
        cout<<time;
    }
    else{
        string a = time.substr(0, 2);
        time = time.substr(0, time.size()-2);
        if(a != "12"){
            int myint2 = int(time[0]);
            myint2 += 1;
            time[0] = char(myint2);
            int myint1 = int(time[1]);
            myint1 += 2;
            time[1] = char(myint1);
        }
        cout<<time;
    }
    return 0;
}

