#include<iostream>

/*
To do - 
    - Make a class , which will act as member which will be made static 
        - so we need to have a parametrized constructor cause we need to change the values of its member 
    

    - Make a function in the class where we are declaring the static member , which will try to access the function
        - See how many ways we can use this and where else we can use it 


*/


class A
{

    /*
    
    Basically we'll make this class as a static member in another class 

    And as we know the static function --> will only work with static variables 

    But static variables can be used with other member functions of the class 
        - but cannot be updated need to be scoped with the class it's part of 

    */
    public:
        int x;

        void func()
        {

        }

    


};