// Exp::06 ::Print Array input : {2, 3, 7, -11, 4} Output : {4, 2, 3, 7, 11}
// #include <iostream>
//                                                          using namespace std;
// int main()
// {
//     int arr[5] = {2, 3, 7, -11, 4};
//     int last_arr = arr[4];
//     for (int i = 3; i >= 0; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[0] = last_arr;
//     for (int i = 0; i < 5; i++)
//         cout << arr[i] << " ";
//     return 0;
// };

// Exp::07 ::Print Array[-No repeat element] input : {2, 4, 6, 4, 2, 8, 6} Output : {8}
// #include <iostream>  using namespace std;

// int main()
// {
//     int arr[7] = {2, 4, 6, 4, 2, 8, 6};
//     int ans = 0;
//     for (int i = 0; i < 7; i++)
//         ans = ans ^ arr[i]; // xor process
//     cout << ans;
//     return 0;

// Exp::08 :: Print smallest number in array?
// #include <iostream>
// using namespace std ;
// int main ()
// {
// int arr[ 8 ] = { 7 , 11 , - 2 , 8 , 170 , - 4 , 0 , 11 };
// int small_N = arr[ 0 ];
// for ( int i = 1 ; i <= 7 ; i ++ )
// {
// if (small_N > arr[i])
// {
// small_N = arr[i];
// }
// }
// cout << small_N;
// return 0 ;
// };