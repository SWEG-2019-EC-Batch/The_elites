#include<iostream>
using namespace std;
int main(){
    int baggage_fare,total_fare,baggage,seat;
    int trip_fare;
    string student;
    string destination;
    cout<<"Welcome! Please enter your destination(Bale-Robe, Bahir Dar, Adama, Bishoftu, Mekele, Hawassa, Dire Dawa): ";
    cin>> destination;
    cout<<"Are you a student? (yes or no): ";
    cin>> student;
    cout<<"Enter the Baggage Weight: ";
    cin>>baggage;
    cout<<"enter the number of seat availabe:";
    cin>>seat;
    if(seat>0){
     if (baggage<=20) {
    baggage_fare = 0;
      }
      else {
    baggage_fare=(baggage-20)*10;
         }
         if(destination=="Bale-Robe"){
          trip_fare=1200;
         }
         if(destination=="Bahir Dar"){
          trip_fare=800;
         }
         if(destination=="Adama"){
          trip_fare=225;
         }
         if(destination=="Bishoftu"){
          trip_fare=120;
         }
         if(destination=="Mekele"){
          trip_fare=1270;
         }
         if(destination=="Hawassa"){
          trip_fare=550;
         }
         if(destination=="Dire Dawa"){
          trip_fare=870;
         }
         total_fare=baggage_fare+trip_fare;
        if(student=="yes"){
          total_fare=total_fare*0.35;
        } 

        cout<<"the baggage_fare is: "<<baggage_fare << " birr" <<endl;
cout<<"the total_fare is: "<<total_fare << " birr" <<endl;}
else{cout<<"there is no available seat";}


return 0;
}