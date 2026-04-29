//copy contructor
#include<iostream>
using namespace std;
class Student
{
    int age;
    string name;
public:
Student(string n, int a)
{
    name=n;
    age=a;
}
Student(const Student &s)
{
    name=s.name;
    age=s.age;
    cout<<"Copy constructor called!"<<endl;
}
void display()
{
    cout<<"Name: "<<name<<" , Age: "<<age<<endl;
}
};
int main()
{
    Student s1("Tarushi",19);
    Student s2=s1;
    cout<<"Original Object: ";
    s1.display();
    cout<<"Copied object: ";
    s2.display();
    return 0;
}
/*output:
Copy constructor called!
Original Object: Name: Tarushi , Age: 19
Copied object: Name: Tarushi , Age: 19
*/
