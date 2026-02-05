// 1️⃣ Find First and Last Occurrence of an Element
// ✅ Problem

// Given a sorted array, find the first and last index of a target element.

// 💡 Approach

// Use modified Binary Search twice:

// once for first occurrence

// once for last occurrence

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// int firstOccurrence(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target) {
//             ans = mid;
//             high = mid - 1;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int lastOccurrence(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target) {
//             ans = mid;
//             low = mid + 1;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[] = {2, 4, 4, 4, 6, 8, 10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 4;

//     cout << "First Occurrence: " << firstOccurrence(arr, n, target) << endl;
//     cout << "Last Occurrence: " << lastOccurrence(arr, n, target) << endl;

//     return 0;
// }

// ⏱ Complexity

// Time: O(log n)

// Space: O(1)

// 2️⃣ Count Occurrences of an Element
// ✅ Problem

// Count how many times target appears in a sorted array.

// 💡 Approach

// Count = (lastIndex - firstIndex + 1)

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// int firstOccurrence(int arr[], int n, int target) {
//     int low = 0, high = n - 1, ans = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target) {
//             ans = mid;
//             high = mid - 1;
//         } else if (arr[mid] < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return ans;
// }

// int lastOccurrence(int arr[], int n, int target) {
//     int low = 0, high = n - 1, ans = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target) {
//             ans = mid;
//             low = mid + 1;
//         } else if (arr[mid] < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return ans;
// }

// int countOccurrences(int arr[], int n, int target) {
//     int first = firstOccurrence(arr, n, target);
//     int last = lastOccurrence(arr, n, target);

//     if (first == -1) return 0;

//     return last - first + 1;
// }

// int main() {
//     int arr[] = {1, 2, 2, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 2;

//     cout << "Count: " << countOccurrences(arr, n, target) << endl;
//     return 0;
// }

// ⏱ Complexity

// Time: O(log n)

// Space: O(1)

// 3️⃣ Find Floor of a Number
// ✅ Problem

// Find the greatest element ≤ target in a sorted array.

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// int floorValue(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] <= target) {
//             ans = arr[mid];
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[] = {1, 2, 4, 6, 10, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 7;

//     cout << "Floor: " << floorValue(arr, n, target) << endl;
//     return 0;
// }

// ⏱ Complexity

// Time: O(log n)

// Space: O(1)

// 4️⃣ Find Ceil of a Number
// ✅ Problem

// Find the smallest element ≥ target in a sorted array.

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// int ceilValue(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] >= target) {
//             ans = arr[mid];
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[] = {1, 2, 4, 6, 10, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 7;

//     cout << "Ceil: " << ceilValue(arr, n, target) << endl;
//     return 0;
// }

// ⏱ Complexity

// Time: O(log n)

// Space: O(1)

// 5️⃣ Find Peak Element
// ✅ Problem

// Find a peak element index such that it is greater than its neighbors.

// 💡 Approach

// Binary Search using slope concept.

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// int peakElement(int arr[], int n) {
//     int low = 0, high = n - 1;

//     while (low < high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] < arr[mid + 1])
//             low = mid + 1;
//         else
//             high = mid;
//     }
//     return low;
// }

// int main() {
//     int arr[] = {1, 3, 20, 4, 1, 0};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int idx = peakElement(arr, n);
//     cout << "Peak Element Index: " << idx << endl;
//     cout << "Peak Element Value: " << arr[idx] << endl;

//     return 0;
// }

// ⏱ Complexity

// Time: O(log n)

// Space: O(1)

// 6️⃣ Search in Rotated Sorted Array
// ✅ Problem

// Sorted rotated array me target element search karo.

// 💡 Approach

// Identify which half is sorted

// Move search accordingly

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// int searchRotated(int arr[], int n, int target) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target)
//             return mid;

//         // Left part sorted
//         if (arr[low] <= arr[mid]) {
//             if (target >= arr[low] && target < arr[mid])
//                 high = mid - 1;
//             else
//                 low = mid + 1;
//         }
//         // Right part sorted
//         else {
//             if (target > arr[mid] && target <= arr[high])
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {6, 7, 8, 9, 1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 2;

//     cout << "Target Index: " << searchRotated(arr, n, target) << endl;
//     return 0;
// }

// ⏱ Complexity

// Time: O(log n)

// Space: O(1)

// 7️⃣ Find Minimum Element in Rotated Sorted Array
// ✅ Problem

// Rotated sorted array me minimum element find karo.

// 💻 Code (C++)
// #include <iostream>
// using namespace std;

// int findMin(int arr[], int n) {
//     int low = 0, high = n - 1;

//     while (low < high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] > arr[high])
//             low = mid + 1;
//         else
//             high = mid;
//     }
//     return arr[low];
// }

// int main() {
//     int arr[] = {5, 6, 7, 1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Minimum Element: " << findMin(arr, n) << endl;
//     return 0;
// }

