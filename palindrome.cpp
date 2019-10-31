#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main() {

string rev;
    
string greeting;

    cout << "Enter a string to be reversed: " << endl;
    cin >> rev;


greeting = rev;

reverse(rev.begin(), rev.end());

cout << "The reversed string: " << rev << endl; 
if (rev == greeting ){
cout << greeting << " is a palindrome" << endl;
}
else {
  cout << greeting << " is not a palindrome" << endl;
}



 return 0;

}
