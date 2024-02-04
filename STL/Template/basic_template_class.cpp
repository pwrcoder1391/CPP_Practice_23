/*
basically creating a template class which has 2 inputs 

and then fitting it into multiple datatypes
    - primitive
    - user-defined 
	
 Class Template 
		- So in Class template , we cannot have the class itself in a particular datatype -- ** the class is never of any datatype anyways 
			- Rather we'll have template for the MEMBERs of the class 
			- We can also have member function which can have the returning-datatype as the template datatype
*/
#include<iostream>
#include<string>
#include<vector>

using namespace std; 

template <class T>
class A{
    private:
        string name;
        T input_x;
    public:

        A(string name_in ,T input_x_in):name{name_in},input_x{input_x_in}
        {
            cout<<"constructor called"<<endl;           
        }

        string get_name() // this will enable multiple different type of input of different datatypes 
        {
            return name;
        }

        T get_in()
        {
            return input_x;
        }

        ~A()
        {
            cout<<"destructor called"<<endl;
        }
} ;



int main()
{
    A <int>obj1{"Pronnoy" , 5530};  // this identifier for the datatype <int> is necessary else , we'll get error
    A <string>obj2{"Pronnoy", "Chowdhury"}; 
    
    cout<<obj1.get_name()<<"\t"<<obj1.get_in()<<endl;
    cout<<obj2.get_name()<<"\t"<<obj2.get_in()<<endl;

    A <A<double>>obj3{"Pronnoy", {"Chowdhury", 55.66}};  // using user defined datatype here

    /*
    Same thing we can cascade call the user-defined object 

        So here we have defined -- A object inside A object 

        - no need to define operator here , since we have defined "get" functions 
    
    */

    cout<<obj3.get_name()<<"\t"<<obj3.get_in().get_name()<<"\t"<<obj3.get_in().get_in()<<endl;

    // next objective is to make vector of object A 

    /*create a vector*/
    vector <A<int>>new_vec;

    /*adding elements*/
    new_vec.push_back(A<int>("blah",55));   
    new_vec.push_back(A<int>("bleh",54));   
    new_vec.push_back(A<int>("bloh",53));   


    /*If you notice here , both in declaring the 'vector' and 'adding elements' we need to mention --> the object type and template variable */
    for(auto &iter:new_vec)
        {
            cout<<iter.get_name()<<"\t"<<iter.get_in()<<endl; // i believe since we are returning objects , the compiler thinks we are updating the object hence we cannot use "const" in the for loop
        }
        

    return 0;
}
