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
        cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<k<<"\t";
        
    }
};

int main()
{

    Base x;  // making an object , memory allocated here 
    x.func_public(); // calling object member here
    return 0;

}
