/*
(a) Inputs:
    - Number of electricity units consumed (whole number).

    Outputs:
    - Energy charge.
    - Service charge (10 Birr).
    - Total electricity bill (two decimal places).

(b) Process:
    1. Start the program.
    2. Declare an integer variable for electricity units
       and double variables for the charges and total bill.
    3. Ask the user to enter the electricity units consumed.
    4. Calculate the energy charge using the conditional
       operator. The first 50 units cost 1.50 Birr per unit,
       while additional units cost 2.00 Birr per unit.
    5. Set the service charge to 10 Birr.
    6. Calculate the total bill by adding the energy charge
       and the service charge.
    7. Display the energy charge, service charge, and total
       bill to two decimal places.
    8. End the program.
*/


#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    //declare variables
int electricity_units;
double electricity_charge;
double service_charge;
double total_bill;

      //input
cout<<"enter electicicty_units :";
cin>>electricity_units;

       //calculate elctricity_charge
( electricity_units <=50 ? electricity_charge=(electricity_units*1.5):electricity_charge=(50*1.5)+(electricity_units-50)*2.0);
        
         //calculate service_charge and total_bill
service_charge=10;
total_bill=electricity_charge+service_charge;

      //display the results
cout<<fixed<<setprecision(2);
cout<<"electricity_charge:"<<electricity_charge<<endl;

cout<<"service_charge:"<<service_charge<<endl;
cout<<"total_bill:"<<total_bill<<endl;

return 0;
}