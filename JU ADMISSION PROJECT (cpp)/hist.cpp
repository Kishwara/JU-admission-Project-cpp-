
#include <bits/stdc++.h>
using namespace std;

#include "hist.h"
#include "cunit.h"

void hist :: show_hist()
{
    cout<<setw(60)<<"Department of History"<<endl;
    cunit::show_cmarksdist();
    cout<<"Total number of seats , male=33, female=23"<<endl;
    cout<<"\nMinimum requirement: at least A- grade in Bangla & B grade in English in HSC and total GPA 7.00 in HSC & SSC for Humanities";
    cout<<"total GPA 7.50 in HSC & SSC for Business Studies/Science/Others"<<endl;
}
