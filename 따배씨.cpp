// #include <iostream>

// int main(void)
// {
//     int x = 2;
//     x = 5;
//     int y = x + 3;

//     std::cout << 1 + 2 << std::endl;

//     return 0;
// }

#include <iostream>

int main()
{
    int x = 123; // initialization
    //int x(!23); 이렇게 해도 됨

    x = 5; // assignment


    // int x ;
    // x = 123 x에 123을 대입 저장 할당
    // = assignment operator

    //int x;
    //x = x + 2;
    //왼쪽은 객체, 오른쪽 x는 그냥 x에 할당된 상수 값을 나타냄 그것이 바로 r value
    //중요한 개념
    

    std::cout << x << std:: endl;
    std::cout << &x << std:: endl;
    //&x -> x가 메모리에서 갖는 주소

    return 0;
}

