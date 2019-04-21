#ifndef STUDENT_H
#define STUDENT_H

#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    student();
//    student(char s[],char p[], long int r);
    student(string s, string p, string r);
    string getName();
    void getdata();
    void display();
    string getRoll();
    string getPass();
    //void in(int pn);
   // void out();
    bool operator ==(student uu) const;

protected:

    string name;
    string password;
    string roll;
};

#endif // STUDENT_H

