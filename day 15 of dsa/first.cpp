// Exp::01 ::Print Sorted array ? Input : {1, 0, 2, 1, 0} Output : {0, 0, 1, 1, 2}
// #include <iostream>
//                                                                 using namespace std;
// int main()
// {
//     int arr[5] = {1, 0, 2, 1, 0};
//     int count_zero = 0, count_one = 0, count_two = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == 0)
//             count_zero++;
//         else if (arr[i] == 1)
//             count_one++;
//         else
//             count_two++;
//     }
//     for (int i = 0; i < count_one; i++)
//         arr[i] = 0;
//     for (int i = count_one; i < count_zero + count_one; i++)
//         arr[i] = 1;
//     for (int i = count_zero + count_one; i < 5; i++)
//         arr[i] = 2;
//     for (int i = 0; i < 5; i++)
//         cout << arr[i] << " ";
//     return 0;
// };

// WEEK :: 02 DAY : 05 DATE : - 28-04-2023

// SORTING ALGORITHM (Selection, Bubble, Insertion)


// #Sorting in order:
// 8 6 7 2 4

// Ascending Order:
// 2 4 6 7 8

// Descending Order:
// 8 7 6 4 2

// We can easily find any item/numbers using the sorting Algorithm.
// Arrange Ascending Order : Selection Sort

// Input :: { 2, 7, 8, 3, 5, 1}; Output :: {1, 2, 3, 5, 7, 8};

// Explain :
// 2 7 8 3 5 1
// Index 0 1 2 3 4 5
// Round 1 0 1 7 8 3 5 2 Check 0-5
// Round 2 1 1 2 8 3 5 7 Check 1-5
// Round 3 2 1 2 3 8 5 7 Check 2-5
// Round 4 3 1 2 3 5 8 7 Check 3-5
// Round 5 4 1 2 3 5 7 8 Check 4-5

// Swap::
// Exchange 4 1
// index 0 4
// Int temp = arr[4]
// arr[4] = arr[0]
// arr[0] = temp;
// Code::
// #include <iostream>
// using namespace std ;
// int main ()
// {
// int arr[ 6 ] = { 2 , 7 , 8 , 3 , 5 , 1 };
// for ( int i = 0 ; i < 6 ; i ++ )
// {
// int index = i;
// for ( int j = i; j < 6 ; j ++ )
// {
// if (arr[j] < arr[index])
// index = j;
// }
// int temp = arr[index];
// arr[index] = arr[i];
// arr[i] = temp;
// cout << arr[i] << " " ;
// }
// return