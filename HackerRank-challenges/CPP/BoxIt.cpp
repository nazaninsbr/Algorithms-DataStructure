class Box{
    private:
        long long l, b, h;
    public:
        Box() {l=0; b=0; h=0;}
        Box(int length, int breath, int height) {this->l=length; this->b=breath; this->h=height;}
        Box(const Box& x) {this->l=x.l; this->b=x.b; this->h=x.h;}
        long long getLength() {return l;}
        long long getBreadth () {return b;}
        long long getHeight () {return h;}
        long long CalculateVolume() {return l*b*h;}
        bool operator<(const Box& b);
};
bool Box::operator<(const Box& b){
    if(b.l>this->l)
        return true;
    if(b.b> this->b && b.l==this->l)
        return true;
    if(b.h> this->h && b.b == this->b && b.l==this->l)
        return true;
    return false;
}
ostream& operator<<(ostream& out, Box& B){
    out<<B.l<<" "<<B.b<<" "<<B.h<<endl;
    return out;
}

