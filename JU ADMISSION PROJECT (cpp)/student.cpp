#include<iostream>
using namespace std;

#include "student.h"

student :: student()
{
    name = "";
    password = "";
    roll="";

}

student :: student (string s, string p, string r)
{
    name = s;
    password = p;
    roll = r;
}

string student :: getName()
{
    return name;
}

string student :: getRoll()
{
    return roll;
}

string student :: getPass()
{
    return password;
}

void student :: getdata()
{
    cout<<"\t\tEnter your name: ";
    cin>>name;
    cout<<"\t\tEnter your roll: ";
    cin>>roll;
    cout<<"\t\tEnter your password: ";
    cin>>password;
}

void student :: display()
{
    cout << "\n\n";
    cout<<"\tName: "<<name<<endl;
    cout<<"\tRoll: "<<roll<<endl;
}


bool student :: operator ==(student uu) const
{
    if(name==uu.name and password==uu.password)
    {
        return true;
    }
    else
    {
        return false;
    }
}
