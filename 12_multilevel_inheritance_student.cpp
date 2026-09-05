#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int agee)
    {
        name = n;
        age = agee;
    }
    void displayPerson()
    {
        cout << "NAME OF THE PERSON: " << name << endl;
        cout << "AGE OF THE PERSON: " << age << endl;
    }
};
class Student : public Person
{
protected:
    int rollNo;
    string Department;

public:
    Student(string n, int agee, int r, string d) : Person(n, agee), rollNo(r), Department(d) {}
    void displayStudent()
    {
        cout << "ROLL NO IS: " << rollNo << endl;
        cout << "Department: " << Department << endl;
    }
};
class EngineeringStudent : public Student
{
private:
        string branch;
        float gpa;
public:
        EngineeringStudent(string ss,int aa,int rr,string dd,string b,float cgpa): Student(ss,aa,rr,dd),branch(b),gpa(cgpa){}
        void displayAcademicProfile()
        {
            displayPerson();
            displayStudent();
            cout<<"BRANCH: "<<branch<<endl;
            cout<<"GPA: "<<gpa<<endl;
        }
        };
        int main()
        {
            cout<<"Enter the name of the student: ";
            string name;
            getline(cin,name);
            cout<<"Enter the age of the student: "; 
            int age;
            cin>>age;
            cout<<"Enter the roll number of the student: ";
            int rollNo;
            cin>>rollNo;
            cin.ignore(); // To ignore the newline character left by cin
            cout<<"Enter the department of the student: ";
            string department;
            getline(cin,department);
            cout<<"Enter the branch of the student: ";
            string branch;
            getline(cin,branch);
            cout<<"Enter the GPA of the student: ";
            float gpa;
            cin>>gpa;
            EngineeringStudent engStudent(name, age, rollNo, department, branch, gpa);
            engStudent.displayAcademicProfile();
        }