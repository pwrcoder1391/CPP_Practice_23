#include<iostream>

using namespace std;

/*
Friend function as member of another function

along with the private and protected members being called by friend function in another class
*/

class Base;// foward definition is required for the Base class , whose friend a function will be declared

class dost 
/*This is the class whose member the friend function is , but to this class it wont be a friend function
*/
{
    
    public:
        int return_mem(Base &obj);// here we need to pass a Base object 
};


class Base /*this is base class , no inheritance here --> we have already declared it previously*/
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

    friend int dost::return_mem(Base &obj); // This is forward definition , here we need to pass a Base object 

    Base()
    {
        c =4;
        k =5; 
    }


};


    int dost::return_mem(Base &obj) // this is actual definition 
    {
        cout<<obj.c<<"\t"<<obj.k<<endl; // members are accessed by Base object
        return obj.k; 
    }
    


int main()
{

    Base x;  // making an object , memory allocated here 
    dost d; // we need this class object as well , since friend function to Base is member of this class
    int p = d.return_mem(x); // calling friend function here
    // we need to pass an object here

    cout<<"return of return_mem = "<<p<<endl;


    return 0;
}
