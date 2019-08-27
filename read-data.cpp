// This program illustrates how to read strings and numeric data.

#include <iostream>                                 //Line 1
#include <string>                                   //Line 2

using namespace std;                                //Line 3

int main()                                          //Line 4
{                                                   //Line 5
    string firstName;                               //Line 6
    string lastName;                                //Line 7
    int age;                                        //Line 8
    double weight;                                  //Line 9

    cout << "Enter first name, last name, age, "    //Line 10
         << "and weight, separated by spaces."      //Line 11
         << endl;                                   //Line 12

    cin >> firstName >> lastName;                   //Line 13
    cin >> age >> weight;                           //Line 14

    cout << "Name: " << firstName << " "            //Line 15
         << lastName << endl;                       //Line 16

    cout << "Age: " << age << endl;                 //Line 17
    cout << "Weight: " << weight << endl;           //Line 18

    return 0;                                       //Line 19
}                                                   //Line 20
