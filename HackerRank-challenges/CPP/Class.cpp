#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
  private:
    int age, standard;
    string first_name, last_name;
  public:
    void set_age(int age){this->age = age;}
    void set_standard(int stn){this->standard = stn;}
    void set_first_name(string fn){this->first_name = fn;}
    void set_last_name(string ln){this->last_name = ln;}
    int get_age(){return age;}
    int get_standard(){return standard;}
    string get_last_name(){return last_name;}
    string get_first_name(){return first_name;}
    string to_string(){
        string result;
        result = std::to_string(age)+","+first_name+","+last_name+","+std::to_string(standard);
        return result;
    }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

