//C++ 14 Digit Separator
 
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int x = 7'087'625;
    long long y = 28'087'523'872'918;
    double z = 47'034'612'982.68'741;

    cout << fixed << showpoint << setprecision(5);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << 1'2'3'4'5'6'7'8'9'0 << endl;
    cout << "8'403 * 3'600 = " << 8'403 * 3'600 << endl;
    
    return 0;
}
