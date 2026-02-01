// 🔍 Binary Search (C++ Implementation)
// 📌 Condition

// Binary Search sirf sorted array par kaam karta hai.

// 💻 C++ Code (Iterative Binary Search)
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int target) {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2; // overflow safe

//         if (arr[mid] == target)
//             return mid;          // element found
//         else if (arr[mid] < target)
//             low = mid + 1;       // right half
//         else
//             high = mid - 1;      // left half
//     }

//     return -1; // element not found
// }

// int main() {
//     int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 23;

//     int result = binarySearch(arr, n, target);

//     if (result != -1)
//         cout << "Element found at index: " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     return 0;
// }

// 🧠 Working (Short Explanation)

// Array ke middle element ko check karte hain

// Agar target == mid → element mil gaya

// Agar target > mid → right half me search

// Agar target < mid → left half me search

// Ye process tab tak repeat hota hai jab tak element mil na jaye ya range khatam na ho

// ⏱️ Time & Space Complexity

// Best Case: O(1)

// Average Case: O(log n)

// Worst Case: O(log n)

// Space Complexity: O(1) (Iterative)

// 📂 GitHub README ke liye (Direct Paste)
// ## Binary Search Algorithm

// Binary Search is an efficient searching algorithm that works on sorted arrays.
// It divides the search space into half on each step.

// ### Time Complexity
// - Best Case: O(1)
// - Average Case: O(log n)
// - Worst Case: O(log n)

// ### Space Complexity