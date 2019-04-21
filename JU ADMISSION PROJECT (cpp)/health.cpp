#include <bits/stdc++.h>
using namespace std;

#include "dunit.h"
#include "health.h"

void health :: show_health()
{
    cout<<setw(60)<<"Department of Public Health"<<endl;
    dunit::show_dmarksdist();
    cout<<"Total number of seats , male=23, female=17"<<endl;
    cout<<"\nMinimum requirement: at least A- grade in Biology & Chemistry and B grade in Mathematics in HSC and total GPA 8.00 in HSC & SSC"<<endl;
}
