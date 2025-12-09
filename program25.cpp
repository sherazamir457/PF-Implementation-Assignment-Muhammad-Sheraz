#include <iostream>
#include <cmath>
using namespace std;

int program25(){

    float a, b, c, area;

    cout <<"Enter the value of a = "<<endl;
    cin >>a;

    cout <<"Enter the value of b = "<<endl;
    cin >>b;

    cout <<"Enter the value of c = "<<endl;
    cin >>c;

    float s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout <<"area of triangle is = "<<area<<endl;

}