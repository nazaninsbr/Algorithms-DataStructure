class D: public A, public B, public C 
{

    int val;
    public:
        //Initially val is 1
         D()
         {
            val=1;
         }


         //Implement this function
         void update_val(int new_val)
         {
            while(new_val != 1){
                if(new_val %2==0){
                    D a;
                    a.A::func(val);
                    new_val = new_val/2;
                }
                if(new_val%3==0){
                    D b;
                    b.B::func(val);
                    new_val = new_val/3;
                }
                if(new_val%5==0){
                    D c;
                    c.C::func(val);
                    new_val = new_val/5;
                }
            }
            
         }
         //For Checking Purpose
         void check(int); //Do not delete this line.
};


