// #include <iostream>

// using namespace std;

// int main()
// {
//     int one_student_score; // 1 variable
//     int student_scores[5]; // 5 int

//     one_student_score = 100;

//     student_scores[0] = 100; // 1st element
//     student_scores[1] = 80;
//     student_scores[2] = 90;
//     student_scores[3] = 50;
//     student_scores[4] = 0;
//     student_scores[5] = 30;

//     cout << student_scores[0] << endl;
//     cout << student_scores[1] << endl;
//     cout << student_scores[2] << endl;
//     cout << student_scores[3] << endl;
//     cout << student_scores[4] << endl;
//     cout << student_scores[5] << endl;






//     // cout << sizeof(one_student_score) << endl;
//     // cout << sizeof(student_scores) << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x = 5;

//     cout << x << endl;

//     cout << &x << endl; // & : address of operator
//     // cout << (int)&x << endl;

//     cout << *&x << endl;

 
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int* doSomething(int* ptr_a)
// {
//     return nullptr;
// }

// int main()
// {
//     int x = 5;
//     double d = 1.0;

//     // int * ptr_x;
//     // ptr_x = &x;


//     // typedef int* pint;
//     int * ptr_x = &x, *ptr_y = &x;
//     // pint ptr_x = &x, ptr_y = &x;

//     cout << "x값" << x << endl;
//     cout << "x주소" << &x << endl;
//     cout << "ptr_x" << ptr_x << endl;
//     cout << "ptr_x로 간접 참조" << *ptr_x << endl;

//     return 0;
// }

// #include <iostream>
// #include <typeinfo>

// using namespace std;

// int main()
// {
//     int x = 5;
//     double d = 123.0;

//     int *ptr_x = &x;

//     cout << typeid(ptr_x).name() << endl;

//     return 0;
// }

#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
    int a, b, c, d;
};

int main()
{
    int x = 5;
    double d = 123.0;

    int *ptr_x;
    double *ptr_d;

    cout << *ptr_x << endl;

    // cout << sizeof(x) << endl;
    // cout << sizeof(d) << endl;
    // cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    // cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

    // Something ss;
    // Something *ptr_s;

    // cout << sizeof(Something) << endl;
    // cout << sizeof(ptr_s) << endl;

    return 0;
}
