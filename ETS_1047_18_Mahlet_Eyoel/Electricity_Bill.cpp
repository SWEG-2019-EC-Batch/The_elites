 /*Input: Electricity Units

   Output: Total Bill
           Energy Charge
           Service Charge

   Process: 
        1. Declare the Variables that hold the input and the output
        2. Define fixed valued( service carge, FIRST_BLOCK_UNITS, FIRST_RATE and NEXT_RATE ) as constants
        3. Read the input
        4. Decide if the electric unit spent is more than 50 or not
        5. Calculate the energy charge and total bill
        6. Display the output

 Design:
  1. variable Declation: Electricity Units....int
                         Total Bill....double
                         Energy Charge....double
                
  2. constant Definition: const int Service_Charge = 10;
                          const double  FIRST_BLOCK_UNITS = 50;
                          const double FIRST_RATE = 1.50;
                          const double NEXT_RATE = 2.00;
  
  3. Input: cout << "Enter the electricity unit used in a month: " <<endl;
            cin >> units;

  4. Calculation: EC = (units <= FIRST_BLOCK_UNITS)
                       ? units * FIRST_RATE
                        : FIRST_BLOCK_UNITS * FIRST_RATE + (units - FIRST_BLOCK_UNITS) * NEXT_RATE;
                 Total = EC + Service_Charge;

  5. Output:  cout << fixed << setprecision(2);
              cout << "The energy charge is:" << EC << "birr" <<endl;
              cout << "The service charge is:" << Service_Charge << "birr" <<endl;
              cout << "The total bill is:" << Total << "birr" <<endl;*/


#include <iostream>
#include <iomanip>
using namespace std;

int main(){

 
    const int Service_Charge = 10;
    const double  FIRST_BLOCK_UNITS = 50;
    const double FIRST_RATE = 1.50;
    const double NEXT_RATE = 2.00;

    double Total; //Total Bill
    double EC; //EC(Energy Charge)
    int units;
  
    
    cout << "Enter the electricity unit used in a month: " <<endl;
    cin >> units;

    EC = (units <= FIRST_BLOCK_UNITS)
        ? units * FIRST_RATE
        : FIRST_BLOCK_UNITS * FIRST_RATE + (units - FIRST_BLOCK_UNITS) * NEXT_RATE;
    Total = EC + Service_Charge;
    
    cout << fixed << setprecision(2);
    cout << "The energy charge is:" << EC << "birr" <<endl;
    cout << "The service charge is:" << Service_Charge << "birr" <<endl;
    cout << "The total bill is:" << Total << "birr" <<endl;

    return 0;

}