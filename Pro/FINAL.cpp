#include<iostream>
#include<iomanip>
#include<string.h>
#include<fstream>
#include<stdlib.h>
#include<ctime>
#include<windows.h>
#include<MMsystem.h>
using namespace std;

int stu = 400;
int coun;
  ifstream inn("NA.txt");
  ifstream inc("1CE.txt");
  ifstream ins("SE.txt");
  ifstream inm("MR.txt");
  ifstream inp("PA.txt");
  ifstream ino("OT.txt");



class student
{

    string name  , grade[5];
    static string password ;
    int subject[5] , total , rnk,centre_no,mainmark, seat_no;
    float percantage ;
     public :
    student ()
    {
        total = 0;
        mainmark = 0;
    }

    student(student &s);
    static string getpass();
    static void passw();
    void detail();
    int  gettotal();
    void result ();
    int  getseat();
    void comtotper();
    void rk(int );
    void getgrade();
    int  getmaintotal();
    void mrank(int);
    void marank(int);
    int getmamar();
    void pyrank(int);
    int getpymar();
    void comrank(int);
    int getcommar();
    void cemrank(int);
    int getcemmar();
    void engrank(int);
    int getengmar();
    int getcent();
    void dimrank(int,int);
    void dimarank(int,int);
    void dicerank(int,int);
    void dipyrank(int,int);
    void dicorank(int,int);
    void dienrank(int,int);
    static void  resetpassword(int);




};
int student:: getcent()
{
    return centre_no;
}
int student :: getmamar()
{
    return subject[0];
}
int student :: getpymar()
{
    return subject[1];
}
int student :: getcommar()
{
    return subject[4];
}
int student :: getcemmar()
{
    return subject[2];
}
int student :: getengmar()
{
    return subject[3];
}

student :: student (student &s)
{
    name =s.name;
      total=s.total;
      rnk = s.rnk;
      centre_no = s.centre_no;
      mainmark = s.mainmark;
      seat_no=s.seat_no;
      percantage=s.percantage;
      for(int i=0;i<5;i++)
      {
          grade[i]=s.grade[i];
          subject[i]=s.subject[i];
      }



}
void student :: getgrade()
{
    for(int i=0;i<5;i++){
    if(subject[i]>90)
        grade[i]="A1";
    else if(subject[i]>=80&&subject[i]<=90)
        grade[i]="B1";
    else if(subject[i]<80&&subject[i]>=70)
        grade[i]="C1";
    else if(subject[i]<70&&subject[i]>=60)
        grade[i]="D1";
    else if(subject[i]<60&&subject[i]>=33)
        grade[i]="E1";
    else
        grade[i]="FAIL";}
}
void student :: rk(int r)
{
    rnk=r;
}
void student :: detail()
{
    inc >> centre_no;
    ins >> seat_no;
    getline(inn,name);
    inm >>  subject[0];
    inm >>  subject[1];
    inm >>  subject[2];
    inm >>  subject[3];
    inm >>  subject[4];
}

 void student :: comtotper()
{

      for(int j=0;j<5;j++)
     {
        total+=subject[j];

     }
    percantage = float(total)/5;
}

