#include <iostream>
#include <iomanip>
#include <limits>

int main()
{
    using namespace std;

    double d1(1.0);
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    
    cout << setprecision(17);

    cout << d1 << endl;
    cout << d2 << endl;

    return 0;
}