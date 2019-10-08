#include <iostream>

using namespace std;

int main(void) {


int counter = 1;

while( counter <= 100){

cout << "Current counter value = " << counter << " so loop condition is still true!" << endl;

cout << "Incrementing the counter variable... " << endl;

counter++;

if (counter > 100){
  cout << "The loop has ended because the loop condition is now false!" << endl;
}


}

 return 0;
}
