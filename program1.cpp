//default class constructor inside class 
#include <iostream>
using namespace std;

class student {
    int rollno;
    char name[50];
    double fee;

public:
    student() {
        cout<<"Enter roll number: ";
        cin>>rollno;
        cout<<"Enter the name: ";
        cin>>name;
        cout << "Enter the fees: ";
        cin >> fee;
    }

    void display() {
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Name: " << name << endl;
        cout<<"Fee: " << fee << endl;
    }
};

int main() {
    student s;  
    s.display();
    return 0;
}

/*output:
Enter roll number: 32
Enter the name: Tarushi
Enter the fees: 300000
Roll number: 32
Name: Tarushi
Fee: 300000
*/
