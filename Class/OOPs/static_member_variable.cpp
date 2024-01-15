#include<iostream>

using namespace std;

class A{
        int normalVar;
    public:
        static int staticVar ; // declared here , not defined 
        /*
        Static variable must be defined out side the class , here whatever we do or define the value as , it'll give error 
        */
        A(int x):normalVar{x} // parmetrized constructor
        {
            cout<<"constructor called"<<endl;
        }

        void display()
        {
            cout<<"normal variable"<<"\t"<<normalVar<<endl;
            cout<<"static variable"<<"\t"<<staticVar<<endl;
        }


        void multiply()
        {
            int y = staticVar*normalVar;
            cout<<"multiplication using static variable"<<y<<endl;
        }


        ~A()
        {
            cout<<"destructor called"<<endl;
        }

};


int A::staticVar = 0 ; // defined here 
/*
Necessary to give decelration here , only outside of the class
*/

int main()
{
    A a(55);
    a.display();

    A::staticVar = 88 ; // defining once again outside of the class , without accessing through object

    a.display();

    A b(66);
    b.display(); // here the normal variable will change , since we have initialized the object with different value , but the static variable will remain the same which we have set as "88"

    b.multiply();


    return 0;
}