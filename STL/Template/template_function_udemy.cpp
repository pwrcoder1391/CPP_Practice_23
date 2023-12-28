/*

Here we are verbatim copying the Udemy Tim Buchalka course example , so that we can always come back and have a reference 


Making 2 functions 
    1 where we are simply displaying the arguments passed
    2 where we are comparing shit (less than , greater than)

    Now here the twist is with the - operator overloading for '<<' and '>' operator  


    Here we are not using class as user defined datatype 
*/


#include<iostream>
#include<string> // cause we'll be using string type

using namespace std;

struct Person
{
    string name;
    int power;

    // 1 way

    bool operator>(Person& rhs)
    {
        return (this->power>rhs.power);
    }
};

ostream& operator<<(ostream& os , const Person& rhs) // this overloading was giving error until i added "const" in 'const Person& rhs'
{
    os<<rhs.name;
    return os;
}


template <typename T, typename T2>
void func(T A , T2 B) 
{
    cout<<A<<" another value is  "<<B<<endl;
}


template <typename T>
T compare(T A , T B)
{
    return A>B?A:B;
}


int main()
{
    int a{55};
    int b{67};

    cout<<compare(a,b)<<endl;
    cout<<compare<char>('A','B')<<endl;
    

    func(7,string("Pronnoy"));
    func(7,5);
    func(7,'c');


    Person Pronnoy{"Pronnoy", 100000};
    Person Bruce{"Bruce Wayne", 200000}; // i am batman
    
    /*now this wont work out of the box cause ---> we have not yet overloaded the '<<' operator */
    cout<<compare(Pronnoy,Bruce)<<endl;

    func(Pronnoy,Bruce);

    return 0;
}