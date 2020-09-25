#include <iostream>
#include <iomanip>
int main()
{
  char word[32];
  std::cout<<"Please enter a word (maximum 32 characters): ";
  std::cin>> std::setw ( sizeof word ) >> word;
  std::cout<<"The integer values for this word are:\n";
  for ( int x = 0; word[x] != '\0'; x++ ) {
    std::cout<< word[x] <<" = "<< int ( word[x] ) <<'\n';
  }
}
