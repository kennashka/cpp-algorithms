//Input Failure program

#include <iostream>                                  //Line 1
#include <string>                                    //Line 2
 
using namespace std;                                 //Line 3
   
int main()                                           //Line 4
{                                                    //Line 5
    string name;                                     //Line 6
    int age = 0;                                     //Line 7
    int weight = 0;                                  //Line 8
    double height = 0.0;                             //Line 9
	
    cout << "Line 10: Enter name, age, weight, and " 
         << "height: ";                              //Line 10 
    cin >> name >> age >> weight >> height;          //Line 11
    cout << endl;                                    //Line 12

    cout << "Line 13: Name: " << name << endl;       //Line 13
    cout << "Line 14: Age: " << age << endl;         //Line 14
    cout << "Line 15: Weight: " << weight << endl;   //Line 15
    cout << "Line 16: Height: " << height << endl;   //Line 16

    return 0;                                        //Line 17
}                                                    //Line 18
