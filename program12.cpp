#include <iostream>

using namespace std;

int program12(){

 const float pi = 3.1417;
 float r,h,v;

 cout <<"Enter the radius of cylinder: ";
 cin >>r;
 cout <<"Enter the height of cylinder: ";
 cin >>h;

 v = pi *r*r*h;

 cout << "Volume of cylinder is ="<<v<<endl;
    
}