int student ::  gettotal ()
{
    int t;
    t=total;
    return t;
}
int student :: getmaintotal()
{
   mainmark =  subject[0]+subject[1]+subject[2];
    return mainmark;
}
int  student :: getseat()
{
    return seat_no;
}
void student :: result ()
{

    system("cls");
    system("color 74");
    cout <<endl<<endl<< endl<<"\t\t\t\t";
    for(int g=1;g<95;g++)
    {
        cout << "-";
    }
    cout <<endl;
    cout <<"\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t     |";
    cout << "\n\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t     |\n\t\t\t\t|\t\t\tGUJARAT SECONDARY AND  HIGHER SECONDARY BOARD\t\t\t     |\n";
    cout << "\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t     |\n\t\t\t\t|";
    cout << "\t\t\t\t\t\t\t\t\t\t\t     |\n";
    cout << "\t\t\t\t|\tSTUDENT NAME : " ; cout.width(20);cout.setf(ios::left,ios::adjustfield);cout << name<< "\t\t\t\tCENTER NO  : ";cout.width(5);cout.setf(ios::left,ios::adjustfield);cout<< centre_no<<"   |"<<endl ;
    cout << "\t\t\t\t|\tSEAT NO      : " ;cout.width(10);cout.setf(ios::left,ios::adjustfield);cout << seat_no << "\t\t\t\t\tMERIT RANK : ";cout.width(3);cout.setf(ios::left,ios::adjustfield);cout<<rnk<<"     |"<<endl<<"\t\t\t\t|\t\t";
   for(int g=1;g<66;g++)
    {
        cout << "-";
    }
    cout << "\t     |"<<endl;
    cout << "\t\t\t\t|\t\t|SR NO\t|SUBJECTCODE & SUBJECT \t|MARK\t\t|GRADE\t\t\t|"<<"\t     |"<<endl<<"\t\t\t\t|\t\t";
   for(int g=1;g<66;g++)
    {
        cout << "-";
    }
    cout << "\t     |"<<endl;
    cout << "\t\t\t\t|\t\t|1    \t|003 PHYSICS           \t|"<<subject[1]<<"\t\t|"<<grade[1]<<"\t\t|"<<"\t     |"<<endl;
    cout << "\t\t\t\t|\t\t|2    \t|008 MATHS             \t|"<<subject[0]<<"\t\t|"<<grade[0]<<"\t\t|"<<"\t     |"<<endl;
    cout << "\t\t\t\t|\t\t|3    \t|073 CHEMISTRY         \t|"<<subject[2]<<"\t\t|"<<grade[2]<<"\t\t|"<<"\t     |"<<endl;
    cout << "\t\t\t\t|\t\t|4    \t|109 ENGLISH           \t|"<<subject[3]<<"\t\t|"<<grade[3]<<"\t\t|"<<"\t     |"<<endl;
    cout << "\t\t\t\t|\t\t|5    \t|701 COMPUTER          \t|"<<subject[4]<<"\t\t|"<<grade[4]<<"\t\t|"<<"\t     |"<<endl<<"\t\t\t\t|\t\t";
   for(int g=1;g<66;g++)
    {
        cout << "-";
    }
        cout<<"\t     |"<<endl<<"\t\t\t\t|"<<"\t\t\t\t\t\t\t\t\t\t\t     |"<<endl<<"\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t     |"<<endl;
    cout << "\t\t\t\t|\t\t\t\t\tPERCENTAGE : "<< percantage<<"\t\t\t\t     |";
     cout << endl<<"\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t     |"<<endl<<"\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t     |"<<endl<<"\t\t\t\t|";
     cout << "\t\t\t\t\t\t\t\t\t\t\t     |"<<endl<<"\t\t\t\t";
    for(int g=1;g<95;g++)
    {
        cout << "-";
    }
    cout << endl;



}
void student::mrank(int i)
{


cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
cout << " |"<<setw(10)<<i<< " | "<<setw(25)<<name<< " | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[0]+subject[1]+subject[2]<<" | "<<setw(15)<<percantage<<" |"<<endl;


}
void student::marank(int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
cout << " |"<<setw(10)<<i<<" | "<< setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[0]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::pyrank(int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << " |"<<setw(10)<<i<<" | "<<setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[1]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::comrank(int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << " |"<<setw(10)<<i<<" | "<<setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[4]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::cemrank(int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << " |"<<setw(10)<<i<<" | "<<setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[2]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::engrank(int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << " |"<<setw(10)<<i<<" | "<<setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[3]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::dimrank(int y,int i)
{


cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
cout << "\t\t\t\t |"<<setw(15)<<y<<" | "<<setw(15)<<i <<" | "<<setw(25)<<name<< " | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[0]+subject[1]+subject[2]<<" | "<<setw(15)<<percantage<<" |"<<endl;


}
void student::dienrank(int y,int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << "\t\t\t\t |"<<setw(15)<<y<<" | "<<setw(15)<<i<<" | "<<setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[3]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::dicerank(int y,int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << "\t\t\t\t |"<<setw(15)<<y<<" | "<<setw(15)<<i<<" | "<<setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[2]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::dicorank(int y,int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << "\t\t\t\t |"<<setw(15)<<y<<" | "<<setw(15)<<i<<" | "<<setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[4]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::dipyrank(int y,int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << "\t\t\t\t |"<<setw(15)<<y<<" | "<<setw(15)<<i<<" | "<<setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[1]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
void student::dimarank(int y,int i)
{

cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
    cout << "\t\t\t\t |"<<setw(15)<<y<<" | "<<setw(15)<<i<<" | "<< setw(25)<<name<<" | "<<setw(10)<<seat_no<<" |   "<<setw(15)<<subject[0]<<" | "<<setw(15)<<percantage<<" | "<<endl;


}
string student::getpass()
{
    return password;
}
void student :: passw()
{
    inp>>password;
}
string student :: password;
void student:: resetpassword(int r)
{
    int code;
    //otp = (1+rand()%100);
    switch(r)
    {
case 1:
       {

            big1 :
            system("sendmail2.py   895440");
            cout << "\n\n\n# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com ";
            cout << "\n\n# CODE : ";
            cin  >> code;
    if(code==895440)
    {
        string t;
        start1 :
        cout << "\n\n\t\t\t\t\t# RESET YOUR PASSWORD   ";
        cout << "\n\n\t\t\t\t\t# ENTER NEW PASSWORD : ";
        cin  >> student::password;
        cout << "\n\t\t\t\t\t# CONFORM YOUR PASSWORD : ";
        cin >> t;
        if(t==student :: password)
        {
            cout << "\n\n\n\n# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!";
            ofstream owp("PA.txt");
            owp << t;
            owp.close();

        }
        else
        {
            string f;
            cout << "\n\n\n# YOUR FIRST AND SECOND PASSWORD IS NOT MATCH";
            cout << "\n\n\t\t\t\t# 1.TRY AGAIN ";
            if(f=="1")
            goto start1;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

    }break;
case 2:
        {

            system("sendmail2.py   938540");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n\n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==938540)
    {
        string t;
        start2 :
        cout << "\n\n\t\t\t\t\t# RESET YOUR PASSWORD   ";
        cout << "\n\n\t\t\t\t\t# ENTER NEW PASSWORD : ";
        cin  >> student::password;
        cout << "\n\t\t\t# CONFORM YOUR PASSWORD : ";
        cin >> t;
        if(t==student :: password)
        {
            cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start2;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

    }break;
case 3:
        {

            system("sendmail2.py   109420");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n\n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==109420)
    {
        string t;
        start3 :
        cout << "\n\n\t\t\t\t\t# RESET YOUR PASSWORD   ";
        cout << "\n\n\t\t\t\t\t# ENTER NEW PASSWORD : \n";
        cin  >> student::password;
        cout << "\n\t\t\t# CONFORM YOUR PASSWORD : ";
        cin >> t;
        if(t==student :: password)
        {
            cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start3;
        }

    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

        }break;
case 4:
            {

            system("sendmail2.py   112746");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n\n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==112746)
    {
        string t;
        start4 :
        cout << "\n\n\t\t\t# RESET YOUR PASSWORD   \n\n";
        cout << "\t\t\t# ENTER NEW PASSWORD : ";
        cin  >> student::password;
        cout << "\n\t\t\t# CONFORM YOUR PASSWORD : ";
        cin >> t;
        if(t==student :: password)
        {
             cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start4;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

        }break ;
case 5:
            {

            system("sendmail2.py   856371");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==856371)
    {
        string t;
        start5 :
         cout << "\n\n\t\t\t# RESET YOUR PASSWORD   \n\n";
        cout << "\t\t\t# ENTER NEW PASSWORD : ";
        cin  >> student::password;
        cout << "\n\t\t\t# CONFORM YOUR PASSWORD : ";
        cin >> t;
        if(t==student :: password)
        {
            cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start5;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

            }break;
case 6:
                {

            system("sendmail2.py   564783");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==564783)
    {
        string t;
        start6 :
        cout << "\n\n\t\t\t# RESET YOUR PASSWORD   \n\n";
        cout << "\t\t\t# ENTER NEW PASSWORD : ";
        cin  >> student::password;
        cout << "\n\t\t\t# CONFORM YOUR PASSWORD : ";
        cin >> t;
        if(t==student :: password)
        {
            cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!\n";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start6;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

                }break;
case 7:
            {
            system("sendmail2.py   283016");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==283016)
    {
        string t;
        start7 :
        cout << "\n\n\t\t\t# RESET YOUR PASSWORD   \n\n";
        cout << "\t\t\t# ENTER NEW PASSWORD : \n";
        cin  >> student::password;
        cout << "# CONFORM YOUR PASSWORD : ";
        cin >> t;
        if(t==student :: password)
        {
            cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!\n";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start7;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

            }break;
case 8:
                {

            system("sendmail2.py   337655");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n\n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==337655)
    {
        string t;
        start8 :
       cout << "\n\n\t\t\t# RESET YOUR PASSWORD   \n\n";
        cout << "\t\t\t# ENTER NEW PASSWORD : ";
        cin  >> student::password;
        cout << "\n\t\t\t# CONFORM YOUR PASSWORD : \n\n";
        cin >> t;
        if(t==student :: password)
        {
            cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!\n\n";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start8;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

                }break;
case 9:
                    {

            system("sendmail2.py   229903");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==229903)
    {
        string t;
        start9 :
      cout << "\n\n\t\t\t# RESET YOUR PASSWORD   \n\n";
        cout << "\t\t\t# ENTER NEW PASSWORD : ";
        cin  >> student::password;
        cout << "\n\t\t\t# CONFORM YOUR PASSWORD : \n\n";
        cin >> t;
        if(t==student :: password)
        {
            cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!\n";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start9;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

                    }break;
case 10:
        {

            system("sendmail2.py   443980");
            cout << "# ENTER SIX DIGIT CODE WHICH IS SEND IN *************dip21@gmail.com \n";
            cout << "# CODE : ";
            cin  >> code;
    if(code==443980)
    {
        string t;
        start :
       cout << "\n\n\t\t\t# RESET YOUR PASSWORD   \n\n";
        cout << "\t\t\t# ENTER NEW PASSWORD : ";
        cin  >> student::password;
        cout << "\n\t\t\t# CONFORM YOUR PASSWORD : ";
        cin >> t;
        if(t==student :: password)
        {
            cout << "# YOU HAVE SUCESSESFULLY CHANGE YOUR PASSWORD !!!!!!!";
             ofstream owp("PA.txt");
            owp << t;
            owp.close();
        }
        else
        {
            cout << "\n\n# YOUR FIRST AND SECOND PASSWORD IS NAT MATCH PLEASE TRY AGAIN ";
            goto start;
        }
    }
    else
    {
        cout << "YOUR ARE FAIL!!!!!!";

    }

                        }break;



}
}
void showdis(int di);

int main()
{
    PlaySound(TEXT("C:\\Users\\Jaydeep\\Music\\RINGS\\wavfile\\rington2full.wav"),NULL,SND_FILENAME|SND_ASYNC);//playb with exicution.


    int t;
    int se;
    string E1="1",E2="1",EE1="1",EE2="1",E="1",EE3="1",EE4="1",EE5="1",EE6="1";
    int d,r;
    char c;
    int mini, mich , cnum;
    int num,flag=0,tag = 0;
    ino >> coun;
     ino.close();
     ofstream ono("OT.txt");
     {
         ono << coun+1;
     }
     ono.close();


     /*int m[25]={70,50,90,85,70,90,98,100,77,79,90,85,70,90,98,100,77,79,90,85,50,90,85,70,90};
     int c[5]{123,321,362,251,487};
     int s[5]={5,6,1,2,3};
    string n[5]={"Meet","Arth","jaydip","hii ","rutvik"};
    ofstream onn("NA.txt");
    ofstream onc("CE.txt");
    ofstream ons("SE.txt");
    ofstream onm("MR.txt");
     onn << n[0]<<endl<<n[1]<<endl<<n[2]<<endl<<n[3]<<endl<<n[4]<<endl;
     onc << c[0]<<endl<<c[1]<<endl<<c[2]<<endl<<c[3]<<endl<<c[4]<<endl;
     onm << m[0]<<endl<<m[1]<<endl<<m[2]<<endl<<m[3]<<endl<<m[4]<<endl<< m[5]<<endl<<m[6]<<endl<<m[7]<<endl<<m[8]<<endl<<m[9]<<endl
     <<m[10]<<endl<<m[11]<<endl<<m[12]<<endl<<m[13]<<endl<<m[14]<<endl<<m[15]<<endl<<m[16]<<endl<<m[17]<<endl<<m[18]<<endl<<m[19]<<endl
     <<m[20]<<endl<<m[21]<<endl<<m[22]<<endl<<m[23]<<endl<<m[24]<<endl;
     ons << s[0]<<endl<<s[1]<<endl<< s[2]<<endl<<s[3]<<endl<<s[4]<<endl;
     onn.close();
     onc.close();
     ons.close();
     onm.close();*/
     //string p;
     //ofstream fout("PA.txt");
     //cout  << "Enter the pass ";
     //cin >> p;
     //fout << p;
     //fout.close();
     student :: passw();


    student S[stu];
    student Me[stu];
    student Ma[stu];
    student Ce[stu];
    student Py[stu];
    student Co[stu];
    student En[stu];

    for(int i = 0 ;i<stu;i++)
    {
    S[i].detail();
    S[i].comtotper();
    S[i].getgrade();

    }

    //cout << "\nmain mark = "<< Me[0].getmaintotal()<<endl;
    for(int k=0;k<stu;k++)
    {
    for(int j=0;j<stu-1;j++)
    {
        if(S[j].gettotal()<S[j+1].gettotal())
        {
            student temp ;
            temp = S[j];
            S[j] = S[j+1];
            S[j+1]=temp;
        }
        else if(S[j].gettotal()==S[j+1].gettotal())
        {
            if(S[j].getmaintotal()<S[j+1].getmaintotal())
            {
            student temp ;
            temp = S[j];
            S[j] = S[j+1];
            S[j+1]=temp;
            }
        }
        else if(S[j].gettotal()==S[j+1].gettotal())
        {
            if(S[j].getengmar()<S[j+1].getengmar())
            {
            student temp ;
            temp = S[j];
            S[j] = S[j+1];
            S[j+1]=temp;
            }

        }
        else if(S[j].getengmar()==S[j+1].getengmar())
        {
            if(S[j].getcommar()<S[j+1].getcommar())
             {
            student temp ;
            temp = S[j];
            S[j] = S[j+1];
            S[j+1]=temp;
            }

        }
    }
    }
     for(int i = 0 ;i<stu;i++)
    {
    Me[i] = S[i];
    Ma[i] = S[i];
    Ce[i] = S[i];
    Py[i] = S[i];
    Co[i] = S[i];
    En[i] = S[i];
    }
     for(int k=0;k<=stu;k++)
              {
                   for(int j=0;j<stu-1;j++)
                      {
                          if(Me[j].getmaintotal()<Me[j+1].getmaintotal())
                           {
                              student temp ;
                              temp = Me[j];
                              Me[j] = Me[j+1];
                              Me[j+1]=temp;
                           }
                      }
              }
      for(int b=0;b<stu;b++)
             {
                   for(int a=0;a<stu-1;a++)
                     {
                        if(Ma[a].getmamar()<Ma[a+1].getmamar())
                         {
                           student temp ;
                           temp = Ma[a];
                           Ma[a] = Ma[a+1];
                           Ma[a+1]=temp;
                         }
                     }
             }
      for(int f=0;f<stu;f++)
             {
                 for(int e=0;e<stu-1;e++)
                   {
                    if(Py[e].getpymar()<Py[e+1].getpymar())
                      {
                         student temp ;
                         temp = Py[e];
                         Py[e] = Py[e+1];
                         Py[e+1]=temp;
                      }
                   }
             }
     for(int r=0;r<stu;r++)
            {
              for(int w=0;w<stu-1;w++)
               {
                 if(Co[w].getcommar()<Co[w+1].getcommar())
                   {
                    student temp ;
                    temp = Co[w];
                    Co[w] = Co[w+1];
                    Co[w+1]=temp;

                  }
               }
            }
     for(int q=0;q<stu;q++)
              {
                   for(int y=0;y<stu-1;y++)
                     {
                        if(Ce[y].getcemmar()<Ce[y+1].getcemmar())
                         {
                           student temp ;
                           temp = Ce[y];
                           Ce[y] = Ce[y+1];
                           Ce[y+1]=temp;
                         }
                     }
             }
              for(int k=0;k<=stu;k++)
              {
                   for(int j=0;j<stu-1;j++)
                      {
                          if(En[j].getengmar()<En[j+1].getengmar())
                           {
                              student temp ;
                              temp = En[j];
                              En[j] = En[j+1];
                              En[j+1]=temp;
                           }
                      }
              }
          /*    for(int y=0;y<15;y++)
              {
                  cout << En[y].getengmar()<<endl;
              }*/
   // cout << "seat no : "<< S[0].getseat()<<endl;
    //cout << "mainmark  : "<< S[0].getmaintotal()<<endl;
    while( E!="0")
    {
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t     WELCOME IN ACPC \n\n";
    cout << "\n\n\n\t\t\t\t# FOLLOW BELOW COMMAND \n\n";
    cout << "\t\t\t\t\t\t\t\tMAIN MENU\n\n";
    cout << "\t\t\t\t\t\t ";
    for(int h=0;h<40;h++)
    {
        cout << "-";
    }
        cout << " \n\t\t\t\t\t\t|    1.  STUDENT LOGIN. \t\t |\n\t\t\t\t\t\t|\t\t\t\t\t |\n\t\t\t\t\t\t|    2.  MINISTER LOGIN.  \t\t |"<<endl;
        cout <<"\t\t\t\t\t\t|\t\t\t\t\t |"<<endl<<"\t\t\t\t\t\t ";
        for(int h=0;h<40;h++)
    {
        cout << "-";
    }

    cout << " \n\n\n\t\t\t\t# ENTER YOUR CHOICE (1-2): ";
    cin >> c;
    if(c!='1'||c!='2')
    {
        cout << "PLEASE ENTER VALID CHOICE ";
    }
    switch(c)
    {

   case '1':
   while(E1!="0")
   {

    system("cls");
    cout << "\n\n\n\t\t\t\t\tSEAT_NO : ";
    cin >> se;
    for(int x=0;x<stu;x++)
    {
        if(se==S[x].getseat())
        {
            S[x].rk(x+1);
            S[x].result();
            flag = 1;
        }


    }
    if(flag==0)
    {


            cout << endl<<"\n\n\t\t\t\t# PLEASE ENTER THE VALID SEAT NO !!!!!!  "<<endl;

    }

    cout  << "\n\n\n\t\t\t\t# STAY IN STUDENT LOGIN PRESS ANY NUMBER OTHERWISE PRESS 0(ZERO) ........  ";
    cout << "\n\t\t\t\t# ENTER YOUR CHOISE : ";
    cin >> E1;
    system("color 07");
   }
   E1="1";
   break ;
  case '2':
      {
          string pass;
          system("cls");
          cout << endl<<"Password  = "<<student::getpass()<<endl;
          cout << "\n\n\n\t\t\t\t# ENTER YOUR PASSWORD (GRETER THEN SIX WORD) : \n\t\t\t\t(PRESS 1 IF YOU FORGET YOUR PASSWORD )\n\n";

          cout << "\n\n\n\n\t\t\t\t# ENTER :  ";
          cin >> pass;
          if(pass=="1")
          {
              student :: resetpassword(coun);
              tag=1;
          }
          if(tag==1)
          {
          student :: passw();
          cout << "FOR MINISTER LOGIN ENTER YOUR PASSWORD :  ";
          cin >> pass;
          }

          if(pass==student::getpass())
          {
  while(E2!="0")
  {

        system("cls");

        cout << "\n\n\t\t\t# WELCOM SIR YOUR ARE LOGIN SUCCESSFULLY !!!!!" <<endl<<endl<<endl;
        cout << "\t\t\t\t\t ";
        for(int z=0;z<48;z++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "\t\t\t\t\t|\t\t1  MERIT WISE \t\t\t|"<< "\n\t\t\t\t\t|\t\t2  MATHS WISE \t\t\t|"<<endl<<"\t\t\t\t\t|\t\t3  PYSICS WISE \t\t\t|"<<endl;
        cout << "\t\t\t\t\t|\t\t4  COMPUTER WISE\t\t| "<<endl<< "\t\t\t\t\t|\t\t5  CEMISTRY WISE \t\t|"<< endl << "\t\t\t\t\t|\t\t6  ENGLISH  WISE\t\t|"<<endl;
         cout << "\t\t\t\t\t ";
         for(int z=0;z<48;z++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "\n\n\t\t\t# ENTER YOUR CHOICE : ";
        cin >> mini;
        switch (mini)
        {
        case 1:
               {
                   system("cls");
                   while (EE1!="0")
                        {
                             EE1="1";

                    cout << "\n\n\n\n\t\t\t\t\t";
                    cout << "\tSUB MENU OF MINISTER LOGIN";
                     cout << "\n\n\n\n\t\t\t\t\t";

                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl<<"\t\t\t\t\t|\t\t\t\t\t|\n";
                   cout << "\t\t\t\t\t|\t  1 WHOLE GUJARAT\t\t|\n\t\t\t\t\t|\t  2 DISTRICT WISE\t\t|\n";
                   cout << "\t\t\t\t\t|\t\t\t\t\t|\n";
                      cout << "\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl;
                     cout << "\n\n\n\n\t\t\t\t\t# ENTER YOUR CHOICE (1-2) : ";
                   cin >> mich;
                   switch (mich)
                   {
                 case 1:
                    {


                system("cls");

                cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 400) :  ";
                cin >>num;
                cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);

                cout << "\n\n\n\n"<<"\t\t\t\t\t"<<" ";
                for(int x=0;x<92;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout <<"\t\t\t\t\t";
                cout << " |"<<setw(10)<<"RANK"<< " | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"MERIT TOTAL"<< " | "<<setw(15)<<"PERCENTAGE"<< " | "<<endl;
                cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
                for( d=0;d<num;d++)
                {
                 cout <<"\t\t\t\t\t";
                 Me[d].mrank(d+1);
                }

              cout << " ";
              cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
                cout << "\n\n\n\n"<<" ";


                    }
               break ;
                 case 2:
                     {

                      system("cls");
                      int y=0;
                     cout << "\n\n\n\n# ENTER CENTER_NO. : ";
                     cin >> cnum;
                cout << "\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 40) :  ";
                cin >>num;

                cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
                 cout << "\n\n\n\t\t\t\t\t\t\t\t\t "<<"DISTRICT :  ";
                 showdis(cnum);
                 cout << "\n\t\t\t\t ";

                for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout << "\t\t\t\t"<<" |"<<setw(15)<<"DIST.. RANK"<<" | "<<setw(15)<<"STATE RANK"<< " | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"MERIT TOTAL"<< " | "<<setw(15)<<"PERCENTAGE"<< " | "<<endl;
                 cout << "\t\t\t\t ";
                for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;

                for( d=0;d<stu;d++)
                {

                    if(cnum==Me[d].getcent()&&y!=num)
                    {
                      Me[d].dimrank(y+1,d+1);

                      y++;
                    }
                }


                 cout << "\t\t\t\t ";
                for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl<<"\n\n\n";


                     }
                break ;
                    }
               cout << "# STAY IN SUBMENU OF MINISTER LOGIN PRESS ANY NUMBER OTHERWISE PRESS 0 :  ";
               cin >> EE1;
               }
               }
                EE1="1";
               break ;




       case 2 :
               {
                   system("cls");
                   while (EE2!="0")
                        {
                             EE2="1";


                    cout << "\n\n\n\n\t\t\t\t\t";
                      cout << "\tSUB MENU OF MINISTER LOGIN";
                     cout << "\n\n\n\n\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl<<"\t\t\t\t\t|\t\t\t\t\t|\n";
                   cout << "\t\t\t\t\t|\t  1  WHOLE GUJARAT\t\t|\n\t\t\t\t\t|\t  2 DISTRICT WISE\t\t|\n";
                   cout << "\t\t\t\t\t|\t\t\t\t\t|\n";
                      cout << "\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl;
                    cout << "\n\n\n\n\t\t\t\t\t# ENTER YOUR CHOICE (1-2) : ";
                   cin >> mich;
                   switch (mich)
                   {
                 case 1:
                    {

                system("cls");
               cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 400) :  ";
               cin >>num;
              cout.setf(ios::left,ios::adjustfield);
                cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
            cout << "\n\n\n\n"<<"\t\t\t\t\t"<<" ";
                for(int x=0;x<92;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout <<"\t\t\t\t\t";
               cout << " |"<<setw(10)<<"RANK"<< " | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"MATHS MARK"<<" | "<<setw(15)<<"PERCENTAGE"<<" | "<<endl;
             cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
               for(r=0;r<num;r++)
                {
                   cout <<"\t\t\t\t\t";
                 Ma[r].marank(r+1);
                }
              cout << " ";
              cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
                cout << "\n\n\n\n"<<" ";


                   }

                break;
                case 2:
                     {

                     system("cls");
                     int y=0;
                      cout << "\n\n\n\n# ENTER CENTER_NO. : ";
                     cin >> cnum;
               cout << "\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 40) :  ";
                cin >>num;

                cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
               cout << "\n\n\n\t\t\t\t\t\t\t\t\t "<<"DISTRICT :  ";
                 showdis(cnum);
                 cout << "\n\t\t\t\t ";

                for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout << "\t\t\t\t |"<<setw(15)<<"DIST.. RANK"<<" | "<<setw(15)<<"STATE RANK"<< " | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"MATHS MARK"<< " | "<<setw(15)<<"PERCENTAGE"<< " | "<<endl;
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                for( d=0;d<stu;d++)
                {

                    if(cnum==Ma[d].getcent()&&y!=num)
                    {
                      Ma[d].dimarank(y+1,d+1);

                      y++;
                    }

               }
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl<<"\n\n\n";

                    }
                break ;
                    }
               cout << "STAY IN SUBMENU OF MINISTER LOGIN PRESS ANY NUMBER OTHERWISE PRESS 0(ZERO)  : ";
               cin >> EE2;
               }
               }
                EE2="1";
               break ;

        case 3:
               { system("cls");
                   while (EE3!="0")
                        {
                             EE3="1";


                    cout << "\n\n\n\n\t\t\t\t\t";
                      cout << "\tSUB MENU OF MINISTER LOGIN";
                     cout << "\n\n\n\n\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl<<"\t\t\t\t\t|\t\t\t\t\t|\n";
                   cout << "\t\t\t\t\t|\t  1  WHOLE GUJARAT\t\t|\n\t\t\t\t\t|\t  2 DISTRICT WISE\t\t|\n";
                   cout << "\t\t\t\t\t|\t\t\t\t\t|\n";
                      cout << "\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl;
                   cout << "\n\n\n\n\t\t\t\t\t# ENTER YOUR CHOICE (1-2) : ";
                   cin >> mich;
                   switch (mich)
                   {
                 case 1:
                    {
                system("cls");
                cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 400) :  ";
               cin >>num;
             cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
                cout << "\n\n\n\n"<<"\t\t\t\t\t"<<" ";
                for(int x=0;x<92;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout <<"\t\t\t\t\t";
                cout << " |"<<setw(10)<<"RANK"<<" | "<<setw(25)<<"NAME OF THE STUDENT"<<" | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"PYSICS MARK"<<" | "<<setw(15)<<"PERCENTAGE"<<" | "<<endl;
                  cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
               for(r=0;r<num;r++)
                {
                    cout << "\t\t\t\t\t";
                    Py[r].pyrank(r+1);
                }
               cout << " ";
              cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
                cout << "\n\n\n\n"<<" ";
                }
                break ;
                case 2:
                     {
                     system("cls");
                     int y=0;
                     cout << "\n\n\n# ENTER CENTRE_NO : ";
                     cin >> cnum;
                cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 40) :  ";
                cin >>num;

                cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
                cout << "\n\n\n\t\t\t\t\t\t\t\t\t "<<"DISTRICT :  ";
                 showdis(cnum);
                 cout << "\n\t\t\t\t ";

                for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout << "\t\t\t\t |"<<setw(15)<<"DIST.. RANK"<<" | "<<setw(15)<<"STATE RANK"<< " | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"PYSICS MARK"<< " | "<<setw(15)<<"PERCENTAGE"<< " | "<<endl;
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                for( d=0;d<stu;d++)
                {

                    if(cnum==Py[d].getcent()&&y!=num)
                    {
                      Py[d].dipyrank(y+1,d+1);

                      y++;
                    }

               }
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl<<"\n\n\n";
                }
                break ;
                    }
              cout << "STAY IN SUBMENU OF MINISTER LOGIN PRESS ANY NUMBER OTHERWISE PRESS 0(ZERO)  : ";
               cin >> EE3;
               }
               }
                EE3="1";
               break ;

        case 4:
            {
                  system("cls");
                   while (EE4!="0")
                        {
                             EE4="1";


                    cout << "\n\n\n\n\t\t\t\t\t";
                      cout << "\tSUB MENU OF MINISTER LOGIN";
                     cout << "\n\n\n\n\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl<<"\t\t\t\t\t|\t\t\t\t\t|\n";
                   cout << "\t\t\t\t\t|\t  1 WHOLE GUJARAT\t\t|\n\t\t\t\t\t|\t  2 DISTRICT WISE\t\t|\n";
                   cout << "\t\t\t\t\t|\t\t\t\t\t|\n";
                      cout << "\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl;
                    cout << "\n\n\n\n\t\t\t\t\t# ENTER YOUR CHOICE (1-2) : ";
                   cin >> mich;
                   switch (mich)
                   {
                 case 1:
                    {


                system("cls");
                cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 400) :  ";
                cin >>num;
               cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
                 cout << "\n\n\n\n"<<"\t\t\t\t\t"<<" ";
                for(int x=0;x<92;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout <<"\t\t\t\t\t";
                cout << " |"<<setw(10)<<"RANK"<<" | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"COMPUTER MARK"<<" | "<<setw(15)<<"PERCENTAGE"<<" | "<<endl;
                    cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
                for( d=0;d<num;d++)
                {
                    cout << "\t\t\t\t\t";
                    Co[d].comrank(d+1);
                }

                cout << " ";
              cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
                cout << "\n\n\n\n"<<" ";
                }
                break ;
                case 2:
                     {

                      system("cls");
                     int y=0;
                     cout << "\n# ENTER CENTRE_NO : ";
                     cin >> cnum;
                cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 40) :  ";
                cin >>num;

                cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
               cout << "\n\n\n\t\t\t\t\t\t\t\t\t "<<"DISTRICT :  ";
                 showdis(cnum);
                 cout << "\n\t\t\t\t ";

                for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout << "\t\t\t\t |"<<setw(15)<<"DIST.. RANK"<<" | "<<setw(15)<<"STATE RANK"<< " | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"COMPUTER MARK"<< " | "<<setw(15)<<"PERCENTAGE"<< " | "<<endl;
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                for( d=0;d<stu;d++)
                {

                    if(cnum==Co[d].getcent()&&y!=num)
                    {
                      Co[d].dicorank(y+1,d+1);

                      y++;
                    }

               }
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl<<"\n\n\n";
                  }
                break ;
                    }
                cout << "STAY IN SUBMENU OF MINISTER LOGIN PRESS ANY NUMBER OTHERWISE PRESS 0(ZERO)  : ";
               cin >> EE4;
               }
               }
                EE4="1";
               break ;

       case 5:
                 { system("cls");
                   while (EE5!="0")
                        {
                             EE5="1";


                    cout << "\n\n\n\n\t\t\t\t\t";
                      cout << "\tSUB MENU OF MINISTER LOGIN";
                     cout << "\n\n\n\n\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl<<"\t\t\t\t\t|\t\t\t\t\t|\n";
                   cout << "\t\t\t\t\t|\t  1 WHOLE GUJARAT\t\t|\n\t\t\t\t\t|\t  2 DISTRICT WISE\t\t|\n";
                   cout << "\t\t\t\t\t|\t\t\t\t\t|\n";
                      cout << "\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl;
                    cout << "\n\n\n\n\t\t\t\t\t# ENTER YOUR CHOICE (1-2) : ";
                   cin >> mich;
                   switch (mich)
                   {
                 case 1:
                    {

              system("cls");
             cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 400) :  ";
              cin >>num;
              cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
               cout << "\n\n\n\n"<<"\t\t\t\t\t"<<" ";
                for(int x=0;x<92;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout <<"\t\t\t\t\t";
              cout << " |"<<setw(10)<<"RANK"<<" | "<<setw(25)<<"NAME OF THE STUDENT"<<" | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"CEMISTRY MARK"<<" | "<<setw(15)<<"PERCENTAGE"<<" | "<<endl;
                cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
              for( d=0;d<num;d++)
              {
                  cout << "\t\t\t\t\t";
                  Ce[d].cemrank(d+1);

              }
              cout << " ";
              cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
                cout << "\n\n\n\n"<<" ";
                }
                break ;
                case 2:
                     {

                     system("cls");
                     int y=0;
                     cout << "\n# ENTER CENTRE_NO : ";
                     cin >> cnum;
                cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 40) :  ";
                cin >>num;

                cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
                cout << "\n\n\n\t\t\t\t\t\t\t\t\t "<<"DISTRICT :  ";
                 showdis(cnum);
                 cout << "\n\t\t\t\t ";

                for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout << "\t\t\t\t |"<<setw(15)<<"DIST.. RANK"<<" | "<<setw(15)<<"STATE RANK"<< " | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"CEMISTRY MARK"<< " | "<<setw(15)<<"PERCENTAGE"<< " | "<<endl;
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                for( d=0;d<stu;d++)
                {

                    if(cnum==Ce[d].getcent()&&y!=num)
                    {
                      Ce[d].dicerank(y+1,d+1);

                      y++;
                    }

               }
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl<<"\n\n\n";



                }
                break ;
                    }
                 cout << "STAY IN SUBMENU OF MINISTER LOGIN PRESS ANY NUMBER OTHERWISE PRESS 0(ZERO)  : ";
               cin >> EE5;
               }
               }
                EE5="1";
               break ;
      case 6:
          {
                  system("cls");
                   while (EE6!="0")
                        {



                    cout << "\n\n\n\n\t\t\t\t\t";
                      cout << "\tSUB MENU OF MINISTER LOGIN";
                     cout << "\n\n\n\n\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl<<"\t\t\t\t\t|\t\t\t\t\t|\n";
                   cout << "\t\t\t\t\t|\t  1 WHOLE GUJARAT\t\t|\n\t\t\t\t\t|\t  2 DISTRICT WISE\t\t|\n";
                   cout << "\t\t\t\t\t|\t\t\t\t\t|\n";
                      cout << "\t\t\t\t\t";
                   for(int z=0;z<40;z++)
                     {
                      cout << "-";
                     }
                     cout << endl;
                    cout << "\n\n\n\n\t\t\t\t\t# ENTER YOUR CHOICE (1-2) : ";
                   cin >> mich;
                   switch (mich)
                   {
                 case 1:
                    {

              system("cls");
               cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 400) :  ";
              cin >>num;
              cout.setf(ios::left,ios::adjustfield);
              cout.setf(ios::showpoint);
              cout.setf(ios::fixed,ios::floatfield);
              cout.precision(2);

              cout << "\n\n\n\n"<<"\t\t\t\t\t"<<" ";
                for(int x=0;x<92;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout <<"\t\t\t\t\t";
              cout << " |"<<setw(10)<<"RANK"<<" | "<<setw(25)<<"NAME OF THE STUDENT"<<" | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"ENGLISH MARK"<<" | "<<setw(15)<<"PERCENTAGE"<<" | "<<endl;
               cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
               for( d=0;d<num;d++)
              {
              cout << "\t\t\t\t\t";
              En[d].engrank(d+1);

              }
             cout << " ";
              cout <<"\t\t\t\t\t ";
                for(int x=0;x<92;x++)
                {

                    cout << "-";
                }
                cout << endl;
                cout << "\n\n\n\n"<<" ";
                }
                break ;
                case 2:
                     {

                     system("cls");
                     int y=0;
                       cout << "\n# ENTER CENTRE_NO : ";
                     cin >> cnum;
                  cout << "\n\n\n# ENTER NUMBER OF STUDENT WHICH YOU WANT TO SHOW (LESS THEN OR EQUAL TO 40) :  ";
                    cin >>num;

                cout.setf(ios::left,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
                cout << "\n\n\n\t\t\t\t\t\t\t\t\t "<<"DISTRICT :  ";
                 showdis(cnum);
                 cout << "\n\t\t\t\t ";

                for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                cout << "\t\t\t\t |"<<setw(15)<<"DIST.. RANK"<<" | "<<setw(15)<<"STATE RANK"<< " | "<<setw(25)<<"NAME OF THE STUDENT"<< " | "<<setw(15)<<"SEAT_N0    |"<<setw(15)<<"ENGLISH MARK"<< " | "<<setw(15)<<"PERCENTAGE"<< " | "<<endl;
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl;
                for( d=0;d<stu;d++)
                {

                    if(cnum==En[d].getcent()&&y!=num)
                    {
                      En[d].dienrank(y+1,d+1);

                      y++;
                    }

               }
                cout << "\t\t\t\t ";
               for(int x=0;x<115;x++)
                {
                    cout << "-";
                }
                cout << endl<<"\n\n\n";


                }
                break ;
                    }
                 cout << "STAY IN SUBMENU OF MINISTER LOGIN PRESS ANY NUMBER OTHERWISE PRESS 0(ZERO)  : ";
               cin >> EE6;
               }

               }
                EE6="1";

               break ;




        }

           cout << "\n\n# STAY IN MINISTER LOGIN PRESS ANY NUMBER OTHERWISE PRESS 0(ZERO) ";
           cout << "\n\n# ENTER YOUR CHOISE : ";
           cin  >> E2;
        }
         E2="1";
       }

        else
        {
            string take;
            cout << "# PLEASE ENTER VALID PASSWORD !!!!!!!\n";
            cout << "# 1.RESET PASSWORD OTHERWISE PRESS ANY KEY.";
            cin >> take ;
            if(take =="1")
            {
                student :: resetpassword(coun);
                cout << "\n\n\n\t\t\t\t\tPLEASE TRY LOGIN AGAIN. ";
            }
        }

      }
      break ;
    }




    cout << "\n\n# STAY IN MAIN MENU PRESS ANY ALPHABETIC KEY OTHER TERMINATE THIS PROGRAMME PRESS 0 : ";
    cout << "\n\n# ENTER YOUR CHOISE : ";
    cin >> E;
    }
    E="1";







     inn.close();
     inc.close();
     ins.close();
     inm.close();
     inp.close();

    return 0;
}
 void showdis(int di)
{
    if(di==507)
    {
        cout << " ANAND (507)";
    }
    else if(di==607)
    {
        cout << " AHMEDABAD (607)";
    }
     else if(di==707)
    {
        cout << " RAJKOT (707)";
    }
     else if(di==807)
    {
        cout << " BOTAD (807)";
    }
     else if(di==907)
    {
        cout << " MORBI (907)";
    }
     else if(di==1007)
    {
        cout << " JUNAGADH (1007)";
    }
     else if(di==1107)
    {
        cout << " JAMNAGAR (1107)";
    }
     else if(di==1207)
    {
        cout << " KUTCH (1207)";
    }
      else if(di==1307)
    {
        cout << " KHEDA (1307)";
    }
     else if(di==1407)
    {
        cout << " SURAT (1407)";
    }

}







