#include<iostream>

using namespace std;

/*
Simple class showing class structure and basic calling 
*/



class Base /*this is base class , no inheritance here*/
{
    /*Private members
        - accessed by - 
            - friend function 
            - member function 
    */
    private:  
        int a;
        int b;
    /*
    Protected 
        - could be accessed by friend class 
        - could be accessed by member function of derived class and base class
    */
    protected:
        int k;

    /*
    Public 
        - could be accessed by everyone
    */
    public:
        int c;

    void func_public() // public member function 
    {
        a = 2; // private member
        b = 3; // private member
        c = 4; // public member
        k = 6; // protected member
        cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<k<<endl;
    }

    friend int return_mem(Base &obj); // here we need to pass a Base object 

    Base()
    {
        c =4;
        k =5; 
    }


};

int return_mem(Base &obj)// here we need to pass a Base object 
{
    cout<<obj.c<<"\t"<<obj.k<<endl; // members are accessed by Base object
    return obj.k; 
}


int main()
{

    Base x;  // making an object , memory allocated here 
    int p = return_mem(x); // calling friend function here
    // we need to pass an object here

    cout<<"return of return_mem = "<<p<<endl;


    return 0;
}
