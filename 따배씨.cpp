#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    // char c1(890);
    // char c2('A');
    
    // cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
    // //c style
    // cout << (char)65 << endl;
    // cout << (int)'A' << endl;
    // //c++ style
    // cout << char(65) << endl;
    // cout << int('A') << endl;

//    cin >> c1;
//    cout << c1 << " " << int(c1) << endl;

//    cin >> c1;
//    cout << c1 << " " << int(c1) << endl;

//    cin >> c1;
//    cout << c1 << " " << int(c1) << endl;

//    cin >> c1;
//    cout << c1 << " " << int(c1) << endl;


char c1(65);

cout << sizeof(unsigned char) << endl;
cout << (int)std::numeric_limits<unsigned char>::max() << endl;
cout << (int)std::numeric_limits<unsigned char>::lowest() <<endl;


return 0;
}