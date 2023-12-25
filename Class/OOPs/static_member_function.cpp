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

        static void multiply()
        {
            int ret = staticVar*staticVar;
            cout<<"result is"<<ret<<endl;
        }


        /*
        
        static void multiply_1()
        {
            int ret = staticVar*normalVar;
            cout<<"result is"<<ret<<endl;
        }

        This is not legal , the static function cannot access the normal variable , it can only access the "static member"

        */

        void display()
        {
            cout<<"normal variable"<<"\t"<<normalVar<<endl;
            cout<<"static variable"<<"\t"<<staticVar<<endl;
        }


        ~A()
        {
            cout<<"destructor called"<<endl;
        }

};


int A::staticVar = 0 ; // defined here 

/*
Basically we can only update the static function , only with static variables 

Basically its character/value will only change if we use - static variable 
*/



int main()
{
    A::multiply();
    A b(55);
    b.display();

    A::staticVar = 67; 

    A::multiply();
    b.multiply();

    A::staticVar = 3; 

    A::multiply();
    b.multiply();

    return 0;

}