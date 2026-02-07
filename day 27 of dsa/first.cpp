// 🔥 Two Pointer Technique – Solved Questions (C++)

// Today I solved multiple problems using the Two Pointer Technique.
// Two Pointer is a powerful approach used in arrays and strings to optimize brute-force solutions from O(n²) to O(n).

// ✅ 1️⃣ Two Sum in Sorted Array
// 📌 Problem

// Given a sorted array, check if there exists a pair whose sum is equal to target.

// 💡 Approach

// Use left pointer at start and right pointer at end.

// If sum is smaller → move left.

// If sum is greater → move right.

// 💻 Code (C++)
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

//     cout << (twoSumSorted(arr, n, target) ? "Pair Found" : "Pair Not Found");
//     return 0;
// }

// ⏱ Complexity

// Time: O(n)

// Space: O(1)

// ✅ 2️⃣ Reverse an Array
// 📌 Problem

// Reverse an array using Two Pointer technique.

// 💻 Code (C++)
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

// ✅ 3️⃣ Check Palindrome String
// 📌 Problem

// Check if a string is palindrome using Two Pointer technique.

// 💻 Code (C++)
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

//     cout << (isPalindrome(s) ? "Palindrome" : "Not Palindrome");
//     return 0;
// }

// ⏱ Complexity

// Time: O(n)

// Space: O(1)

// ✅ 4️⃣ Remove Duplicates from Sorted Array
// 📌 Problem

// Given a sorted array, remove duplicates and return the count of unique elements.

// 💡 Approach

// i pointer unique element track karega

// j pointer traverse karega

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// int removeDuplicates(int arr[], int n) {
//     int i = 0;

//     for (int j = 1; j < n; j++) {
//         if (arr[j] != arr[i]) {
//             i++;
//             arr[i] = arr[j];
//         }
//     }
//     return i + 1;
// }

// int main() {
//     int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int uniqueCount = removeDuplicates(arr, n);

//     cout << "Unique Elements Count: " << uniqueCount << endl;
//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < uniqueCount; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// ⏱ Complexity

// Time: O(n)

// Space: O(1)

// ✅ 5️⃣ Move All Zeros to End
// 📌 Problem

// Move all zeros to the end of array while maintaining order of non-zero elements.

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// void moveZeros(int arr[], int n) {
//     int j = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }

// int main() {
//     int arr[] = {0, 1, 0, 3, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     moveZeros(arr, n);

//     cout << "After moving zeros: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// ⏱ Complexity

// Time: O(n)

// Space: O(1)