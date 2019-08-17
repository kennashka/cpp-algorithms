#include <iostream>
using namespace std;
int main() {

// Allocating 4 memory space for the variables

 double length;
 double width;
 double perimeter;
 double area;


cout << "Program to complete & output the perimeter & " << "area of a rectangle  "<< endl;

length = 6.0;
width = 4.0;
perimeter = 2 * (length + width);
area = length * width;

 cout << "Length = " << length << endl;
 cout << "Width = " << width << endl;
 cout << "Perimeter = " << perimeter << endl;
 cout << "Area = " << area << endl;

  return 0; 
}
