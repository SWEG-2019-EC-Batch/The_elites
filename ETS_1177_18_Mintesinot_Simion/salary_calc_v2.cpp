/*
SALARY CALCULATION SYSTEM - VERSION 2

INPUT:
- Read the worker type (Employee or Laborer).
- Read the required salary information, including hours worked,
  base salary or hourly rate, and bonus.
- Read machinery damage information and penalty for laborers.
- Read the user's menu selection.

PROCESS:
- Identify the worker type and perform the appropriate calculation.
- Calculate hourly base rate, overtime payment, and short-hours
  penalty for employees.
- Calculate gross salary, 7% pension, and income tax
  based on salary intervals for employees.
- Calculate laborers' gross salary using hours worked,
  hourly rate, and bonus.
- Deduct machinery damage penalties from laborers' salary.
- Calculate the final net salary and use a switch statement
  to select the information to display.

OUTPUT:
- Display gross salary and net salary.
- Display employee pension, tax deduction, overtime,
  and short-hours penalty.
- Display laborer hours, hourly rate, bonus,
  and machinery damage penalty.
- Display selected salary information or all details.
- Display an error message for invalid input.
*/

#include <iostream>
using namespace std;

int main()
{
    int worker_type;
    int hours_worked;
    int choice;

    double base_salary = 0;
    double base_rate = 0;
    double bonus_rate = 0;
    double overtime = 0;
    double short_hours_penalty = 0;

    double hourly_rate = 0;
    double bonus = 0;
    double damage_penalty = 0;

    double gross_salary = 0;
    double pension = 0;
    double tax_deduction = 0;
    double net_salary = 0;

    cout << "Enter 1 for Employee" << endl;
    cout << "Enter 2 for Laborer" << endl;
    cout << "Choose worker type: ";
    cin >> worker_type;

    if (worker_type == 1)
    {
        // EMPLOYEE SALARY CALCULATION
        cout << "\n----- EMPLOYEE INFORMATION -----" << endl;

        cout << "Enter hours worked per week: ";
        cin >> hours_worked;

        cout << "Enter overtime bonus rate per hour (in birr): ";
        cin >> bonus_rate;

        cout << "Enter base salary (in birr): ";
        cin >> base_salary;

        if (hours_worked < 0 || base_salary < 0 || bonus_rate < 0)
        {
            cout << "Invalid input. Values cannot be negative." << endl;
            return 0;
        }

        base_rate = base_salary / 40.0;

        if (hours_worked > 40)
        {
            overtime = bonus_rate * (hours_worked - 40);
        }
        else if (hours_worked < 40)
        {
            short_hours_penalty = base_rate * (40 - hours_worked);
            base_salary = base_salary - short_hours_penalty;
        }

        gross_salary = base_salary + overtime;
        pension = gross_salary * 0.07;

        // Income tax is calculated using the specified salary intervals.
        // The applicable rate is applied to the whole gross salary.
        if (gross_salary > 0 && gross_salary <= 3500)
        {
            tax_deduction = gross_salary * 0.00;
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

        net_salary = gross_salary - pension - tax_deduction;

        cout << "\n----- EMPLOYEE SALARY MENU -----" << endl;
        cout << "Enter 1 to see Pension" << endl;
        cout << "Enter 2 to see Tax deduction" << endl;
        cout << "Enter 3 to see Overtime payment" << endl;
        cout << "Enter 4 to see Gross salary" << endl;
        cout << "Enter 5 to see Net salary" << endl;
        cout << "Enter 6 to see Short-hours penalty" << endl;
        cout << "Enter 7 to see All details" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Pension: " << pension << " birr" << endl;
            break;
        case 2:
            cout << "Tax deduction: " << tax_deduction << " birr" << endl;
            break;
        case 3:
            cout << "Overtime payment: " << overtime << " birr" << endl;
            break;
        case 4:
            cout << "Gross salary: " << gross_salary << " birr" << endl;
            break;
        case 5:
            cout << "Net salary: " << net_salary << " birr" << endl;
            break;
        case 6:
            cout << "Short-hours penalty: " << short_hours_penalty << " birr" << endl;
            break;
        case 7:
            cout << "\nEmployee salary details:" << endl;
            cout << "Hours worked: " << hours_worked << endl;
            cout << "Overtime payment: " << overtime << " birr" << endl;
            cout << "Short-hours penalty: " << short_hours_penalty << " birr" << endl;
            cout << "Gross salary: " << gross_salary << " birr" << endl;
            cout << "Pension: " << pension << " birr" << endl;
            cout << "Tax deduction: " << tax_deduction << " birr" << endl;
            cout << "Net salary: " << net_salary << " birr" << endl;
            break;
        default:
            cout << "Invalid input." << endl;
        }
    }
    else if (worker_type == 2)
    {
        // LABORER SALARY CALCULATION
        cout << "\n----- LABORER INFORMATION -----" << endl;

        cout << "Enter hours worked: ";
        cin >> hours_worked;

        cout << "Enter hourly rate (in birr): ";
        cin >> hourly_rate;

        cout << "Enter bonus amount (enter 0 if there is no bonus): ";
        cin >> bonus;

        int machinery_damaged;
        cout << "Did the laborer damage any machinery? (1 = Yes, 0 = No): ";
        cin >> machinery_damaged;

        if (machinery_damaged == 1)
        {
            cout << "Enter machinery damage penalty (in birr): ";
            cin >> damage_penalty;
        }
        else if (machinery_damaged != 0)
        {
            cout << "Invalid input for machinery damage." << endl;
            return 0;
        }

        if (hours_worked < 0 || hourly_rate < 0 || bonus < 0 || damage_penalty < 0)
        {
            cout << "Invalid input. Values cannot be negative." << endl;
            return 0;
        }

        gross_salary = (hours_worked * hourly_rate) + bonus;
        net_salary = gross_salary - damage_penalty;

        cout << "\n----- LABORER SALARY MENU -----" << endl;
        cout << "Enter 1 to see Worked hours" << endl;
        cout << "Enter 2 to see Hourly rate" << endl;
        cout << "Enter 3 to see Bonus" << endl;
        cout << "Enter 4 to see Machinery damage penalty" << endl;
        cout << "Enter 5 to see Gross salary" << endl;
        cout << "Enter 6 to see Net salary" << endl;
        cout << "Enter 7 to see All details" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Hours worked: " << hours_worked << endl;
            break;
        case 2:
            cout << "Hourly rate: " << hourly_rate << " birr" << endl;
            break;
        case 3:
            cout << "Bonus: " << bonus << " birr" << endl;
            break;
        case 4:
            cout << "Machinery damage penalty: " << damage_penalty << " birr" << endl;
            break;
        case 5:
            cout << "Gross salary: " << gross_salary << " birr" << endl;
            break;
        case 6:
            cout << "Net salary: " << net_salary << " birr" << endl;
            break;
        case 7:
            cout << "\nLaborer salary details:" << endl;
            cout << "Hours worked: " << hours_worked << endl;
            cout << "Hourly rate: " << hourly_rate << " birr" << endl;
            cout << "Bonus: " << bonus << " birr" << endl;
            cout << "Machinery damage penalty: " << damage_penalty << " birr" << endl;
            cout << "Gross salary: " << gross_salary << " birr" << endl;
            cout << "Tax deduction: 0 birr" << endl;
            cout << "Pension deduction: 0 birr" << endl;
            cout << "Net salary: " << net_salary << " birr" << endl;
            break;
        default:
            cout << "Invalid input." << endl;
        }
    }
    else
    {
        cout << "Invalid worker type. Please choose 1 or 2." << endl;
    }

    return 0;
}
