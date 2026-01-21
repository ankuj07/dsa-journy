

// lets can started lecture 8
// Basic Questions in Array

// Exp::01 :: print Arr reverse ::

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // cout<<arr[0];
    for (int i = 4; i >= 0; i--)
        cout << arr[i] << " ";
    ;

    return 0;
}

// Exp::02 :: Find Largest numbers in Array?

#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {6, 2, 4, 9, 7, 8};
    int largest = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    cout << largest;
    return 0;
};

// Exp::03 :: Find Odd numbers in Array?

// #include <iostream>
// using namespace std ;
// int main ()
// {
// int arr[ 8 ] = { 2 , 5 , 3 , - 3 , 8 , 4 , 2 , - 6 };
// for ( int i = 0 ; i <= 8 ; i ++ )
// {
// if (arr[i] % 2 == 1 || arr[i] % 2 ==- 1 )
// cout << arr[i] << " " ;
// }
// return 0 ;
// };
