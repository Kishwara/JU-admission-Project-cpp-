#ifndef BUNIT_H
#define BUNIT_H

#include <bits/stdc++.h>
using namespace std;


class bunit
{
    public:
        void show_bdepts();
        void show_bmarksdist();

        virtual void show() = 0;

    protected:
    private:
};

#endif // BUNIT_H
