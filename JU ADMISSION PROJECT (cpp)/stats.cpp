#include <bits/stdc++.h>
using namespace std;

#include "stats.h"
#include "aunit.h"

void stats :: show_stat()
{
    cout<<setw(60)<<"Department of Statistics"<<endl;
    aunit::show_amarksdist();
    cout<<"Total number of seats , male=35, female=25"<<endl;
    cout<<"Minimum requirement: at least B grade in mathematics/statistics in HSC and total GPA 7.50 in HSC & SSC"<<endl;
}
