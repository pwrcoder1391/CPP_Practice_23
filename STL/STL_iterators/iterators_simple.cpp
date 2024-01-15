#include<iostream>
#include<vector>

// iterators are there in every datatypes 

using namespace std; 

int main()
{
    vector<int> vec{2,5,66,4,36,13,55};
    vector<int>::iterator itr = vec.begin(); // itr will have a 'pointer' kind of datatype called 'iterator' in "itr"


    cout<<"using while loop"<<endl;
    while(itr!=vec.end()) // the last element is EMPTY hence we dont need to iterate through it
    {
        cout<<*itr<<endl; // here check the "itr" is dereferenced 
        itr++; // will move forward
    }

    cout<<"using for loop"<<endl;
    for(auto itr2 = vec.begin() ; itr2 != vec.end() ; itr2++)// here we are using "auto" to assign itr2 a datatype as iterator 
    {
        cout<<*itr2<<endl;
    }


    cout<<"other arthematic operations in iterator"<<endl;

    vector<int>::iterator itr3 = vec.begin();
    
    itr3+=4;
    cout<<"This is itr3+=4 --> "<<*itr3<<endl;



    return 0;
}
