#include<iostream>
using namespace std;
int main( ){
    int assignment,midterm,finals,total;
    string result; 
cout<<"enter ur assingment mark: ";
    cin>>assignment;
cout<<"enter ur midterm marks: ";
cin>>midterm;
cout<<"enter ur finals: ";
cin>>finals;
total =assignment*0.2 + midterm *0.3 + finals*0.5;
result =  (total<=50)? "fail":"pass";
cout << fixed << setprecision(2);
cout<<"the total result is " <<total<<endl;
cout<<"the result is "<<result;
}
