#include <iostream>

using namespace std;

int program9(){

    int num1,num2,num3,num4;

    cout <<"Enter the num1 =";
    cin >>num1;
    cout <<"Enter the num2 =";
    cin >>num2;
     cout <<"Enter the num3 =";
    cin >>num3;
     cout <<"Enter the num4 =";
    cin >>num4;

    if((num1>num2)&&(num1>num3)&&(num1>num4)){
     cout<<"the maximum numb is ="<<num1<<endl;
     } else if((num2>num1)&&(num2>num3)&&(num2>num4)){
       cout<<"the maximum numb is ="<<num2<<endl; 
     } else if((num3>num1)&&(num3>num2)&&(num3>num4)){
       cout<<"the maximum numb is ="<<num3<<endl; 
     } else{
       cout<<"the maximum numb is ="<<num4<<endl; 
     }
    
   
    
}