class BadLengthException{
    private:
        int n;
    public:
        BadLengthException(int n) {this->n = n;}
        int what(){return n;}
};