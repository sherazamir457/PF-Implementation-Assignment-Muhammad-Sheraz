 #include <iostream>
 #include "./program1.cpp"
 #include "./program2.cpp"
 #include "./program3.cpp"
 #include "./program4.cpp"
 #include "./program5.cpp"
 #include "./program6.cpp"
 #include "./program7.cpp"
 #include "./program8.cpp"
 #include "./program9.cpp"
 #include "./program10.cpp"
 #include "./program11.cpp"
 #include "./program12.cpp"
 #include "./program13.cpp"
 #include "./program14.cpp"
 #include "./program15.cpp"
 #include "./program16.cpp"
 #include "./program17.cpp"
 #include "./program18.cpp"
 #include "./program19.cpp"
 #include "./program20.cpp"
 #include "./program21.cpp"
 #include "./program22.cpp"
 #include "./program23.cpp"
 #include "./program24.cpp"
 #include "./program25.cpp"
 #include "./program26.cpp"
 #include "./program27.cpp"
 #include "./program28.cpp"
 #include "./program29.cpp"
 #include "./program30.cpp"

 using namespace std;
 int main (){
  int choice;
  do {

  cout << "Enter your choice to run that program : ";
  cin >>choice;
  cout <<endl;

  switch (choice){
    case 1 : program1();break;
    case 2 : program2();break;
    case 3 : program3();break;
    case 4 : program4();break;
    case 5 : program5();break;
    case 6 : program6();break;
    case 7 : program7();break;
    case 8 : program8();break;
    case 9 : program9();break;
    case 10: program10();break;
    case 11: program11();break;
    case 12: program12();break;
    case 13: program13();break;
    case 14: program14();break;
    case 15: program15();break;
    case 16: program16();break;
    case 17: program17();break;
    case 18: program18();break;
    case 19: program19();break;
    case 20: program20();break;
    case 21: program21();break;
    case 22: program22();break;
    case 23: program23();break;
    case 24: program24();break;
    case 25: program25();break;
    case 26: program26();break;
    case 27: program27();break;
    case 28: program28();break;
    case 29: program29();break;
    case 30: program30();break;

    default : cout <<" Invalid choice " <<endl;
  }
}
  while( (choice == -1));

  return 0;
 }