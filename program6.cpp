//construction overlaoding
#include<iostream>
using namespace std;
class add
{
int a;
int b;
int c;
float u;
float i;
double addition;;
public:
add(int m,int n)
{
    a=m;
    b=n;
    addition=a+b;
}
add(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
    addition=a+b+c;
}
add(float p, float o)
{
    u=p;
    i=o;
    addition=u+i;
}
void display()

     {
        cout<<"Addition of two numbers is: "<<addition<<endl;
    }
};
int main()
{
    add addi(10,20);
    add addi2(30,40,50);
    add addi3(1.2f,4.9f);
    addi.display();
    addi2.display();
    addi3.display();
}
/*output:
Addition of two numbers is: 30
Addition of two numbers is: 120
Addition of two numbers is: 6.1
*/
