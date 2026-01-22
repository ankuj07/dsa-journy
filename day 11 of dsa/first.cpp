// Exp::01 :: Print array 5 times?
// #include <iostream>
// using namespace std ;
// int main ()
// {
// int arr[ 5 ] = { 2 , 3 , 8 , 7 , 4 };
// for ( int i = 0 ; i < 5 ; i ++ )
// {
// for ( int j = 0 ; j < 5 ; j ++ )
// cout << arr[j] << " " ;
// cout << endl ;
// }
// return 0 ;
// };

// Exp::02 :: Print array
// 2 3 8 7 4
// 2 3 8 7
// 2 3 8
// 2 3
// 2
// #include <iostream>
// using namespace std ;
// int main ()
// {
// int arr[ 5 ] = { 2 , 3 , 8 , 7 , 4 };
// for ( int i = 0 ; i < 5 ; i ++ )
// {
// for ( int j = 0 ; j < 5 - i; j ++ )
// cout << arr[j] << " " ;
// cout << endl ;


// Exp::03 :: Print array
// 3 13 12 7 4
// 13 12 7
// 12 7 4
// 7 4
// 4
// #include <iostream>
// using namespace std ;
// int main ()
// {
// int arr[ 5 ] = { 3 , 13 , 12 , 7 , 4 };
// for ( int i = 0 ; i < 5 ; i ++ )
// {
// for ( int j = i; j < 5 ; j ++ )
// cout << arr[j] << " " ;
// cout <<endl ;
// }
// return 0 ;
// }