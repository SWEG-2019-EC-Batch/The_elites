/*
IPO ANALYSIS

INPUT:
  Electricity units consumed by the user.

PROCESS:
  Check whether units are 50 or less.
  If units <= 50, multiply units by 1.50.
  Otherwise, charge 1.50 for the first 50 units
  and 2.00 for each additional unit.
  Add the service charge of 10 birr to the energy charge.

OUTPUT:
  Energy charge.
  Service charge.
  Total electricity bill (2 decimal places).
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int units;
    double Energy, Service=10, Total;
    
    cout<<"Please enter electricity units"<<endl;
    cin>>units;
    
    Energy=(units<=50)?units*1.50:(50*1.50)+(units-50)*2.00;
    Total=Energy+Service;
    
    cout<<fixed<<setprecision(2);
    cout<<"Energy charge: "<<Energy<<"birr"<<endl;
    cout<<"Service charge: "<<Service<<"birr"<<endl;
    cout<<"Total bill: "<<Total<<"birr"<<endl;
    
        return 0;
}