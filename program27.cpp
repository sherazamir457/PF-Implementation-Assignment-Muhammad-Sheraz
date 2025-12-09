#include <iostream>

using namespace std;

int program27(){

    int hours, minutes, seconds, totalseconds;

    cout <<"Enter hours: ";
    cin >>hours;
    cout <<"Enter minutes: ";
    cin >>minutes;
    cout <<"Enter seconds: ";
    cin >>seconds;

    totalseconds = hours *3600 +minutes * 60 +seconds;

    cout <<"Total time in seconds ="<<totalseconds<<endl;

}