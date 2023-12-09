Pre-read - in sequence 

https://www.geeksforgeeks.org/user-defined-data-types-in-c/?ref=lbp
    Read all specifically class - structure 

    Class is - 
        - user-defined data type
        - holds its own data members and member functions
            - can be accessed and used by creating an instance of that class
    
    - Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
    - When a class is defined, only the specification for the object is defined; no memory or storage is allocated.


    Accessing DataMembers

        -  The data members and member functions of the class can be accessed using the dot(‘.’) operator with the object. 
        - Private Data Member - The public data members are also accessed in the same way given however the private data members are not allowed to be accessed directly by the object. 


    Access Modifiers 

        - access control is given by Access modifiers in C++. There are three access modifiers: public, private, and protected.



    Member Functions in Classes

        There are 2 ways to define a member function:

        - Inside class definition
        - Outside class definition


        To define outside -  define a member function outside the class definition we have to use the scope resolution (::) operator along with the class name and function name. {Inline functions are actual functions, which are copied everywhere during compilation, like pre-processor macro, so the overhead of function calls is reduced.}

        Q- How to give access to non-member function (maybe function of another class)
        Declaring a friend function is a way to give private access to a non-member function. 
        TODO - write a code for this one 



    Constructors
 
        - Constructors are special class members which are called by the compiler every time an object of that class is instantiated. 
        - Constructor is invoked at the time of object creation.
        - Constructor do not return value, hence they do not have a return type.
        - Constructor can be defined inside the class declaration or outside the class declaration {Template -  <class-name>: :<class-name>(list-of-parameters) {} }
        - Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
        - Constructors can be overloaded
        - Constructor can not be declared virtual.
        - Constructor cannot be inherited.
        - Addresses of Constructor cannot be referred.
        - Constructor make implicit calls to new and delete operators during memory allocation.
        - Constructors have the same name as the class and may be defined inside or outside the class definition. There are 3 types of constructors:
        
            - Default Constructors - https://www.geeksforgeeks.org/default-constructors-in-cpp/

            - Parameterized Constructors
            
            - Copy Constructors - https://www.geeksforgeeks.org/copy-constructor-in-cpp/
                Copy constructor takes a reference to an object of the same class as an argument. 

            - Inline constructor

            - Overloaded constructor

            - Constructor with default value

        - Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments
        - If we do not specify a constructor, C++ compiler generates a default constructor for object
        - Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) should also be explicitly defined as the compiler will not provide a default constructor in this case. 