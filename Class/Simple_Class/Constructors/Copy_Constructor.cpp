#include<iostream>

using namespace std;

class Base{
    private: 
        int x;

    public:

        void print_func()
        {
            cout<<x<<"\t"<<endl;
        } 

        //optional/not absolutely essential , but to initialize the donor object
        Base()
        {
            cout<<"default constructor is called"<<endl;
            // default constructor
            x = 55;
        }




        /*basically in copy constructor , we are copying 1 object to another --> which we do member-wise*/
        Base(Base &obj):x{obj.x}
        {
            cout<<"copy constructor is called"<<endl;
        }

        ~Base()
        {
            cout<<"destructor is called"<<endl;
        }

};

int main()
{
    Base obj1; // default constructor will be called here


    Base obj2{obj1}; // this is the real implementation , the default constructor is just to initialize obj1 , which is to be copied here

    obj1.print_func(); 
    cout<<"above is obj1 member"<<endl;

    obj1.print_func(); 
    cout<<"above is obj2 member"<<endl;

    return 0;
    
}