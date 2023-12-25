#include<iostream>


using namespace std;

class A {

    public:
        int xy;
        int *ptr;

        A():xy{0},ptr{nullptr}
        {
            cout<<"default constructor called"<<endl;
          //xy = 0 ;  
        }
        A(int gg,int*ptr_1):xy{gg},ptr{ptr_1}
        {
            cout<<"parametrized constructor called"<<endl;
        }
        A(A&obj):xy{obj.xy},ptr{obj.ptr}
        {
            cout<<"copy constructor called"<<endl;
        }

        A operator= (A&obj)
        {
            cout<<"copy operator called";
            this->xy = obj.xy;
            this->ptr = obj.ptr;
        }


        /*
        Move constructor 

        The difference between Move and Copy is that we'll deleting the  
        
        */

        A operator= (A&&obj)
        {
            cout<<"move constructor called";
        }

        void display()
        {
            cout<<xy<<"\t"<<*ptr<<endl;
        }

        ~A()
        {
            cout<<"destructor is called";
            delete ptr;
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