// #include <iostream>
// using namespace std;

// int main()
// {
//     //카운터 선언하고 초기화
//     int counter = 0;
//     //while 반복문
//     while(counter < 10)
//     {
//         cout<< "opium*"<<endl;
//         counter++;
//     }
//     return 0;
// }
 
// #include <studio.h>

// int lager(int first, int second)
// {
//     int temp;
//     if(first>second)
//     {
//         temp = first;
//     }
//     else
//     {
//         temp=second;
//     }
//     return temp;
// }

//정다각형의 둘레와 넓이
//둘레 n * s
//넓이 n * s * s / (4 *tans(π/n))

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //변수 선언
    const double PI = 3.141592653589793238462;
    int n;
    double s, peri, area;
    //변의 개수 입력
    do
    {
        cout << "변의 개수 (4이상) : ";
        cin >> n;
    }while (n<4);
    //변의 길이 입력
    do
    {
        cout << "변의 길이 : ";
        cin >> s;
     
    } while (s<=0.0);
    //둘레 넓이
    peri = n * s;
    area = (n * pow (s, 2)) / (n * tan (PI / n));
    //결과 출력
    cout << "둘레 : " << peri << endl;
    cout << "넓이 : " << area;
    return 0;
}
