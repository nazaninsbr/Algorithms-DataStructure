class Rectangle{
    protected:
        int width, height;
    public:
        void read_input(){
            cin>>this->width>>this->height;
        }
        void display(){
            cout<<this->width<<" "<<this->height<<endl;
        }
    
};
class RectangleArea: public Rectangle{
    public:
        void display(){
            cout<<width*height;
        }
    
};