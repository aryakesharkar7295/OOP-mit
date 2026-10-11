#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int marks;
    int collegeID;
    Student()
    {
        name="Unknown";
        marks=0;
        collegeID=0;
    }
    Student(int marks,int collegeID,string name)
    {
        this->marks=marks;
        this->collegeID=collegeID;
        this->name=name;
    }
    void Display()
    {
        cout<<"Current marks of the students="<<this->marks<<endl;
        cout<<"Name of the student="<<name<<endl;
        cout<<"College ID of the student="<<collegeID<<endl;
    }
    void Input()
    {
        cout<<"Enter the updated marks of the student=";
        cin>>marks;
        cout<<"Enter updated name of the student=";
        cin>>name;
        cout<<"Enter updated CollegeID of the student=";
        cin>>collegeID;
    }
};
int main()
{
    Student s1;
    s1.Input();
    s1.Display();
    return 0;
}
