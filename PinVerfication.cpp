#include <iostream>
using namespace std;

void main()

{
    int usersPin= 1234, pin, errorCounter= 0;

do{
cout<<" enter a pin ";
cin>> pin;
 if (pin!= usersPin)
 errorCounter++;

}while (errorCounter<3 && pin!= usersPin);  // the <3 is errorcounter is less then 3 attempts

if (errorCounter< 3)
cout<<"application loaded ..";
else 
cout<<"blocked...";


system("pause>0");

}
