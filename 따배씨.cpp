#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << " " << std::isinf(posinf) << endl; //inf   
    cout << neginf << " " << std::isinf(neginf) << endl; //-inf
    cout << nan << " " << std::isnan(nan) << endl; //-nan(indeterminate)
    cout << 1.0 << " " << std::isnan(1.0) << endl; //-nan(indeterminate)
    



    return 0;
}