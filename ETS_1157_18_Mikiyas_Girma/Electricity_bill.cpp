/*
 Input
    The number of electricity units consumed in a month (whole number).
    Output
1. Energy charge in birr.
2. Service charge in birr.
3. Total electricity bill in birr
  Process
1. Start the program.
2. Declare an integer variable units to store the electricity units.
3. Declare double variables energyCharge, serviceCharge, and totalBill.
4. Initialize serviceCharge to 10 birr.
5. Read the number of electricity units from the user.
6. Check whether the units are less than or equal to 50 using the conditional operator.
7. If the units are less than or equal to 50, calculate the energy charge by multiplying the units by 1.50 birr.
8. Otherwise, calculate the energy charge by charging the first 50 units at 1.50 birr each and the remaining units at 2.00 birr each.
9. Calculate the total bill by adding the energy charge and service charge.
10. Set the output to display two decimal places.
11. Display the energy charge, service charge, and total bill.
12. End the program.
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int units;
    double energyCharge, serviceCharge = 10, totalBill;
    cout << "Enter electricity units: ";
    cin >> units;
    energyCharge = (units <= 50) ? (units * 1.50) : (50 * 1.50 + (units - 50) * 2.00);
    totalBill = energyCharge + serviceCharge;
   
    cout << fixed << setprecision(2);
    cout << "Energy charge = " << energyCharge << " birr" << endl;
    cout << "Service charge = " << serviceCharge << " birr" << endl;
    cout << "Total bill = " << totalBill << " birr" << endl;
    
    return 0;
}
