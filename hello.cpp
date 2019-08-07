#include <iostream> 
using namespace std;

class Calculator
{
private:
    /* data */
public:
    Calculator(/* args */) {}
    ~Calculator() {}
    void PrimeGenerator (int, int);
};

int main(int argc, char const *argv[])
{
cout << "Please enter two numbers: " << endl;
int x, y;
cin >>x>>y;

Calculator c;
c.PrimeGenerator(x, y);

cin.ignore();
cin.get();

return 0;
}

void Calculator::PrimeGenerator(int x, int y)
{
    for (int i = x; i < y; i++)
    {
        bool prime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime==true){
            cout << i << " ";
        }
    }
}