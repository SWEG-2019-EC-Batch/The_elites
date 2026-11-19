#include <iostream>
using namespace std;

int main() {
    
   

    const int TRIP_FARE = 300;
    const double CHILD_DISCOUNT = 0.5;
    const double SENIOR_DISCOUNT = 0.25;
    const int PRICE_PER_KG = 10;
    const double STUD_DISCOUNT = 0.3;
    const int WEIGHT = 20;

    const int ADDIS_JIMMA = 1;
    const int ADDIS_ADAMA = 2;
    const int ADDIS_ARBAMINCH = 3;
    const int ADDIS_GONDER = 4;
    const int ADDIS_HAWASSA = 5;
   

    
    float baggage_weight;
    float trip_fare = TRIP_FARE;
    float baggage_fare = 0;
    float total_fare = 0;
    int route;
    int num_of_seat;
    int age;
    char is_student;


    cout << "Enter the available number of seat:" <<endl;
    cin >> num_of_seat;

    //check the availabele number of seat
      if ( num_of_seat <= 0 ) {cout << "All seats are sold out" <<endl;
         return 0;}

    cout << " Choose the number of your route: " <<endl;
      cout << "1. Addis Ababa to Jimma" << endl;
      cout << "2. Addis Ababa to Adama" <<endl;
      cout << "3. Addis Ababa to Arba Minch" <<endl;
      cout << "4. Addis Ababa to Gonder" <<endl;
      cout << "5. Addis Ababa to Hawassa" <<endl;
      cin >> route;

    cout << "Enter your age:" <<endl;
    cin >> age;
    cout << "Are you student? if you are student please enter Y. if not enter N:" <<endl;
    cin >> is_student;
    cout << "Enter your baggage weight:" <<endl;
    cin >> baggage_weight;


        switch (route){
        case ADDIS_ADAMA:
         break;
        case ADDIS_JIMMA: 
        break;
        case ADDIS_ARBAMINCH: 
        break;
        case ADDIS_GONDER: 
        break;
        case ADDIS_HAWASSA:
         break;
        default:
        cout << "Invalid route" <<endl;
      }

      //check the age
        if ( age < 12){
            trip_fare = TRIP_FARE - (TRIP_FARE * CHILD_DISCOUNT );}
         else if (age > 60) {
            trip_fare = TRIP_FARE - (TRIP_FARE * SENIOR_DISCOUNT );}
    
   
      //check if student
      if ( is_student == 'Y' || is_student == 'y') { 
         trip_fare = trip_fare - (trip_fare * STUD_DISCOUNT);}


       //check baggage weight
      if (baggage_weight > WEIGHT){
          baggage_fare = (baggage_weight - WEIGHT) * PRICE_PER_KG ;
         }

           total_fare = baggage_fare + trip_fare;

           cout << "The total fare is:" << total_fare << "Birr \n" ;
           cout << "The baggage fare is:" << baggage_fare << "Birr" <<endl;
           cout << "The trip fare is:" << trip_fare << "Birr" <<endl;

    return 0;


      }