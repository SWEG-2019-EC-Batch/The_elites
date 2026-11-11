/*Input: distance
         hour
         minute
         fuel_use in liters_per_100 Km
         Price_per_liter
         

  Output: ave_speed
          fuel_used
          fuel_cost

  Process: 1. Declare the variables that hold the input and the output
           2. Define fixed values(minute_per_hour and km_per_block) as constants
           3. Read the input
           4. Calculate the time, average speed, fuel used and fuel cost
           5. Display the output
Design
  
1. Variables Declaration: double distance;
                          int hour, minute;
                          double fuel_use, price_per_liter;
                          double ave_speed, fuel_used, fuel_cost;

              
2. Constant Definition: const double minute_per_hour = 60.0;
                        const double km_per_block = 100.0 ; 
              
3. Inout: cout << "Enter the distance traveled:";
          cin >> distance;
          cout << "Enter time as hours and minutes separated by space:" ;
          cin >> hour >> minute;
          cout << "Enter the car's fuel use in liters_per_100 Km:";
          cin >> fuel_use;
          cout << "Enter the price_per_liter:" ;
          cin >> price_per_liter; 
          
4. Calculation: time = hour + (minute/minute_per_hour) 
                ave_speed = distance/ time
                fuel_used = fuel_use * (distance / km_per_block)
                fuel_cost = price_per_liter * fuel_used
                
5. Output: cout << fixed << setprecision(2);
           cout << "The average speed of the car is:" << ave_speed << "Km/H" <<endl;
           cout << "The fuel used throughout the trip is:" << fuel_used << "Liters" <<endl;
           cout << "The fuel cost of the car is:" << fuel_cost << "Birr" <<endl; */


#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double distance, time;
    int  hour, minute;
    double fuel_use, price_per_liter;
    double ave_speed, fuel_used, fuel_cost;

    const double minute_per_hour = 60.0;
    const double km_per_block = 100.0 ;

    cout << "Enter the distance traveled:";
    cin >> distance;
    cout << "Enter time as hours and minutes separated by space:" ;
    cin >> hour >> minute;
    cout << "Enter the car's fuel use in liters_per_100 Km:";
    cin >> fuel_use;
    cout << "Enter the price_per_liter:" ;
    cin >> price_per_liter;
    
    time = hour + (minute/minute_per_hour); 
    ave_speed = distance/ time;
    fuel_used = fuel_use * (distance / km_per_block);
    fuel_cost = price_per_liter * fuel_used;

    cout << fixed << setprecision(2);
    cout << "The average speed of the car is:" << ave_speed << "Km/H" <<endl;
    cout << "The fuel used throughout the trip is:" << fuel_used << "Liters" <<endl;
    cout << "The fuel cost of the car is:" << fuel_cost << "Birr" <<endl;

    return 0;
}
