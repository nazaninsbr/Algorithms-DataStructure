class Student{
    private:
        vector <int> score;
    public:
        void input();
        int calculateTotalScore();
    
};
void Student::input(){
    int x;
    for(int i=0; i<5; i++){
        cin>>x;
        this->score.push_back(x);
    }
}
int Student::calculateTotalScore(){
    int sum=0;
    for(int i=0; i<5; i++){
        sum = sum + this->score[i];
    }
    return sum;
}