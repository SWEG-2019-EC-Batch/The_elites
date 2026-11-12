/*
IPO ANALYSIS

     INPUT:
Assignment mark out of 100.
Midterm mark out of 100.
Final exam mark out of 100.

    PROCESS:
Multiply assignment mark by 0.2.
Multiply midterm mark by 0.3.
Multiply final exam mark by 0.5.
Add the three weighted marks to calculate the total.
Check whether the total is greater than or equal to 50.
If total is greater than or equal to 50, the student passes.
Otherwise, the student fails.

      OUTPUT:
Display the total weighted mark to 1 decimal place.
Display the student's status as Pass or Fail.
*/
    
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 double Midterm, Assignment, Final, Total;
 
 cout<<"Please enter your Assignment result: "<<endl;
 cin>>Assignment;
 
 cout<<"Please enter your midterm result: "<<endl;
 cin>>Midterm;
 
 cout<<"Please enter your final exam results: "<<endl;
 cin>>Final;
 
 Total=(Midterm*0.3)+(Assignment*0.2)+(Final*0.5);
 
 cout<<fixed<<setprecision(1);
 cout<<"Total is: "<<Total<<endl;
 cout<<"Your status is: "<<(Total>=50?"Pass":"Fail")<<endl;
    return 0;
}