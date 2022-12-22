#include<iostream>  //6 
#include<string>
using namespace std;

class Student
{
    int sports;
    int exam;

    public:
        Student (int a, int b)    
        {
            sports = a; 
            exam = b;
        }
        void  display_value()  
        {
            cout<<"Student sports: "<<sports;
            cout<<"\nStudent I.D.: "<<exam;
        }
};

class Sports : virtual public Student
{
    int s_grade;

    public:
        Sports(int a, int b, int s) : Student(a,b)  
        { 
            s_grade = s;
        }
        void display_svalue()
        {
            cout<<"\nSports grade: "<<s_grade;
        }
};

class Exam: virtual public Student
{
    int e_grade;

    public:
        Exam(int a, int b, int e) : Student(a,b)
        {
            e_grade = e;
        }
        void display_evalue()  
        {   
            cout<<"\nExam grade: "<<e_grade;
        }
};

class Results: public Sports, public Exam
{
    string result;

    public:
        Results (int a,int b, int s, int e) : Sports(a,b,s),Exam(a,b,e)
        {
        

        }
        void display()
        {
            Student ::display_value();
            Sports ::display_svalue();
            Exam ::display_evalue(); 
        }
};

int main()
{
    Results s1(100,100,60,78);
    s1.display();
    s1.display_value();
    
}