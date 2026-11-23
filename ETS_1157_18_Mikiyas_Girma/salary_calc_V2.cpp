#include<iostream>
using namespace std;

int main()
{
    double base_sal, gross, net, tax=0, pension=0, bonus_rate, ot=0, base_rate, penalty=0;
    double hourly_rate, bonus=0, damage_penalty=0;
    int hours, choice, worker_type;

    cout<<"Select worker type:"<<endl;
    cout<<"1. Employee"<<endl;
    cout<<"2. Laborer"<<endl;
    cout<<"Enter your choice: ";
    cin>>worker_type;

    if (worker_type==1)
    {
        cout<<"Please enter your base salary: "<<endl;
        cin>>base_sal;

        cout<<"Please enter the hours worked: "<<endl;
        cin>>hours;

        cout<<"Please enter the bonus rate: "<<endl;
        cin>>bonus_rate;
        base_rate=base_sal/40;
        if (hours>40)
        {
            ot=bonus_rate*(hours-40);
        }
        else if(0<=hours&&hours<40)
        {
            penalty=base_rate*(40-hours);
            base_sal-=penalty;

        }

        gross=base_sal+ot;
        pension=gross*0.07;

        if (0<gross && gross<=3500)
        {
            tax=0;
        }
        else if (3500<gross && gross<=10000)
        {
            tax=gross*0.1;
        }
        else if (10000<gross && gross<=25000)
        {
            tax=gross*0.15;
        }
        else if (25000<gross && gross<=50000)
        {
            tax=gross*0.20;
        }
        else if (50000<gross && gross<=100000)
        {
            tax=gross*0.25;
        }
        else if (100000<gross)
        {
            tax=gross*0.30;
        }

        net=gross-(tax+pension);
    }
    else if (worker_type==2)
    {
        cout<<"Please enter the hours worked: "<<endl;
        cin>>hours;

        cout<<"Please enter the hourly rate: "<<endl;
        cin>>hourly_rate;

        cout<<"Please enter the bonus (enter 0 if none): "<<endl;
        cin>>bonus;

        cout<<"Please enter the penalty for damaged machinery (enter 0 if none): "<<endl;
        cin>>damage_penalty;

        ot=bonus;
        penalty=damage_penalty;

        gross=(hours*hourly_rate)+ot;

        // Laborers have no tax or pension deductions
        tax=0;
        pension=0;

        net=gross-penalty;
    }
    else
    {
        cout<<"Invalid worker type!"<<endl;
        return 1;
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
        cout<<"Bonus: "<<ot<<" birr"<<endl;
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
        cout<<"Your penalty is: "<<penalty<<" birr"<<endl;
        break;

    case 7:
        cout<<"Bonus: "<<ot<<" birr"<<endl;
        cout<<"Gross salary: "<<gross<<" birr"<<endl;
        cout<<"Pension: "<<pension<<" birr"<<endl;
        cout<<"Tax: "<<tax<<" birr"<<endl;
        cout<<"Your salary is: "<<net<<" birr"<<endl;
        cout<<"Penalty: "<<penalty<<" birr"<<endl;
        break;

    default:
        cout<<"Invalid choice!"<<endl;
    }

    return 0;
}
