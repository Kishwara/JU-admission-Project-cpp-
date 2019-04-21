#include <bits/stdc++.h>
using namespace std;

#include "chem.h"
#include "aunit.h"

void chem :: show_chem()
{
    cout<<setw(60)<<"Department of Chemistry"<<endl;
    aunit::show_amarksdist();
    cout<<"Total number of seats , male=33, female=23"<<endl;
    cout<<"Minimum requirement: at least B grade in mathematics & A grade in chemistry in HSC and total GPA 8.00 in HSC & SSC"<<endl;
}
