/*
IPO ANALYSIS

INPUT:
1. Type of worker (Employee or Laborer).

FOR EMPLOYEES:
2. Base salary.
3. Hours worked.
4. Bonus rate.

FOR LABORERS:
5. Hours worked.
6. Hourly rate.
7. Bonus amount.
8. Machinery damage status.
9. Salary penalty for machinery damage.

10. Display choice.

PROCESS:
1. Ask the user to select the type of worker.
2. If employee:
   a. Calculate basic hourly rate.
   b. Calculate overtime payment.
   c. Calculate penalty for working less than 40 hours.
   d. Calculate gross salary.
   e. Calculate 7% pension.
   f. Calculate income tax.
   g. Calculate net salary.

3. If laborer:
   a. Calculate salary using hours worked and hourly rate.
   b. Add bonus.
   c. Deduct machinery damage penalty if applicable.
   d. Do not deduct tax or pension.
   e. Calculate net salary.

4. Use switch to display the selected information.

OUTPUT:
1. Bonus.
2. Gross salary.
3. Pension.
4. Tax.
5. Net salary.
6. Penalty.
7. All salary information.
*/

#include<iostream>
using namespace std;

int main()
{
    double base_sal=0, gross=0, net=0, tax=0, pension=0;
    double bonus_rate=0, ot=0, base_rate=0, penalty=0;
    double hourly_rate=0, bonus=0, damage_penalty=0;
    int hours, choice, worker, damage;

    cout<<"Choose the type of worker:"<<endl;
    cout<<"1. Employee"<<endl;
    cout<<"2. Laborer"<<endl;
    cout<<"Enter your choice: ";
    cin>>worker;

    if(worker==1)
    {
        cout<<"Please enter your base salary: "<<endl;
        cin>>base_sal;

        cout<<"Please enter the hours worked: "<<endl;
        cin>>hours;

        cout<<"Please enter the bonus rate: "<<endl;
        cin>>bonus_rate;

        base_rate=base_sal/40;

        if(hours>40)
        {
            ot=bonus_rate*(hours-40);
        }
        else if(hours>=0 && hours<40)
        {
            base_sal=base_rate*hours;
            penalty=base_rate*(40-hours);
        }

        gross=base_sal+ot;
        pension=gross*0.07;

        if(gross>0 && gross<=3500)
        {
            tax=0;
        }
        else if(gross<=10000)
        {
            tax=gross*0.1;
        }
        else if(gross<=25000)
        {
            tax=gross*0.15;
        }
        else if(gross<=50000)
        {
            tax=gross*0.20;
        }
        else if(gross<=100000)
        {
            tax=gross*0.25;
        }
        else if(gross>100000)
        {
            tax=gross*0.30;
        }

        net=gross-(tax+pension);
    }

    else if(worker==2)
    {
        cout<<"Please enter the hours worked: "<<endl;
        cin>>hours;

        cout<<"Please enter the hourly rate: "<<endl;
        cin>>hourly_rate;

        cout<<"Does the laborer have a bonus? (1=Yes, 0=No): ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Please enter the bonus amount: ";
            cin>>bonus;
        }

        cout<<"Did the laborer damage any machinery? (1=Yes, 0=No): ";
        cin>>damage;

        if(damage==1)
        {
            cout<<"Enter the salary penalty for the damage: ";
            cin>>damage_penalty;
        }

        gross=(hours*hourly_rate)+bonus;
        net=gross-damage_penalty;
    }

    else
    {
        cout<<"Invalid worker choice!"<<endl;
        return 0;// to terminate the process because of an invalid choice
    }

    cout<<"\nChoose what you want to display:"<<endl;
    cout<<"1. Bonus"<<endl;
    cout<<"2. Gross salary"<<endl;
    cout<<"3. Pension"<<endl;
    cout<<"4. Tax"<<endl;
    cout<<"5. Net salary"<<endl;
    cout<<"6. Penalty"<<endl;
    cout<<"7. Display all"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        if(worker==1)
            cout<<"Bonus: "<<ot<<" birr"<<endl;
        else
            cout<<"Bonus: "<<bonus<<" birr"<<endl;
        break;

    case 2:
        cout<<"Gross salary: "<<gross<<" birr"<<endl;
        break;

    case 3:
        cout<<"Pension: "<<pension<<" birr"<<endl;
        break;

    case 4:
        cout<<"Tax: "<<tax<<" birr"<<endl;
        break;

    case 5:
        cout<<"Your salary is: "<<net<<" birr"<<endl;
        break;

    case 6:
        if(worker==1)
            cout<<"Penalty: "<<penalty<<" birr"<<endl;
        else
            cout<<"Penalty: "<<damage_penalty<<" birr"<<endl;
        break;

    case 7:
        if(worker==1)
            cout<<"Bonus: "<<ot<<" birr"<<endl;
        else
            cout<<"Bonus: "<<bonus<<" birr"<<endl;

        cout<<"Gross salary: "<<gross<<" birr"<<endl;
        cout<<"Pension: "<<pension<<" birr"<<endl;
        cout<<"Tax: "<<tax<<" birr"<<endl;
        cout<<"Net salary: "<<net<<" birr"<<endl;

        if(worker==1)
            cout<<"Penalty: "<<penalty<<" birr"<<endl;
        else
            cout<<"Penalty: "<<damage_penalty<<" birr"<<endl;
        break;

    default:
        cout<<"Invalid choice!"<<endl;
    }

    return 0;
}
