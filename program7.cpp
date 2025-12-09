#include <iostream>

using namespace std;

int program7(){

    int a , marks1,marks2,marks3;

    cout <<"Enter the roll number:";
    cin >>a;
    cout <<"Enter the marks of pf:";
    cin >>marks1;
    cout <<"Enter the marks of introduction to computing:";
    cin >>marks2;
    cout <<"Enter the marks of computr graphics:";
    cin >>marks3;

    int total = marks1+marks2+marks3;
    float average = total/3.0;

    cout<<"Total marks =" << total<<endl;
    cout<<"Average =" << average<<endl;

    
}