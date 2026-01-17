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

// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=0; i<=5; i++){
//         for(int j=5; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// };

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// #include <iostream>
// using namespace std;

// int main()
// {
//     int counter = 1;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << counter<<" ";
//             counter++;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//  *
//  **
//  ***
//  ****
//  *****

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << '*' << " ";
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

// #include<iostream>
// using namespace std;

// int main(){
//     int counter = 1;

//     for(int i=0; i<=5; i++){
//         for(int j=0; j<=6-i; j++){
//             cout<<counter<<" ";
//             counter++;

//         }
//         cout<<endl;
//     }

//     return 0;
// }

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 1 2 3 4 5
//   2 3 4 5
//     3 4 5
//       4 5
//         5

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         // for space
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << " ";
//         }
//         // for numbers
//         for (int j = 1; j <= 5 - i + 1; j++)
//             cout << j<<" ";
//              cout << endl;
//     }

//     return 0;
// }

//      *
//    * * *
//   * * * * *
// * * * * * * *

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 4; i++)
//     {
//         // for space
//         for (int j = 1; j <= 4 - i; j++)
//         {
//             cout << " ";
//         }

//         // print no.
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }

//     return 0;
// }

//     *
//     * *
//    * * *
//   * * * *
//  * * * * *

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        // for space

        for (int j = 1; j <= 5 - i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
           
        }
         cout<<endl;
    }

    return 0;
}
