// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {5, 3, 6, 2, 1};
//     for (int i = 0; i < 5 - 1; i++)
//     {
//         for (int j = 0; j < 5 - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     // print Array
//     for (int i = 0; i < 5; i++)
//         cout << arr[i] << " ";
//     return 0;
// };

#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {4, 6, 3, 11, 7, 2};
    for (int i = 0; i < 6 - 1; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else
                break;
        }
    };
    // print array
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
};
GeeksforGeeks