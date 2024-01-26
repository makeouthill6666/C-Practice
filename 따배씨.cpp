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
//     //int x(!23); 이렇게 해도 됨

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

#include <iostream>

using namespace std;

void doSomething(int x)
{
    x = 123;
    cout << x << endl; //123 
}

int main()
{
    int x = 0;
    cout << x << endl; //0
    doSomething(x);
    cout << x << endl; //123

    return 0;
}

//다 틀림