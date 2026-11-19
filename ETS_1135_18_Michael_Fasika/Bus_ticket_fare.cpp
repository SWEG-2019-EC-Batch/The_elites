/*
IPO ANALYSIS

INPUT:
1. Destination selected by the passenger.
2. Number of available seats for the selected destination.
3. Passenger's luggage weight.
4. Passenger's age.
5. Student status (1 for Yes, 0 for No).

PROCESS:
1. Display five destination choices.
2. Use switch to identify the selected destination.
3. Check whether seats are available.
4. If no seats are available, display a message.
5. If seats are available:
   a. Calculate baggage fare if luggage exceeds 20 kg.
   b. Determine the applicable discount based on age
      and student status.
   c. Calculate discount amount.
   d. Calculate trip fare after discount.
   e. Calculate total fare.

OUTPUT:
1. Selected destination.
2. Seat availability message.
3. Discount amount.
4. Baggage fare.
5. Trip fare after discount.
6. Total fare.
*/

#include<iostream>
using namespace std;

int main()
{
    float weight, Total_fare, Baggage_fare=0, seat, age;
    float trip_fare=300, discount=0, discount_amount;
    int student, destination;

    cout<<"Please choose your destination:"<<endl;
    cout<<"1. Hawassa"<<endl;
    cout<<"2. Bahir Dar"<<endl;
    cout<<"3. Adama"<<endl;
    cout<<"4. Dire Dawa"<<endl;
    cout<<"5. Arba Minch"<<endl;
    cout<<"Enter here: ";
    cin>>destination;

    switch(destination)
    {
        case 1:
            cout<<"Your destination is Hawassa"<<endl;
            break;

        case 2:
            cout<<"Your destination is Bahir Dar"<<endl;
            break;

        case 3:
            cout<<"Your destination is Adama"<<endl;
            break;

        case 4:
            cout<<"Your destination is Dire Dawa"<<endl;
            break;

        case 5:
            cout<<"Your destination is Arba Minch"<<endl;
            break;

        default:
            cout<<"Invalid destination!"<<endl;
            return 0;
    }

    cout<<"Please enter the number of seats available for your destination:"<<endl;
    cin>>seat;

    if(seat<=0)
    {
        cout<<"Sorry, there are no seats available for your destination."<<endl;
    }
    else
    {
        cout<<"Please enter the luggage weight:"<<endl;
        cin>>weight;

        cout<<"Please enter your age:"<<endl;
        cin>>age;

        cout<<"Are you a student? (1 for Yes, 0 for No)"<<endl;
        cin>>student;

        if(weight>20)
        {
            Baggage_fare=(weight-20)*10;
        }

        if(student==1 && age<=12)
        {
            discount=80;
        }
        else if(student==1 && age>=60)
        {
            discount=55;
        }
        else if(student==1)
        {
            discount=30;
        }
        else if(age<=12)
        {
            discount=50;
        }
        else if(age>=60)
        {
            discount=25;
        }

        discount_amount=trip_fare*discount/100;

        trip_fare=trip_fare-discount_amount;

        Total_fare=Baggage_fare+trip_fare;

        cout<<"\n----- TICKET DETAILS -----"<<endl;
        cout<<"Your discount amount is: "<<discount_amount<<" birr"<<endl;
        cout<<"Your Baggage fare is: "<<Baggage_fare<<" birr"<<endl;
        cout<<"Your Trip fare is: "<<trip_fare<<" birr"<<endl;
        cout<<"Your Total fare is: "<<Total_fare<<" birr"<<endl;
    }

    return 0;
}
