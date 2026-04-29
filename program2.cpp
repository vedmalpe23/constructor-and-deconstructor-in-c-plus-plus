//default class constructor outside class
#include <iostream>
#include <string>
using namespace std;

class Login {
    string username;
    string password;

public:
Login();
void display();
};
Login::Login()
{
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
    }
void Login::display()
     {
        cout << "Welcome " << username << endl;
    }


int main() {
    Login l;
    l.display();
    return 0;
}

/*output:
Enter username: TarushiV26
Enter password: taru
Welcome TarushiV26
*/
