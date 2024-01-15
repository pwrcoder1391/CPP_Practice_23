// Multiple inheritance with constructors being derived -- this will go on to become part of library management system 


#include<iostream>
#include<string>


using namespace std;


class books{

    private:
        int book_id;
        string book_name;

    public:

        books(int book_i,string book_n):book_id{book_i},book_name{book_n}
        {
            cout<<"parametrized constructor \n";
        }

        books():book_id{0},book_name{"NA"}
        {
            cout<<"default constructor \n";
        }

        string get_book_name()
        {
            return book_name;
        }

        int get_book_id()
        {
            return book_id;
        }

        void input_books(int book_i , string book_n)
        {
            book_id = book_i;
            book_name = book_n;
            cout<<"book_updated";
        }

        ~books()
        {
            cout<<"destructor \n";
        }
};


class student : public books{
    private:
        int student_roll_no;
        string student_name;

    public:

        student(int student_r , string student_n, int book_i,string book_n):student_roll_no{student_r},student_name{student_n},books{book_i,book_n}
        {
            cout<<"parametrized constructor of student \n";
        }

        student():student_roll_no{0},student_name{"NA"},books{0,"NA"}
        {
            cout<<"default constructor of student \n";
        }

        void book_update_new(int book_i , string book_n)
        {
            input_books(book_i ,book_n);
        }

        void book_update_existing(books& new_book)
        {
            input_books(new_book.get_book_id() , new_book.get_book_name());
        }

        void print_student_details() // this will contained parent book id and name 
        {
            cout<<"student name - "<<student_name<<"\t student roll number - "<<student_roll_no;
            cout<<"\t book borrowed id - "<<get_book_id()<<"\t book name - " <<get_book_name()<<endl;
        }

        ~student()
        {
            cout<<"destructor of student \n";
        }

};


int main()
{
    student A{122 , "Pronnoy" , 2632 , "Camus"};
    A.print_student_details();
    A.book_update_new(556 , "Premchand");
    A.print_student_details();

    books B{557 , "Parsai"};
    A.book_update_existing(B);
    A.print_student_details();
    return 0;
}

