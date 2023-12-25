#include<iostream>

using namespace std;

/*
In this class we are making object of one class (A) as static in another class (B)

check - https://www.geeksforgeeks.org/cpp-static-data-members/?ref=lbp
*/


/*
Description 

    There are 2 classes A and B 
    In class B , we are declaring an "Static object" of class A 
        Now here if we need to access that object , we can do it under a class of

*/

class A{

    private:
        int x;

    public:
        A() // constructor
            {
                x=8;
                cout<<"Constructor of A"<<endl;
            }

        void get_val(int x_in)
            {
                x = x_in;
            }

        void print_a()
            {
                cout<<x<<endl;
            }

};

class B
{   
    static A a; // either this can be done or (1)
    public: 
    //static int d = 88;
    int y;
        B()
        {
            y = 9 ; 
            cout<<"B's constructor"<<endl;
        }
    

    A getA_nonstat() 
    {
        a.get_val(y);
        return a; //returning the object a
    }

    static A getA() 
    {
        // this wont work here --> since 'y' is non-static // a.get_val(y);
        //y=22;
        return a; //returning the object a
    }

};

A B::a; // need to define Static member here as well 


int main()
{
    B b1;
    A a = b1.getA_nonstat();
    a.print_a();

    A a2 = B::getA();
    a2.print_a();

    return 0;
}