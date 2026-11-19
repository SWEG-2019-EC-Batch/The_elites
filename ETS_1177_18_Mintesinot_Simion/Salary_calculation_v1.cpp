  /*
INPUT:
- Read hours worked per week.
- Read employee's base salary.
- Read bonus rate for overtime.
- Read the user's menu selection.

PROCESS:
- Calculate the hourly base rate.
- Calculate overtime or penalty based on working hours.
- Calculate gross salary, pension (7%), tax deduction, and net salary.
- Use a switch statement to display the selected information.

OUTPUT:
- Display pension, tax deduction, overtime, gross salary,
  net salary, and penalty.
- Display all salary details or an invalid input message
  depending on the user's choice.
 */
 #include <iostream>
using namespace std;
int main()
{
 
    double base_rate;
    double base_salary, over_time=0;
    int hours_per_week;
    double bonus_rate, tax_deduction;
    double gross_salary, penality = 0;
    double net_salary, pension;

   
    cout << "enter the hours you worked per_week(in hr):";
    cin >> hours_per_week;
    cout << "bonus_rate(in birr):";
    cin >> bonus_rate;
    cout << "enter_base salary(in birr):";
    cin >> base_salary;
    base_rate = base_salary / 40;
    if (hours_per_week > 40)
    {
        over_time = bonus_rate * ((hours_per_week)-40);
    }

    else if (hours_per_week >= 0 && hours_per_week < 40)
    {
    
        penality = base_rate * (40 - hours_per_week);
        base_salary-=penality;
    }
    else
    {
    }

    gross_salary = base_salary + over_time;
    pension = gross_salary * 0.07;
    if (gross_salary > 0 && gross_salary <= 3500)
    {
        tax_deduction = 0;
    }
    else if (gross_salary > 3500 && gross_salary <= 10000)
    {

        tax_deduction = gross_salary * 0.10;
    }
    else if (gross_salary > 10000 && gross_salary <= 25000)
    {
        tax_deduction = gross_salary * 0.15;
    }
    else if (gross_salary > 25000 && gross_salary <= 50000)
    {

        tax_deduction = gross_salary * 0.20;
    }
    else if (gross_salary > 50000 && gross_salary <= 100000)
    {

        tax_deduction = gross_salary * 0.25;
    }
    else if (gross_salary > 100000)
    {
        tax_deduction = gross_salary * 0.30;
    }
    else
    {
    }
    net_salary = gross_salary - (pension + tax_deduction);
    int what_you_want_to_see;
    cout << "enter 1 to see pension:" << endl;
    cout << "enter 2 to see tax deduction:" << endl;
    cout << "enter 3 to see over time:" << endl;
    cout << "enter 4 to see gross salary:" << endl;
    cout << "enter 5 to see net slary:" << endl;
    cout << "enter 6 to see penality:" << endl;
    cout << "enter 7 when you want to see all the above:" << endl;
    cin >> what_you_want_to_see;
    switch (what_you_want_to_see)
    {
    case 1:
        cout << "pension is :" << pension << endl;
        break;
    case 2:
        cout << "tax deduction is : " << tax_deduction << endl;
        break;
    case 3:
        cout << "over time:" << over_time << endl;
        break;
    case 4:
        cout << "gross salary is :" << gross_salary << endl;
        break;
    case 5:
        cout << "net salary is" << net_salary << endl;
        break;
    case 6:
        cout << "penality is:" << penality << endl;
        break;
    case 7:
        cout << "pension is :" << pension << endl;
        cout << "tax deduction is: " << tax_deduction << endl;
        cout << "over time is: " << over_time << endl;
        cout << "gross salary is:" << gross_salary << endl;
        cout << "net salary is:" << net_salary << endl;
        cout << "penality is:" << penality << endl;
        break;
    default:
        cout << "invalid input" << endl;
    }
    return 0;
}
