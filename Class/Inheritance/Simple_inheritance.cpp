#include<iostream>

using namespace std;

class Base{
    private:
        int x;
        void print_pri()
        {

        }
    protected:
        int y;
    public:
        int z;
        void print_func()
        {   
            cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<"this is public function of Base Class"<<endl;
        }      
        Base():x{2},y{55},z{56}
        {
            cout<<"Default constructor"<<endl;
        }

        /*THIS IMPLEMENTATION  - would not take care if less parameters are passed*/
        // Base(int x_in ,int y_in ,int z_in):x{x_in},y{y_in},z{z_in}
        // {
        //     cout<<"Parametrized constructor"<<endl;
        // }



        //flexible constructor --> need to add in the theory
        Base(int x_in=0 ,int y_in=0 ,int z_in=0):x{x_in},y{y_in},z{z_in}
        {
            /*
            So basically this constructor has the flexibility of taking either 1, 2 or 3 parameters 
            */
            cout<<"Flexible Parametrized constructor"<<endl;
        }
        Base(Base &obj):x{obj.x},y{obj.y},z{obj.z}
        {
            cout<<"Copy constructor"<<endl;
        }
        ~Base()
        {
            cout<<"Destructor"<<endl;
        }
};


class Derived1:public Base{
    private:
    protected:
    public:
        int k_1; // this integer is to be used here only 
        Derived1(int x_in=0,int y_in=0, int z_in=0,int k_in=0):Base(x_in,y_in,z_in),k_1{k_in}
        {
            cout<<"derived constructor of public"<<endl;
            // here the below implemenation wont work 
           
        }
        
        // print_func(); // cant call it outside

        void print_func_d1()
        {
           cout<<k_1<<"\t"<<"this is public function of Derived 1 Class"<<endl;
           /*calling the function in the Base class*/  
           print_func(); // this proper call
        }

        ~Derived1()
        {
            cout<<"derived1 destructor"<<endl;
        }


};

//class Derived2:protected Base{};

//class Derived3:private Base{};

int main()
{
    Base obj1{55,22,33};
    Derived1 obj2{5,66,88,89};

    Derived1 obj3{3}; // here giving "=0" in the parameter will help

    /*Here the values passed in obj1 will be given obviously*/
    obj1.print_func();



    /*Here the values passed in obj2 will be given obviously*/
    obj2.print_func(); // calling from Derived1

    
    /*Here the values passed in obj2 will be given obviously + will call both the functions --> print_func_d1() & print_func()*/
    obj2.print_func_d1();


    /*object calling which has only 1 variable passed*/
    obj3.print_func();// will be given to x_in in the Base
    obj3.print_func_d1(); // will be given to x_in in the Base 

    return 0;
}