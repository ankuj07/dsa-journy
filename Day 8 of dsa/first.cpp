// // Decimal to binary changing code with logic
// // using while loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;
//     int sum = 0;
//     int mul = 1;

//     while (num > 0)
//     { // jb tak zero na ho jaae tab tak chalega
//         int rem = num % 2;  // yaha remainder
//         sum = sum + (rem * mul); // isse binary ka bit mil gya hai yaha par
//         num = num / 2;  // yaha devide kar rha hai
//         mul = mul * 10;  // dusre no. pr switch hone ke liye 10 se multiply
//     }

//     cout << sum;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     // changing decimal to binary no. using while loop
//     int num;
//     cin >> num;

//     int sum = 0;
//     int mul = 1;

//     while (num > 0)
//     {
//         int rem = num % 2;
//         sum = sum + (rem * mul);
//         num = num / 2;
//         mul = mul * 10;
//     }

//     cout << sum;

//     return 0;
// }

// ab binary se decimal ka dekhate hai

// #include <iostream>
// using namespace std;

// int main()
// {
//     // converting binary to decimal same logic rahega bs 2 se multiply karna padega

//     int num;
//     cin>>num;

//     int sum = 0;
//     int mul = 1;

//     while(num>0){

//         int rem = num%2;
//         sum = sum + (rem * mul);
//         mul = mul*2;
//         num = num/10;

//     }

//     cout<<sum;
//     return 0;
// }

// scope - matlab content kha kha access ho sakata hai

// Break & Continue

// #include <iostream>
// using namespace std;

// int main()
// {

//     // lets see break;

//     for(int i=0; i<=20; i++){
//         if(i==6)
//         break;  yani bs 5 tak hi chalega
//         cout<<i<<" ";
//         cout<<endl;
//     }
//     cout<<"hello ji .....";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // lets see break;

//     for(int i=0; i<=20; i++){
//         if(i==6)
//         continue;;
//         cout<<i<<" ";
//         cout<<endl;
//     }
//     cout<<"hello ji .....";

//     return 0;
// }

// lets goes to function ki taraf

// #include <iostream>
// using namespace std;

// int IsEvenOdd(int num)   // function declaration + definition
// {
//     if (num % 2 == 0)
//     {
//         cout << "no. is even";
//     }
//     else
//     {
//         cout << "no. is odd";
//     }

//     return 0;   // return type int tha, so return kara diya
// }

// int main()
// {
//     int num;
//     cin >> num;

//     IsEvenOdd(num);   // function ko value pass kiya

//     return 0;
// }
