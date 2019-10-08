#include <iostream>

using namespace std;

int main(void) {


int numEntered;

const int sentinel = 13;

cout << "Please enter a number: " << endl;

cin >> numEntered;



while( numEntered != sentinel ){

cout << " Value entered was " << numEntered << " which was not equal to the sentinel value!" << endl;

cout << " Please enter another number: " << endl;
cin >> numEntered;
if(numEntered == sentinel){
cout << " THe while loop has ended because you entered " << sentinel << "!";
}

}

 return 0;
}
