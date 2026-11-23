#include <iostream>
using namespace std;
int main(){
   int worked_hours, base_salary, bonus, tax, gross_salary, pension, net_salary, choice;
   int job;
   cout<< "What's your job?(1 for officeworker, 2 for Doctor, 3 for Police officer, 4 for Teachers, 5 for Accountant ): ";
   cin>> job;
   cout<< "What do you want to see?:- " << endl;
   cout << "'1' for bonus." << endl;
   cout << "'2' for pension deduction." << endl;
   cout << "'3' for tax deduction." << endl;
   cout << "'4' for gross salary." << endl;
   cout << "'5' for net salary." << endl;
   cout << "'6' for all." << endl;
   cout<< "Enter what you want to see: ";
   cin>> choice;

   cout<< "Enter base salary: ";
   cin>> base_salary;
   
   cout<< "How many hours have you worked?: ";
   cin>> worked_hours;
   switch(job){
      case 1:
   if(worked_hours > 40){
      cout<< "Enter the bonus rate(per hour):";
      cin>> bonus;
      bonus = bonus * (worked_hours - 40);
      gross_salary= base_salary + bonus;
   }
   else{ base_salary = base_salary - (base_salary / 40) * (40-worked_hours);
         gross_salary = base_salary;
         bonus = 0;
   }
   if(gross_salary > 0 && gross_salary <= 3500 ){
      tax = 0;
   }
   if(gross_salary > 3500 && gross_salary <=10000){
      tax = gross_salary * 0.1;
   }
   if(gross_salary > 10000 && gross_salary <= 25000){
      tax = gross_salary * 0.15;
   }
   if(gross_salary > 25000 && gross_salary <= 50000){
      tax = gross_salary * 0.2;
   }
   if(gross_salary > 50000 && gross_salary <= 100000){
      tax = gross_salary * 0.5;
   }
   break;
   case 2:
   if(worked_hours > 60){
      cout<< "Enter the bonus rate(per hour):";
      cin>> bonus;
      bonus = bonus * (worked_hours - 60);
      gross_salary= base_salary + bonus;
   }
   else{ base_salary = base_salary - (base_salary / 60) * (60-worked_hours);
         gross_salary = base_salary;
         bonus = 0;
   }
   if(gross_salary > 0 && gross_salary <= 10000 ){
      tax = 0;
   }
   if(gross_salary > 10000 && gross_salary <=12000){
      tax = gross_salary * 0.1;
   }
   if(gross_salary > 12000 && gross_salary <= 15000){
      tax = gross_salary * 0.15;
   }
   if(gross_salary > 15000 && gross_salary <= 17000){
      tax = gross_salary * 0.2;
   }
   if(gross_salary > 17000 && gross_salary <= 20000){
      tax = gross_salary * 0.5;
   }
   break;
   case 3:
   if(worked_hours > 36){
      cout<< "Enter the bonus rate(per hour):";
      cin>> bonus;
      bonus = bonus * (worked_hours - 36);
      gross_salary= base_salary + bonus;
   }
   else{ base_salary = base_salary - (base_salary / 36) * (36-worked_hours);
         gross_salary = base_salary;
         bonus = 0;
   }
   if(gross_salary > 0 && gross_salary <= 3500 ){
      tax = 0;
   }
   if(gross_salary > 3500 && gross_salary <=4000){
      tax = gross_salary * 0.1;
   }
   if(gross_salary > 4000 && gross_salary <= 6000){
      tax = gross_salary * 0.15;
   }
   if(gross_salary > 6000 && gross_salary <= 10000){
      tax = gross_salary * 0.2;
   }
   if(gross_salary > 10000 && gross_salary <= 14000){
      tax = gross_salary * 0.5;
   }
   break;
   case 4:
   if(worked_hours > 40){
      cout<< "Enter the bonus rate(per hour):";
      cin>> bonus;
      bonus = bonus * (worked_hours - 40);
      gross_salary= base_salary + bonus;
   }
   else{ base_salary = base_salary - (base_salary / 40) * (40-worked_hours);
         gross_salary = base_salary;
         bonus = 0;
   }
   if(gross_salary > 0 && gross_salary <= 7000 ){
      tax = 0;
   }
   if(gross_salary > 7000 && gross_salary <=10000){
      tax = gross_salary * 0.1;
   }
   if(gross_salary > 10000 && gross_salary <= 25000){
      tax = gross_salary * 0.15;
   }
   if(gross_salary > 25000 && gross_salary <= 40000){
      tax = gross_salary * 0.2;
   }
   if(gross_salary > 40000 && gross_salary <= 50000){
      tax = gross_salary * 0.5;
   }
   break;
   case 5:
   if(worked_hours > 50){
      cout<< "Enter the bonus rate(per hour):";
      cin>> bonus;
      bonus = bonus * (worked_hours - 50);
      gross_salary= base_salary + bonus;
   }
   else{ base_salary = base_salary - (base_salary / 50) * (50-worked_hours);
         gross_salary = base_salary;
         bonus = 0;
   }
   if(gross_salary > 0 && gross_salary <= 9000 ){
      tax = 0;
   }
   if(gross_salary > 9000 && gross_salary <=15000){
      tax = gross_salary * 0.1;
   }
   if(gross_salary > 15000 && gross_salary <= 25000){
      tax = gross_salary * 0.15;
   }
   if(gross_salary > 25000 && gross_salary <= 30000){
      tax = gross_salary * 0.2;
   }
   if(gross_salary > 30000 && gross_salary <= 34000){
      tax = gross_salary * 0.5;
   }
   break;
   }
   pension = gross_salary * 0.07;
   net_salary = gross_salary - (tax + pension);
   
   switch(choice){
      case 1:
      cout<< "Your bonus is: " << bonus << " ETB"<< endl;
      break;
      case 2:
      cout << "pension: " << pension << " ETB"<< endl;
      break;
      case 3:
      cout<< "tax: " << tax << " ETB" << endl;
      break;
      case 4:
      cout<< "Your gross salary is: " << gross_salary << " ETB" << endl;
      break;
      case 5:
      cout<< "Your net salary is: " << net_salary << " ETB" << endl;
      break;
      case 6:
      cout<< "Your bonus is: " << bonus << " ETB"<< endl;
      cout<< "pension: " << pension << " ETB"<< endl;
      cout<< "tax: " << tax << " ETB" << endl;
      cout<< "Your gross salary is: " << gross_salary << " ETB" << endl;
      cout<< "Your net salary is: " << net_salary << " ETB" << endl;
      break;
      default:
      cout<< "Invalid number" << endl;
      break;
   }
   return 0;
}