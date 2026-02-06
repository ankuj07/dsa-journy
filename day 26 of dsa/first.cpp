// Two Pointer Technique (Started Learning)
// 📌 Introduction

// Today I started learning the Two Pointer Technique, which is one of the most important problem-solving patterns in DSA.

// Two Pointer technique is mainly used in:

// Arrays

// Strings

// Linked List

// Sorted data problems

// It helps to reduce the time complexity from O(n²) to O(n) in many cases.

// 🧠 What is Two Pointer Technique?

// Two Pointer ka meaning hai:
// 👉 hum array/string me 2 pointers use karte hain (mostly left and right)
// aur un pointers ko move karke problem solve karte hain.

// Common Pointer Types:

// ✅ left pointer start se
// ✅ right pointer end se

// 📌 Types of Two Pointer Approach
// 1️⃣ Opposite Direction (Left - Right)

// left pointer start se

// right pointer end se

// dono ek dusre ki taraf move karte hain

// 📌 Mostly used in:

// Pair Sum problems

// Reverse string/array

// Palindrome check

// 2️⃣ Same Direction (Slow - Fast Pointer)

// dono pointer start se hi chalte hain

// ek slow aur ek fast move karta hai

// 📌 Mostly used in:

// Remove duplicates

// Move zeros

// Sliding type problems

// 🔥 Example 1: Check Palindrome (String)
// ✅ Problem

// Given a string, check whether it is palindrome or not.

// 💻 C++ Code
// #include <iostream>
// using namespace std;

// bool isPalindrome(string s) {
//     int left = 0;
//     int right = s.length() - 1;

//     while (left < right) {
//         if (s[left] != s[right])
//             return false;

//         left++;
//         right--;
//     }
//     return true;
// }

// int main() {
//     string s = "madam";

//     if (isPalindrome(s))
//         cout << "Palindrome" << endl;
//     else
//         cout << "Not Palindrome" << endl;

//     return 0;
// }

// ⏱ Complexity

// Time: O(n)

// Space: O(1)

// 🔥 Example 2: Two Sum in Sorted Array
// ✅ Problem

// Given a sorted array, find if there exists a pair with sum equal to target.

// 💻 C++ Code
// #include <iostream>
// using namespace std;

// bool twoSumSorted(int arr[], int n, int target) {
//     int left = 0;
//     int right = n - 1;

//     while (left < right) {
//         int sum = arr[left] + arr[right];

//         if (sum == target)
//             return true;
//         else if (sum < target)
//             left++;
//         else
//             right--;
//     }

//     return false;
// }

// int main() {
//     int arr[] = {1, 2, 4, 7, 11, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 15;

//     if (twoSumSorted(arr, n, target))
//         cout << "Pair Found" << endl;
//     else
//         cout << "Pair Not Found" << endl;

//     return 0;
// }

// ⏱ Complexity

// Time: O(n)

// Space: O(1)

// 🔥 Example 3: Reverse an Array
// ✅ Problem

// Reverse an array using Two Pointer approach.

// 💻 C++ Code
// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int n) {
//     int left = 0;
//     int right = n - 1;

//     while (left < right) {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     reverseArray(arr, n);

//     cout << "Reversed Array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// ⏱ Complexity

// Time: O(n)

// Space: O(1)

// 📝 Key Learnings

// ✔ Two Pointer technique improves efficiency
// ✔ Mostly works best in sorted arrays
// ✔ Helps solve many interview questions in O(n)
// ✔ Easy to implement and very powerful concept

// ⏱ Time & Space Complexity Summary
// Technique	Time	Space
// Two Pointer	O(n)	O(1)
// 🚀 Conclusion

// Two Pointer technique is a very important pattern in DSA.
// It is widely used in coding interviews and competitive programming.

// Next, I will solve more problems like:

// Remove Duplicates

// Move Zeros

// Container With Most Water

// 3 Sum

// Sliding Window + Two Pointer mix