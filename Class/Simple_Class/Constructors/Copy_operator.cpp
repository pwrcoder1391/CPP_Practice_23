#include<iostream>


using namespace std;

class A {

    public:
        int xy;

        A():xy{0}
        {
            cout<<"default constructor called"<<endl;
          //xy = 0 ;  
        }
        A(int gg):xy{gg}
        {
            cout<<"parametrized constructor called"<<endl;
        }
        A(A&obj):xy{obj.xy}
        {
            cout<<"copy constructor called"<<endl;
        }

        A operator= (A&obj)
        {
            /*

            operator= is acting as a function and the object passed "A&obj" is the RHS object 

            so when used --> looks like this  --> 

            A b(55);
            A c(66);

            b=c; --> is basically b.=(66)  --> here the = is acting as a function 

            */
            cout<<"copy operator called";
            this->xy = obj.xy;
        }

        void display()
        {
            cout<<"this is the value"<<xy<<endl;
        }


        ~A()
        {
            cout<<"destructor is called";
        }
};


int main()
{
    A b(55);
    A c(66);
    b.display();
    b=c;    
    b.display();
    return 0;

}   