
// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Hello Coder Army";

// return 0;
// }

// code without std::

// #include<iostream>
// using namespace std;

// int main(){
//     int cout=10;
//   cout<<cout;

//     return 0;
// }

// with std

// #include<iostream>

// int main(){
//     int cout=10;
//   std::cout<<cout;

//     return 0;
// }

// Write a program to given character is vowels or not

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "lets can started find vowels and consonent " << endl;
//     ;
//     char c;
//     cin >> c;

//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//     {
//         cout << "vowels";
//     }
//     else
//     {
//         cout << "consonent";
//     }
//     return 0;
// }

// write a program to find whether given year is leap year or not

// #include <iostream>
// using namespace std;

// int main()
// {
//      cout<<"Write the year"<<endl;
//     int Leap_year;
//     cin >> Leap_year;

//     if(Leap_year%400==0 || Leap_year%4==0 && Leap_year%100!=0)

//     cout<<"Congrechulation you are in leap year";

//     else
//     cout<<"This is not leap year";

//         return 0;
// }

// Write a program to given no. is divisible 3 and 5

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "enter the no.";
//     int num;
//     cin >> num;

//     if (num % 3 == 0 && num % 5 == 0)
//         cout << "divisible by both no.";
//     else
//         cout << "Not divisible by both no.";

//     return 0;
// }

// Ab aesa karo ki 20 tak ke kitane no. 3 aur 5 se divisible hai

// #include <iostream>>
// using namespace std;

// int main()
// {
//     cout << "enter the no.";
//     int num;
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         if (i % 3 == 0 && i % 5 == 0)
//         {
//             cout << i<<" ";
//         }
//     }

//     return 0;
// }

// do multiply by taking input from user

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout<<"Enter two no."<<endl;
//     int num1;
//     int num2;
//     cin >> num1;
//     cin >> num2;

//     int mul = num1 * num2;
//     cout <<"Answer is "<<mul;

//     return 0;
// }

// "lets stated the loop"

// print no. from 1 to n
//  #include<iostream>
//  using namespace std;

// int main(){
// int n;
// cin>>n;

// for(int i = 1; i<=n; i++){
//     cout<<i<<" ";
// }

//     return 0;
// }

// print odd no. from 1 to n

// #include<iostream>
// using namespace std;

// int main(){

//     cout<<"enter your no. ";
//     int num;
//     cin>>num;

//     for(int i=1; i<=num; i++){
//         if(i%2==1){
//             cout<<i<<" "<<endl;
//         }
//     }

//     return 0;
// }

// Add first natural no.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;

//     int sum = 0;

//     for (int i = 1; i <= num; i++)
//     {
//         sum = sum + i;
//     }
//     cout << sum;
//     return 0;
// }

#include <iostream>4
using namespace std;

int main()
{
    cout << "Enter your no.";
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i/ 2 == 0)
        {
            cout << "Not A Prime";
        }
        else
        {
            cout << "no. is prime";
        }
    }

    return 0;
}