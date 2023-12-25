#include<iostream>

/*
Errata:

    Previously i was doing all the things same ,  but I was not alloting the member new memory of int type 

*/


using namespace std;

class A {

    public:
        int *xy;

        A()
        {

            xy = new int(0);
            cout<<"default constructor called"<<endl;
          //xy = 0 ;  
        }
        A(int gg)
        {
            xy = new int(gg);
            cout<<"parametrized constructor called"<<endl;
        }
        A(A&obj)
        {   
            xy = new int(*obj.xy);
            cout<<"copy constructor called"<<endl;
        }

        A& operator= (const A&obj)
        {
            cout<<"assignment operator called";
            //this->xy = obj.xy;

            if(this!=&obj)
            {
                delete xy;
                /*
                Read once this  - 

                    what is difference between  -  "new int(22)" & "new int[22]"

                https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/*/
                
                xy = new int;
                xy = obj.xy;

                //xy = new int(*(obj.xy));
            }


            /*
            
            Difference between A& operator= and A*operator= 

            read  - https://stackoverflow.com/questions/5541952/whats-the-difference-between-reference-and-pointer-return-types-in-c

            */


            // basically the pointer is returning alias of itself , we dont need to use .() or -> also it makes sure the returned value is itself only ---> that's why we are returning "*this" rather than "this" --> the former is the derefernced object pointer and later is the pointer itself
            return *this;       
        
        }

        void display()
        {
            cout<<"this is the value"<<*xy<<endl;
        }


        ~A()
        {
            cout<<"destructor is called";
            delete xy;
        }
};


int main()
{


    A b(66);
    A c(55);
    b.display();
    b=c;    
    b.display();
    return 0;

}   