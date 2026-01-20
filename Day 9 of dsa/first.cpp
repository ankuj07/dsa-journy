// Exp ::01 ::Print “ Odd” and “Even”.

// #include <iostream>
//     using namespace std;
// void IsEvenOdd(int num)
// {
//     if (num % 2 == 0)
//         cout << "Even" << endl;
//     else
//         cout << "Odd" << endl;
//     return;
// }
// int main()
// {
//     int num1, num2, num3;
//     cin >> num1 >> num2 >> num3;
//     IsEvenOdd(num1);
//     IsEvenOdd(num2);
//     IsEvenOdd(num3);
//     return 0;
// };

// Exp ::02 ::Add Two numbers 8 and 4.

// #include <iostream>
//     using namespace std;
// void Add()
// {
//     cout << 8 + 4;
// }
// int main()
// {
//     Add();
//     return 0;
// };

// Exp ::03 ::Add Two numbers take input User ?

// #include <iostream>
// using namespace std;
// int AddTwoNum(int num1, int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int result = AddTwoNum(num1, num2);
//     cout << result;
//     return 0;
// };

// FUNCTION OVERLOADING

// Function overloading or
//  method overloading is the ability to create multiple functions of the same name with different implementations.
// #include <iostream>
//     using namespace std;
// void Add(int num1, int num2)
// {
//     int sum = num1 + num2;
//     cout << sum << " ";
//     return;
// }
// void Add(int num1, int num2, int num3)
// {
//     int sum = num1 + num2 + num3;
//     cout << sum << " ";
//     return;
// }
// int main()
// {
//     Add(20, 30);
// }