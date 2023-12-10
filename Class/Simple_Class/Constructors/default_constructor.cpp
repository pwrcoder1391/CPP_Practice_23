#include<iostream>

/*code to show the default constructor and destructor*/

using namespace std; 

class Base{
    private:
        int x;

    public:
        void print_val()
        {
            cout<<x<<"\t"<<"this is it"<<endl;

        }

        //default constructor

        Base()
        {
            cout<<"default constructor called"<<endl;
            x = 9 ;
        }

        ~Base()
        {
            cout<<"destructor called"<<endl;
            //destructor
        }


};

int main()
{
    Base obj; // object called
    obj.print_val(); // here the constructor will called and when the prog is ended the destructor will be called

    return 0;

}