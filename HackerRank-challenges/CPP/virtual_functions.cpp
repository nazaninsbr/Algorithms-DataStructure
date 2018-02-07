int number1=0; 
int number2=0;
class Person{
    protected:
        char name[300];
        int age;
    public:
        Person() { };
        virtual void getdata() = 0;
        virtual void putdata() = 0;
    
};
class Professor: public Person{
    private:
        int publications;
        int cur_id;
    public:
        Professor();
        void getdata();
        void putdata();
};
class Student: public Person{
    private:
        int mark[6];
        int cur_id;
    public:
        Student();
        void getdata();
        void putdata();
};
Student::Student(){
    number1 = number1 + 1; 
    this->cur_id = number1;
}
void Student::getdata(){
    int x;
    cin>>this->name;
    cin>>this->age;
    for(int i=0; i<6; i++){
        cin>>x;
        this->mark[i]= x;
    }
}
void Student::putdata(){
    int sum; 
    sum = 0;
    for(int j=0; j<6; j++){
        sum = sum+ this->mark[j];
    }
    cout<<this->name<<" "<<this->age<<" "<<sum<<" "<<this->cur_id<<endl;
}
Professor::Professor(){
    number2 = number2 + 1; 
    this->cur_id = number2;
}
void Professor::getdata(){
    int x;
    cin>>this->name;
    cin>>this->age;
    cin>>this->publications;
}
void Professor::putdata(){
    cout<<this->name<<" "<<this->age<<" "<<this->publications<<" "<<this->cur_id<<endl;
}