// let practice the patterns

// #include<iostream>
// using namespace std;

// int main(){

//     for(){
//         for(){

//         }
//     }

//     return 0;
// }

// Exp : 10 :: Print Pattern

// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         char c = 'a' + i - 1;
//         for (int j = 1; j <= 5; j++)
//         {
//             cout << c << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// };

// Exp : 11 :: Print Pattern
// a
// b b
// c c c
// d d d d
// e e e e e

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         char c = 'a' + i - 1;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << c << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// };

// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - 1; j++)
        {
            // print space
            cout << " ";
        }
        for (int j = i; j <= 2 * i - 1; j++)
        {
            // print star
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
};

// Advaced level pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    // Total_row = n
    cout << "Enter The row Num: ";
    cin >> n;
    // upper side
    for (int row = 1; row <= n; row++)
    {
        // star
        for (int col = 1; col <= row; col++)
            cout << "*";
        // space
        for (int col = 1; col <= 2 * n - 2 * row; col++)
            cout << " ";
    }
}

// while loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 10;
    int digit = 1;
    for (int i = 1; i > 0; i++) // infinite condition
    {
        if (n / num == 0)
        {
            cout << digit;
            return 0;
        }
        num = num * 10;
        digit++;
    }
    return 0;
};
#