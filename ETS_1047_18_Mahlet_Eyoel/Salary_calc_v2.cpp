#include <iostream>
using namespace std;

int main(){

    double base_salary;
    double bonus, OT, net_salary, gross_salary, payment;
    double tax_deduction, pension, penality;
    int hour;
    int choice;
    char answer;
    
    cout << " Are you a labour worker or an employee? " <<endl;
    cout << "Enter Y if you are labor worker, if not enter N " <<endl;
     cin >> answer;
     if (answer == 'Y' || answer == 'y'){
      cout << "Enter the worked hours: " <<endl;
      cin >> hour;
      cout << "Enter the rate of payment per hour " <<endl;
      cin >> payment;
      cout << "Enter your bonus payment " <<endl;
      cin >> OT;
      cout << "Enter your penality " <<endl;
      cin >> penality;

      net_salary = ( hour * payment ) + OT - penality;

     cout << " What do you want to see?" <<endl;
     cout << " Press 1 for bonus payment" <<endl;
     cout << " Press 2 for net_salary" <<endl;
     cout << " Press 3 for penality" <<endl;
     cout << " Press 4 to display all" <<endl;
     cin >> choice;

     switch (choice)
     {
      case 1: 
      cout << " bonus payment : " << OT << endl;
      break;
      case 2:
      cout << " net salary : " << net_salary << endl;
      break;
      case 3:
      cout << " Penality : " << penality << endl;
      break;
      case 4:
      cout << " bonus payment : " << OT << endl;
      cout << " net salary : " << net_salary << endl;
      cout << " Penality : " << penality << endl;
      break;
      default: 
      cout << " Invalid choice " << endl;

     }
    
     
     }

     else {

    cout << "Enter your base salary:" <<endl;
    cin >> base_salary;
    cout << "Enter the worked hours per week:" <<endl;
    cin >> hour;

    if ( hour > 40) {
        cout << " Enter the bonus added per hour:" <<endl;
        cin >> bonus;
        OT = (hour - 40) * bonus;
        gross_salary = base_salary + OT;


    }
    else if ( hour < 40){
        OT = 0.0; 
        penality = (40 - hour) * (base_salary / 40 );
        gross_salary = base_salary - penality;
    } 
    
    else { gross_salary = base_salary;}
     
    if (gross_salary <= 3500){
        tax_deduction = gross_salary * 0.0;
    }
    
    else if ((gross_salary > 3500) && (gross_salary <=10000)){
        tax_deduction = gross_salary * 0.1;
    }

    else if ((gross_salary > 10000) && (gross_salary <= 25000)){
        tax_deduction = gross_salary * 0.15;
    }
    
    else if ((gross_salary > 25000) && (gross_salary <= 50000)){
        tax_deduction = gross_salary * 0.2;
    }
       
    else if ((gross_salary > 50000) && (gross_salary <= 100000)){
        tax_deduction = gross_salary * 0.25;
    }

    else{
        tax_deduction = gross_salary * 0.3;
    } 
       pension = gross_salary * 0.07;
       net_salary = gross_salary - tax_deduction - pension;
  
    cout << "What do you want to see?" <<endl;
    cout << "  1. gross salary" <<endl;
    cout << "  2. bonus salary" <<endl;
    cout << "  3. tax deduction" <<endl;
    cout << "  4. pension" <<endl;
    cout << "  5. net salary" <<endl;
    cout << "  6. see all" <<endl;
    cin >> choice;

    switch(choice)
    {
      case 1: 
        cout << "The gross salary is " << gross_salary <<endl;
        break;
      case 2:
        cout << "The bonus salary is " << OT <<endl;
        break;
      case 3:
        cout << "The tax deduction is " << tax_deduction <<endl;
        break;
      case 4:
        cout << "The pension is " << pension <<endl;
        break;
      case 5:
        cout << "The net salary is " << net_salary <<endl;
        break;
      case 6:
        cout << "The gross salary is " << gross_salary <<endl;
        cout << "The bonus salary is " << OT <<endl;
        cout << "The tax deduction is " << tax_deduction <<endl;
        cout << "The pension is " << pension <<endl;
        cout << "The net salary is " << net_salary <<endl;
        break;
      default:
        cout << "Invalid choice" <<endl;
    }
  }
     return 0;



    
}