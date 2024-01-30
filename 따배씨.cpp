// #include <iostream>

// int main(void)
// {
//     int x = 2;
//     x = 5;
//     int y = x + 3;

//     std::cout << 1 + 2 << std::endl;

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     int x = 123; // initialization
//     //int x(123); 이렇게 해도 됨

//     x = 5; // assignment

//     // int x ;
//     // x = 123 x에 123을 대입 저장 할당
//     // = assignment operator

//     //int x;
//     //x = x + 2;
//     //왼쪽은 객체, 오른쪽 x는 그냥 x에 할당된 상수 값을 나타냄 그것이 바로 r value
//     //중요한 개념

//     std::cout << x << std:: endl;
//     std::cout << &x << std:: endl;
//     //&x -> x가 메모리에서 갖는 주소

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     int x = 1;
//     x= x + 2;
//     std::cout << x << std::endl; // 3

//     int y = x;
//     std::cout << y << std::endl; // 1 틀림 3

//     //is (x+y) l value or r value ? r value
//     std::cout << x + y << std::endl; // 2 틀림 6

//     std:: cout << x << std :: endl; // 1 틀림 3

//     int z;
//     std::cout << z << std::endl; //0 원래 안나옴 틀림 32767? 이게바로 garbage

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     using namespace std;

//     int x = 1;

//     cout << "원래 입력은 " << x << endl;

//     cin >> x;

//     cout << "입력 " << x << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int multiplyTwonumbers(int num_a, int num_b)
// {
//     int sum = num_a * num_b;

//     return sum;
// }

// int main()
// {
//     cout <<multiplyTwonumbers(1,2) << endl;
//     cout <<multiplyTwonumbers(3,4) << endl;
//     cout <<multiplyTwonumbers(8,13) << endl;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// void printhelloworld()
// {
//     cout << "helloworld" << endl;

//     return; //main으로 돌아감

//     cout << "helloworld 2" << endl;

// }

// int main()
// {
//     printhelloworld();

//     return 0;
// }

// #include <iostream>

// using namespace std;

// void print ()
// {
//     cout << "hello" << endl;
// }

// void addTwoNumbers(int a, int b)
// {
//     // return a + b;
//     print();
// }

// int main()
// {
//     // int sum = addTwoNumbers(1, 2);

//     addTwoNumbers (1, 2);

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x = 0; // int x(0);

//     cout << x << " " << &x << endl;

//     // int x = 1;

//     {
//         // int x = 1;
//         x  = 1;

//         cout << x << " " << &x << endl;
//     }
//     cout << x << " " << &x << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// void doSomething(int x)
// {
//     x = 123;
//     cout << "1 " << x << endl; //123
// }

// int main()
// {
//     int x = 0;
//     cout << "2 " << x << endl; //0
//     doSomething(x);
//     cout << "3 " << x << endl; //123

//     return 0;
// }

// //3번만 틀림

// #include <iosteam>

// using namespace std;

// int main()
// {
//     int x = 2; // x is variable, 2 is a literal

//     cout << "Hello, World" << endl; // hello world is literal

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x = -2;

//     int y = (x>0) ? 1 : 2 ;

//     cout << y << endl;

//     return 0;
// }

// #include <iostream>

// namespace Myspace1
// {
//     int doSomething(int a, int b)
//     {
//         return a + b;
//     }

// }

// int doSomething(int a, int b)
// {
//     return a * b;
// }

// using namespace std;

// int main()
// {
//     cout << doSomething(3, 4) << endl;
//     cout << Myspace1::doSomething(3, 4) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define MY_ARTIST "Eve"

// int main()
// {
//     cout << MY_ARTIST << endl;

//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// #define MAX(a, b) (((a>b)) ? (a) : (b))

// int main()
// {
//     // cout << MAX(9, 30) << endl;
//     cout << std::max(9, 39)<< endl;

//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// // #define LIKE_APPLE

// int main()
// {
// #ifdef LIKE_APPLE
//     cout<<"APPLE"<<endl;

// #endif

// #ifndef LIKE_APPLE
//     cout<<"Orange"<<endl;

// #endif


//     return 0;
// }

// #include <iostream>
// #include <bitset>

// int main()
// {
//     using namespace std;

//     int j = 3;
//     int i = 1;
//     int k = 123;
//     char a = 'H';

//     cout << (uintptr_t)static_cast<void*>(&a) << endl;
//     cout << (uintptr_t)static_cast<void*>(&i) << endl;

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     using namespace std;

//     bool bvalue = true;
//     char chvalue = 'A';
//     float fvalue = 3.141592f;
//     double dvalue = 3.141592;

//     // cout << (bvalue ? 1 : 0) << endl;
//     cout << chvalue << endl;
//     cout << bvalue << endl;
//     cout << fvalue << endl;
//     cout << dvalue << endl;

//     auto aValue = 3.141592;

//     cout << sizeof(aValue) << endl;

//     int a = 123; //copy initialization 소수 넣으면 원인만 나오고 컴파일 = casting
//     int a(123); //direct initialization 소수 넣으면 원인만 나오고 컴파일
//     int b{123}; //uniform initialization 소수 넣으면 안돌아감



//     return 0;
// }

// #include <iostream>
// #include <cmath>
// #include <limits>

// int main()
// {
//     using namespace std;

//     short s = 1; // 2bytes = 2*8bits=16bits

//     cout << std::pow(2, sizeof(short)*8-1) -1 << endl;
//     cout << std::numeric_limits<short>::max() << endl;
//     cout << std::numeric_limits<short>::min() << endl;
//     cout << std::numeric_limits<short>::lowest() << endl;

//     s = 32767;
//     s = s + 1;//32768 (++s, s++)

//     cout << s << endl; //overflow

//     // int i = 1;
//     // long l = 1;
//     // long long ll = 1;

//     // cout << sizeof(short) << endl; //2
//     // cout << sizeof(int) << endl; //4
//     // cout << sizeof(long) << endl; //8
//     // cout << sizeof(long long) << endl; //8


//     return 0;

// }

#include <iostream>
#include <cstdint>

int main()
{
    using namespace std;

    std::int16_t i(5);
    std::int8_t myint = 65;

    cout << myint << endl;

    std::int_fast8_t fi(5);
    std::int_least64_t fl(5);

    return 0;
}