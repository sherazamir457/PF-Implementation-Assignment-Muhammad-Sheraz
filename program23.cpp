#include <iostream>

using namespace std;

int program23(){

    const float pi = 3.1417;
    float radius, area , circumference;

    cout <<"Enter the radius of circle: ";
    cin >>radius;

    area = pi *radius *radius;
    circumference = 2 * radius * pi;

    cout <<"Area of circle is = "<<area<<endl;
    cout <<"Circumference of circle = "<<circumference<<endl;



}