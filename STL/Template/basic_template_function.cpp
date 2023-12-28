/*
https://www.geeksforgeeks.org/templates-cpp/

A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types.

C++ adds two new keywords to support templates: ‘template’ and ‘type name’. The second keyword can always be replaced by the keyword ‘class’.

*/

#include<iostream>


/*
Writing a multiply function , which multiplies 2 number and takes in 1 double and 1 int and returns double 
*/
template <typename T>
T func(T x , int y) // global template function 
{
    double ret = x*y;
    return ret;
}

int main()
{
    double per = 55;
    int salary = 2280000;

    per = 1+(per/100);
    double increment_req = func<double>(per,salary);
    std::cout<<std::fixed<<"increment requried in coming days is = "<<increment_req<<std::endl; // using 'fixed' cause otherwise it'll return in scientific notation

    return 0;

}