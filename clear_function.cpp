//Input failure and the clear function
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

    cin.clear();               //Restore input stream; Line 17

    cin.ignore(200,'\n');          //Clear the buffer; Line 18

    cout << "\nLine 19: Enter name, age, weight, " 
         << "and height: ";                          //Line 19 
    cin >> name >> age >> weight >> height;          //Line 20
    cout << endl;                                    //Line 21

    cout << "Line 22: Name: " << name << endl;       //Line 22
    cout << "Line 23: Age: " << age << endl;         //Line 23
    cout << "Line 24: Weight: " << weight << endl;   //Line 24
    cout << "Line 25: Height: " << height << endl;   //Line 25

    return 0;                                        //Line 26
}                                                    //Line 27
