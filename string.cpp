//Program to recieve and display a user input string using C++ by Vishruth codes
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"\nEnter your name: ";
    getline(cin, name);
    cout<<"\nGreetings, "<<name<<"!";
}