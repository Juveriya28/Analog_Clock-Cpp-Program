/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int h,m;
        cout<<"Enter hour:"<<endl;
        cin>>h;
        cout<<"enter minutes:";
        cin>>m;
        
       float h_deg,m_deg;
       
       int angle;
       h_deg=h*30+m*0.5;
       m_deg=m*6;
       
       if(h_deg-m_deg<=180)
            angle=abs(h_deg-m_deg);
        else
            angle=abs(m_deg-h_deg);
            
        angle=min(angle,360-angle);
        cout<<angle<<endl;
       
        t--;
    }
}

