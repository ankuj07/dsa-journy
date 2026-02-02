// Binary Search Algorithm (Detailed Guide)
// 📌 Introduction

// Binary Search ek efficient searching algorithm hai jo sirf sorted array par kaam karta hai।
// Isme har step par search space ko aadha (half) kar diya jata hai, isliye ye Linear Search se kaafi fast hota hai।

// ⚠️ Important:
// Binary Search tabhi kaam karega jab data sorted order (ascending ya descending) me ho।

// 🧠 Binary Search ka Idea

// Array ke middle element ko check kiya jata hai

// Agar middle element hi target hai → search complete

// Agar target middle se bada hai → right half me search

// Agar target middle se chhota hai → left half me search

// Ye process tab tak repeat hota hai jab tak element mil na jaye ya range khatam na ho

// 🪜 Step-by-Step Algorithm

// low = 0 aur high = n - 1 set karo

// Jab tak low <= high ho:

// mid = low + (high - low) / 2

// Agar arr[mid] == target → index return karo

// Agar arr[mid] < target → low = mid + 1

// Agar arr[mid] > target → high = mid - 1

// Agar element na mile → -1 return karo

// 💻 C++ Implementation (Iterative)
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int target) {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target)
//             return mid;        // element found
//         else if (arr[mid] < target)
//             low = mid + 1;     // search in right half
//         else
//             high = mid - 1;    // search in left half
//     }

//     return -1; // element not found
// }

// int main() {
//     int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 23;

//     int index = binarySearch(arr, n, target);

//     if (index != -1)
//         cout << "Element found at index: " << index << endl;
//     else
//         cout << "Element not found" << endl;

//     return 0;
// }

// 🧪 Dry Run Example

// Array:
// [2, 5, 8, 12, 16, 23, 38, 56, 72]

// Target: 23

// Step	low	high	mid	arr[mid]	Action
// 1	0	8	4	16	target > 16 → right
// 2	5	8	6	38	target < 38 → left
// 3	5	5	5	23	element found

// ✅ Index = 5

// ⏱️ Time Complexity Analysis

// Best Case: O(1)
// (jab middle element hi target ho)

// Average Case: O(log n)

// Worst Case: O(log n)

// 💾 Space Complexity

// Iterative Binary Search: O(1)

// (Recursive version me O(log n) hota hai due to call stack)

// ✅ Advantages

// Bahut fast searching

// Large datasets ke liye best

// Linear Search se kaafi efficient

// ❌ Limitations

// Data sorted hona chahiye

// Insertion/deletion costly hota hai (arrays me)

// 📌 Important Notes

// Binary Search array, vector, aur sorted list par use hota hai

// Overflow avoid karne ke liye:

// mid = low + (high - low) / 2;


// Interview me aksar:

// First/Last Occurrence

// Lower Bound / Upper Bound

// Binary Search on Answer
// pucha jata hai