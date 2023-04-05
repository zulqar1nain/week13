#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
string usernames[100];
string passwords[100];
int usercount = 0;
void adduser(string username, string password);
bool signin(string username, string password);
void viewuser();
void storetofile(string username, string password);
bool isvalidusername(string username);
int takechoice();
main()
{
    string username;
    string password;
    bool decision = false;
    int choice;
    while (choice != 0)
    {
        choice = takechoice();
        if (choice == 1)
        {
            cout << "Enter your username";
            cin >> username;
            cout << "Enter your password";
            cin >> password;
            decision = isvalidusername(username);
            if (decision == true)
            {
                adduser(username, password);
                storetofile(username, password);
                cout << "user created successfuly" << endl;
                getch();
                system("CLS");
            }
            else
            {
                cout << "User already exit";
                system("CLS");
            }
        }
        if (choice == 2)
        {
            cout << "Enter your username";
            cin >> username;
            cout << "Enter your password";
            cin >> password;
            decision = isvalidusername(username);
            if (decision == true)
            {
                cout << "Login successful" << endl;
            }
            else
            {
                cout << "in credentials" << endl;
            }
        }
        if (choice == 3)
        {
            viewuser();
        }
        if (choice == 4)
        {
            cout << "Exit";
            break;
        }
    }
}
void adduser(string username, string password)
{
    usernames[usercount] = username;
    passwords[usercount] = password;
    usercount++;
}
bool signin(string username, string password)
{

    bool flag = false;
    for (int index = 0; index < usercount; index++)
    {
        if (usernames[index] == username && passwords[index] == password)
        {
            flag = true;
            break;
        }
    }
    return flag;
}
void viewuser()
{
    cout << "Username"
         << "\t"
         << "\t"
         << "Password" << endl
         << endl;
    for (int index = 0; index < usercount; index++)
    {
        cout << usernames[index] << "\t"
             << "\t" << passwords[index] << endl;
    }
}
void storetofile(string username, string password)
{
    fstream file;
    file.open("task.txt", ios::app);
    file << username << endl;
    file << password << endl;
    file.close();
}
bool isvalidusername(string username)
{
    bool flag = true;
    for (int index = 0; index < usercount; index++)
    {
        if (usernames[index] == username)
        {
            flag = false;
            cout << "user already exists!"<<endl;
            getch();
            break;
        }
    }
    return flag;
}
int takechoice()
{
    int choice;
    cout << "1.SignUp" << endl;
    cout << "2.SignIn" << endl;
    cout << "3.Viewuser" << endl;
    cout << "4.Exit" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
    return choice;
}

void loaddatafromfile()
{
    string username;
    string password;
    fstream file;
    file.open("task.txt", ios::in);
    while (getline(file, username) && getline(file, password))
    {
        usernames[usercount] = username;
        passwords[usercount] = password;
        usercount++;
    }
    file.close();
}
