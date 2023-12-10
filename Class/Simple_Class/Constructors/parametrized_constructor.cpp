#include<iostream>

using namespace std;


class Base 
{
private :
    int x;
public:
    void print_func()
    {
        cout<<x<<"\t"<<"This is default function"<<endl;

    }

    Base(int inp):x{inp} // this is way of inputing , we can also do it inside the {} curly bracket
    {
    cout<<"parameterized constructor"<<endl;
    }

    ~Base()
    {cout<<"destructor called"<<endl;}

};



int main()
{
    Base obj{5}; // object declared and the value passed , which will be assigned to "x" in private 


    //Base obj2; // will cause compiler error , cause no value is passed

    /*
    ISSUE WHICH COULD COME - 

        If we do not pass anything to object obj , then compiler error will come 

        Solution - Use overloading of constructor (Protocol such has Best of 3 or Best of 5 needs to be used)
    */


    obj.print_func();

    /*we can also "cin" the value and assign it to the obj--> object */



    return 0;

}