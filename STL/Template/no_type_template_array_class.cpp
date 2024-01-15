/*
    Aim - to create an array class - where we can show the whole array 
    - input/create a new array , by giving size and elements



    Problem Statement - create a template class , here we need to create a STL class which takes in number of elements and values 
        - it'll be very basic
        - initially we'll be doing with only integer , then we'll make it generic to the type as well 



*/

#include<iostream>

using namespace std;

template <int N>
class Array_temp
{
    private:
    // 2 members - 1 for the size and another array itself
        int size{N};
        int m[N];

        /*
        Important - Although the friend function can access the Private member , we are accessing the array-member "m" through the "object- rhs" cause we are doing operator overloading and it'll pertain tho that object-instance to which "<<" operator is called --> so it has to know which object-instance we are talking about which it'll get from "Array_temp<N> &rhs"
        */

        friend ostream& operator<<(ostream& os , const Array_temp<N> &rhs)  
        // here also we need to mention the (non-type template) and also we are using "&"rhs since we need to change the same array whose instance we are getting
        // also 'const' is necessary here in "Array_temp"
        {
            os<<"[ ";
            for(auto &iter:rhs.m)  // here we are going to "get" the array member of the object
            {
                os<<iter<<" ";
            }
            os<<" ]"<<endl;
            return os;
        }

    public:
        Array_temp() = default; // we cannot have a default constructor 
        Array_temp(int val)
        {
            for(auto &iter:m) // same as init function
            {
                iter = val;
            }
            cout<<"constructor called";
        }

        void fill(int inpt)
        {
            for(auto &item:m)
                {
                    item = inpt;
                }
        }

        int get_size() const
        {
            return size;
        }

        int &operator[](int pos)
        {
            return m[pos];
        }

};

int main()
{
    Array_temp<5> a;
    cout<<a<<endl;
    a.fill(55);
    cout<<a<<endl;
    return 0 ;
}