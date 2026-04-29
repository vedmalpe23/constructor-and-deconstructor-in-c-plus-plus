//parameterized constructor
#include<iostream>
using namespace std;
class addition
{
    int a,b;
    int add;
    public:
    addition(int m,int n)
    {
        a=m;
        b=n;
        add=a+b;
    }
    void display()
    {
        cout<<"Addition of two numbers is: "<<add<<endl;
    }
};
int main()
{
    addition addi(10,20);
    addi.display();
    return 0;
}
/*output:
Addition of two numbers is: 30
*/
