#include <bits/stdc++.h>
using namespace std;

#include "student.h"
#include "aunit.h"
#include "maths.h"
#include "stats.h"
#include "chem.h"
#include "phy.h"
#include "geo.h"
#include "cse.h"
#include "env.h"

#include "bunit.h"
#include "eco.h"
#include "ge.h"
#include "gov.h"
#include "anthro.h"
#include "urp.h"
#include "pad.h"

#include "cunit.h"
#include "ban.h"
#include "eng.h"
#include "hist.h"
#include "phil.h"
#include "drama.h"
#include "arch.h"
#include "ir.h"
#include "jour.h"
#include "finearts.h"
#include "dunit.h"
#include "bot.h"
#include "zoo.h"
#include "phar.h"
#include "biochem.h"
#include "mbio.h"
#include "gene.h"
#include "health.h"
#include "eunit.h"
#include "funit.h"
#include "gunit.h"
#include "hunit.h"

void user_interface();

int x;
student s;
int stu = 0;

fstream theFile;

int main()
{

    int choice,option;
    cout<<setw(70)<<"********************************************************"<<endl<<endl;
    cout<<setw(70)<<"Welcome to Jahangirnagar University Admission Exhibitor"<<endl<<endl;
    cout<<setw(70)<<"********************************************************"<<endl<<endl;

    student s;

    vector <string> aunitname,aunitroll;
    vector <string> bunitname,bunitroll;
    vector <string> cunitname,cunitroll;
    vector <string> dunitname,dunitroll;
    vector <string> eunitname,eunitroll;
    vector <string> funitname,funitroll;
    vector <string> gunitname,gunitroll;
    vector <string> hunitname,hunitroll;
    vector <string> allunitname,allunitroll;

    map<string,string> mp;

label2:
    while(1)
    {
        cout << "\n\t\tEnter 1 for sign up!\n\t\tEnter 2 for login And Watch Faculty to Details!\n\t\tEnter 3 for watching All Unit Applicant List!\n";
        cout << "\t\tEnter 4 for All Applicants List\n\t\tEnter 0 to Exit!\n\n\t\t";
        cin>>choice;
        if(choice == 0)
        {
            return 0;
        }
        else if(choice == 4)
        {
            string line, line2, line3;
            theFile.open("TotalUserList.txt", std::fstream::in|std::fstream::out|std::fstream::app);
            cout << "\t\tList of Students Applying for All units :: \n";

            cout <<"\n\n";

            while(!theFile.eof())
            {
                theFile >> line >> line2;
                allunitname.push_back(line);
                allunitroll.push_back(line2);

            }
            cout << "\t\tNumber of Students applying for All Units is " << allunitname.size()-1 << endl << endl;

            cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

            for(int i=0; i<allunitname.size()-1; i++)
            {
                cout << "\t\t";
                cout << i+1 << ". " << setw(10) << allunitname[i] << setw(10) << allunitroll[i] << endl;
            }
            cout <<"\n\n";
            theFile.close();
            allunitname.clear();
            allunitroll.clear();
        }
        else if(choice == 1)
        {
            s.getdata();

            theFile.open("TotalUserList.txt", std::fstream::in|std::fstream::out|std::fstream::app);
            theFile << s.getName() <<  " " << s.getRoll()  << endl;
            theFile.close();

            mp[s.getName()] = s.getRoll();
            stu++;

            int xx;

lab:
            cout << "\n\n\t\tYou want to apply for which faculty!\n\n";

            cout << "\t\t1. A Unit\t2. B Unit\t3. C Unit\t4.D Unit\t\n\t\t5.E Unit\t6.F Unit\t7.G Unit\t8. H Unit\n\n\t\t0.None";

            cout << "\n\n\t\tPlease Enter your choice  :: ";

            cin>>xx;

            if(xx==0) cout << "\t\tNo Dept Selected\n\n";
            else if(xx==1)
            {
                theFile.open("aunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                theFile << s.getName() << endl << s.getRoll() << endl;
            }
            else if(xx==2)
            {
                theFile.open("bunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                theFile << s.getName() << endl << s.getRoll() << endl;
            }
            else if(xx==3)
            {
                theFile.open("cunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                theFile << s.getName() << endl << s.getRoll() << endl;
            }
            else if(xx==4)
            {
                theFile.open("dunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                theFile << s.getName() << endl << s.getRoll() << endl;
            }
            else if(xx==5)
            {
                theFile.open("eunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                theFile << s.getName() << endl << s.getRoll() << endl;
            }
            else if(xx==6)
            {
                theFile.open("funitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                theFile << s.getName() << endl << s.getRoll() << endl;
            }
            else if(xx==7)
            {
                theFile.open("gunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                theFile << s.getName() << endl << s.getRoll() << endl;
            }
            else if(xx==8)
            {
                theFile.open("hunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                theFile << s.getName() << endl << s.getRoll() << endl;
            }

            theFile.close();


            cout << "\t\tEnter 1 for choosing Multiple units \n\t\tPress 0 to continue  :: ";
            cin>>xx;
            if(xx==1)
            {
                goto lab;
            }


        }
        else if (choice==2)
        {
            break;
        }
        else if(choice==3)
        {
            int tt;
            cout << "\t\tWhich Unit????\n\n";
            cout << "\t\t1. A Unit\t2. B Unit\t3. C Unit\t4.D Unit\t\n\t\t5.E Unit\t6.F Unit\t7.G Unit\t8. H Unit";
            cout << "\n\n\t\tPlease Enter your choice  :: ";

            cin>>tt;

            if(tt==1)
            {

                string line, line2;
                theFile.open("aunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                cout << "\t\tList of Students Applying for A unit :: \n";

                cout <<"\n\n";

                while(!theFile.eof())
                {
                    theFile >> line >> line2;
                    aunitname.push_back(line);
                    aunitroll.push_back(line2);
                }
                cout << "\t\tNumber of Students applying for A Unit is " << aunitname.size()-1 << endl << endl;

                cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

                for(int i=0; i<aunitname.size()-1; i++)
                {
                    cout << "\t\t";
                    cout << i+1 << ". " << setw(10) << aunitname[i] << setw(10) << aunitroll[i] << endl;
                }
                cout <<"\n\n";
                theFile.close();
                aunitname.clear();
                aunitroll.clear();
            }
            else if(tt==2)
            {
                // bunit
                string line, line2;
                theFile.open("bunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                cout << "\t\tList of Students Applying for B unit :: \n";

                cout <<"\n\n";

                while(!theFile.eof())
                {
                    theFile >> line >> line2;
                    bunitname.push_back(line);
                    bunitroll.push_back(line2);
                }
                cout << "\t\tNumber of Students applying for B Unit is " << bunitname.size()-1 << endl << endl;

                cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

                for(int i=0; i<bunitname.size()-1; i++)
                {
                    cout << "\t\t";
                    cout << i+1 << ". " << setw(10) << bunitname[i] << setw(10) << bunitroll[i] << endl;
                }
                cout <<"\n\n";
                theFile.close();
                bunitname.clear();
                bunitroll.clear();
            }
            else if(tt==3)
            {
                // cunit
                string line, line2;
                theFile.open("cunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                cout << "\t\tList of Students Applying for C unit :: \n";

                cout <<"\n\n";

                while(!theFile.eof())
                {
                    theFile >> line >> line2;
                    cunitname.push_back(line);
                    cunitroll.push_back(line2);
                }
                cout << "\t\tNumber of Students applying for C Unit is " << cunitname.size()-1 << endl << endl;

                cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

                for(int i=0; i<cunitname.size()-1; i++)
                {
                    cout << "\t\t";
                    cout << i+1 << ". " << setw(10) << cunitname[i] << setw(10) << cunitroll[i] << endl;
                }
                cout <<"\n\n";
                theFile.close();
                cunitname.clear();
                cunitroll.clear();
            }
            else if(tt==4)
            {
                // dunit
                string line, line2;
                theFile.open("dunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                cout << "\t\tList of Students Applying for D unit :: \n";

                cout <<"\n\n";

                while(!theFile.eof())
                {
                    theFile >> line >> line2;
                    dunitname.push_back(line);
                    dunitroll.push_back(line2);
                }
                cout << "\t\tNumber of Students applying for D Unit is " << dunitname.size()-1 << endl << endl;

                cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

                for(int i=0; i<dunitname.size()-1; i++)
                {
                    cout << "\t\t";
                    cout << i+1 << ". " << setw(10) << dunitname[i] << setw(10) << dunitroll[i] << endl;
                }
                cout <<"\n\n";
                theFile.close();
                dunitname.clear();
                dunitroll.clear();
            }
            else if(tt==5)
            {

                string line, line2;
                theFile.open("eunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                cout << "\t\tList of Students Applying for E unit :: \n";

                cout <<"\n\n";

                while(!theFile.eof())
                {
                    theFile >> line >> line2;
                    eunitname.push_back(line);
                    eunitroll.push_back(line2);
                }
                cout << "\t\tNumber of Students applying for E Unit is " << eunitname.size()-1 << endl << endl;

                cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

                for(int i=0; i<eunitname.size()-1; i++)
                {
                    cout << "\t\t";
                    cout << i+1 << ". " << setw(10) << eunitname[i] << setw(10) << eunitroll[i] << endl;
                }
                cout <<"\n\n";
                theFile.close();
                eunitname.clear();
                eunitroll.clear();
            }
            else if(tt==6)
            {
                string line, line2;
                theFile.open("funitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                cout << "\t\tList of Students Applying for F unit :: \n";

                cout <<"\n\n";

                while(!theFile.eof())
                {
                    theFile >> line >> line2;
                    funitname.push_back(line);
                    funitroll.push_back(line2);
                }
                cout << "\t\tNumber of Students applying for F Unit is " << funitname.size()-1 << endl << endl;

                cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

                for(int i=0; i<funitname.size()-1; i++)
                {
                    cout << "\t\t";
                    cout << i+1 << ". " << setw(10) << funitname[i] << setw(10) << funitroll[i] << endl;
                }
                cout <<"\n\n";
                theFile.close();
                funitname.clear();
                funitroll.clear();
            }
            else if(tt==7)
            {
                // gunit
                string line, line2;
                theFile.open("gunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                cout << "\t\tList of Students Applying for G unit :: \n";

                cout <<"\n\n";

                while(!theFile.eof())
                {
                    theFile >> line >> line2;
                    gunitname.push_back(line);
                    gunitroll.push_back(line2);
                }
                cout << "\t\tNumber of Students applying for G Unit is " << gunitname.size()-1 << endl << endl;

                cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

                for(int i=0; i<gunitname.size()-1; i++)
                {
                    cout << "\t\t";
                    cout << i+1 << ". " << setw(10) << gunitname[i] << setw(10) << gunitroll[i] << endl;
                }
                cout <<"\n\n";
                theFile.close();
                gunitname.clear();
                gunitroll.clear();
            }
            else if(tt==8)
            {
                // hunit
                string line, line2;
                theFile.open("hunitlist.txt", std::fstream::in|std::fstream::out|std::fstream::app);
                cout << "\t\tList of Students Applying for H unit :: \n";

                cout <<"\n\n";

                while(!theFile.eof())
                {
                    theFile >> line >> line2;
                    hunitname.push_back(line);
                    hunitroll.push_back(line2);
                }
                cout << "\t\tNumber of Students applying for H Unit is " << hunitname.size()-1 << endl << endl;

                cout << "\t\t   " <<setw(10) <<  "Name" << setw(10) << "Roll" << endl;

                for(int i=0; i<hunitname.size()-1; i++)
                {
                    cout << "\t\t";
                    cout << i+1 << ". " << setw(10) << hunitname[i] << setw(10) << hunitroll[i] << endl;
                }
                cout <<"\n\n";
                theFile.close();
                hunitname.clear();
                hunitroll.clear();

            }


        }

    }
    while(1)
    {
        cout << "\n\n\t\t\tPlease LogIn ::: \n\n";

        bool ans;
        student s2;
        s2.getdata();

        if(mp[s2.getName()] == "") cout << "\n\t\tINVALID USERNAME";
        else
        {
            if(mp[s2.getName()] == s2.getRoll())
            {
                cout << "\t\tLogin Successful Password Matched!\n\n";
                ans = true;
            }
            else
                ans = false;
        }

        if(!ans)
        {
            cout<<"\n\n\t\tPassword not matched . Try Another Login\n";
            goto label2;
        }
        int f = 0;
        while(ans)
        {
            f = 0;
            cout << "\n\n\t\tDo you want to see the list of available units and departments? (Y/N)\n\t\t or Enter 0 to exit\n\n\t\t";
            char ch;
            cin>>ch;
            if(ch=='y' or ch=='Y')
            {
                user_interface();
            }
            else if(ch=='n' or ch=='N')
            {
                goto label2;
            }
            else
            {
                ans=0;
                break;
            }

            cout << "\n\n\t\tEnter the number according to the list to get more detailed info:: \n\n";

            cin>>option;
            cout<<"\n\n";

            switch (option)
            {
            case 101:
            {


                aunit *a;
                //a = new aunit;
                a->show_adepts();
                a->show_amarksdist();
//
                break;
            }


            case 1:
            {



                maths *m;
                //m = new maths;
                m->show_maths();

                break;
            }

            case 2:

                stats *stt;
                stt -> show_stat();
                break;

            case 3:

                chem *c;
                //c = new chem;
                c->show_chem();
                break;

            case 4:

                phy *p;
               // p = new phy;
                p->show_phy();
                break;

            case 5:

                geo *g;
               // g = new geo;
                g->show_geo();
                break;

            case 6:

                cse *cs;
                //cs = new cse;
                cs->show_cse();
                break;

            case 7:

                env *e1;
                //e1 = new env;
                e1->show_env();
                break;

//            case (102):
//
//                bunit b1;
//                b1.show_bdepts();
//                b1.show_bmarksdist();
//                break;

            case 8:


                bunit *ptr;
               // ptr = new eco;
                ptr->show();
                break;

            case 9:

                bunit *g1;
                //g1 = new ge;
                g1->show();
                break;

            case 10:

                bunit *go;
                go->show();
                break;


            case 11:

                bunit *an;
                //an = new anthro;
                an->show();
                break;

            case 12:

                bunit *ur;
                //ur = new urp;
                ur->show();
                break;

            case 13:

                bunit *pa;
                //pa = new pad;
                pa->show();
                break;

            case 103:

                cunit cu;
                cu.show_cdepts();
                cu.show_cmarksdist();
                break;

            case 14:

                ban ba;
                ba.show_ban();
                break;

            case 15:

                eng eg;
                eg.show_eng();
                break;


            case 16:

                hist hs;
                hs.show_hist();
                break;

            case 17:

                phil phl;
                phl.show_phil();
                break;

            case 18 :

                drama dr;
                dr.show_drama();
                break;

            case 19:

                arch arc;
                arc.show_arch();
                break;

            case 20:

                ir i1;
                i1.show_ir();
                break;

            case 21:

                jour jo;
                jo.show_jour();
                break;

            case 22:

                finearts fi;
                fi.show_finearts();
                break;


            case 104:

                dunit du;
                du.show_ddepts();
                du.show_dmarksdist();
                break;


            case 23:

                bot bo;
                bo.show_bot();
                break;


            case 24:

                zoo zo;
                zo.show_zoo();
                break;

            case 25:

                phar pha;
                pha.show_phar();
                break;

            case 26:

                biochem bioc;
                bioc.show_biochem();
                break;

            case 27:

                mbio mbi;
                mbi.show_mbio();
                break;


            case 28:

                gene gen;
                gen.show_gene();
                break;

            case 29:

                health heal;
                heal.show_health();
                break;

            case 105:

                eunit eu;
                eu.show_edepts();
                eu.show_emarksdist();
                break;

            case 30:

                eunit bank;
                cout<<"\n  Department of Finance & Banking\n";
                bank.show_emarksdist();
                break;

            case 31:

                eunit marketing;
                cout<<"\n  Department of Marketing\n";
                marketing.show_emarksdist();
                break;

            case 32:

                eunit accounting;
                cout<<"\n  Department of Accounting\n";
                accounting.show_emarksdist();
                break;

            case 33:

                eunit management;
                cout<<"\n  Department of Management\n";
                management.show_emarksdist();
                break;

            case 106:

                funit fu[10];
                fu[0].show_law();
                break;


            case 107:

                gunit gu;
                gu.show_iba();
                break;


            case 108:

                hunit hu;
                hu.show_iit();
                break;


            case 0:
                ans=0;
            }

        }
        if(ans==0) break;
    }
    return 0;
}


void user_interface()
{

    cout<<"\n\n\n";
    cout<<"Enter 101. for Faculty of Mathematics & Physics  (A unit)"<<endl<<"\n";
    cout<<"1.Mathematics \n2.Statistics \n3.Chemistry"<<endl;
    cout<<"4.Physics  \n5.Geological Sciences"<<endl;
    cout<<"6.Computer Science and Engineering \n7.Environmental Sciences"<<endl;
    cout<<".........................................................................."<<endl;

    cout<<"\n\nEnter 102.Faculty of Social Science (B unit)"<<endl
        <<"8.Economics \n9.Geography & Environment"<<endl
        <<"10.Government & Politics \n11.Anthropology"<<endl
        <<"12.Urban & Regional Planing \n13.Public Administration"<<endl;
    cout<<".........................................................................."<<endl;

    cout<<"\nEnter 103.Faculty of Arts and Humanities (C unit)\n"<<endl;
    cout<<"14.Bangla  \n15.English  \n16.History"<<endl;
    cout <<"17.Philosophy  \n18.Drama & Dramatics"<<endl;
    cout<<"19.Archeology  \n20.International Relations"<<endl;
    cout<<"21.Journalism & Media Studies  \n22.Fine Arts"<<endl;
    cout<<".........................................................................."<<endl;

    cout<<"\nEnter 104.Faculty of Biology(D unit)\n"<<endl;
    cout<<"23.Botany    \n24.Zoology    \n25.BioChemistry & Molecular Science"<<endl;
    cout<<"26.Microbiology    \n27.Geological Sciences"<<endl;
    cout<<"28.BioTechnology & Genetic Engineering    \n29.Public Health & Informatics"<<endl;
    cout<<".........................................................................."<<endl;

    cout<<"\nEnter 105.Faculty of Business Studies (E unit)\n"<<endl;
    cout <<"30.Finance & Banking     \n31.Marketing"<<endl;
    cout<<"32.Accounting & Information System     \n33.Management Studies"<<endl;
    cout<<".........................................................................."<<endl;

    cout<<"\n106.Faculty of Law (F unit)"<<endl;

    cout<<"107.Institute of Business Administration(IBA-JU) (G unit)"<<endl;

    cout<<"108.Institute of Information Technology(H unit)"<<endl;
}
