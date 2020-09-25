// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function that returns true 
// if n is prime 
bool isPrime(int n) 
{ 
	if (n == 0 || n == 1) 
		return false; 
	for (int i = 2; i * i <= n; i++) 
		if (n % i == 0) 
			return false; 

	return true; 
} 

// Function to return the sum 
// of the ascii values of the characters 
// which are present at prime positions 
int sumAscii(string str, int n) 
{ 
	// To store the sum 
	int sum = 0; 

	// For every character 
	for (int i = 0; i < n; i++) { 

		// If current position is prime 
		// then add the ASCII value of the 
		// character at the current position 
		if (isPrime(i + 1)) 
			sum += (int)(str[i]); 
	} 

	return sum; 
} 

// Driver code 
int main() 
{ 
	string str = "hello"; 
	int n = str.size(); 

	cout << sumAscii(str, n); 

	return 0; 
} 
