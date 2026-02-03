// 🔍 Binary Search – Questions with Answers (C++)
// 1️⃣ Find an Element in a Sorted Array
// ❓ Question

// Ek sorted array diya gaya hai aur ek target element. Binary Search use karke element ka index find karo.

// ✅ Answer (C++)
// int binarySearch(int arr[], int n, int target) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target)
//             return mid;
//         else if (arr[mid] < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

// 2️⃣ Check Whether an Element Exists or Not
// ❓ Question

// Sirf ye check karo ki element present hai ya nahi.

// ✅ Answer
// bool isPresent(int arr[], int n, int target) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target)
//             return true;
//         else if (arr[mid] < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return false;
// }

// 3️⃣ Find First Occurrence of an Element
// ❓ Question

// Sorted array me element multiple times ho sakta hai. Uska first occurrence find karo.

// ✅ Answer
// int firstOccurrence(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     int ans = -1;

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

// 4️⃣ Find Last Occurrence of an Element
// ❓ Question

// Sorted array me element ka last occurrence find karo.

// ✅ Answer
// int lastOccurrence(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     int ans = -1;

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

// 5️⃣ Count Frequency of an Element
// ❓ Question

// Array me kisi element ki frequency count karo.

// ✅ Answer
// int countFrequency(int arr[], int n, int target) {
//     int first = firstOccurrence(arr, n, target);
//     int last = lastOccurrence(arr, n, target);

//     if (first == -1)
//         return 0;

//     return last - first + 1;
// }

// 6️⃣ Find Floor of a Number
// ❓ Question

// Array me target se chhota ya equal sabse bada element find karo.

// ✅ Answer
// int floorValue(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] <= target) {
//             ans = arr[mid];
//             low = mid + 1;
//         } else
//             high = mid - 1;
//     }
//     return ans;
// }

// 7️⃣ Find Ceil of a Number
// ❓ Question

// Array me target se bada ya equal sabse chhota element find karo.

// ✅ Answer
// int ceilValue(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] >= target) {
//             ans = arr[mid];
//             high = mid - 1;
//         } else
//             low = mid + 1;
//     }
//     return ans;
// }

// 8️⃣ Find Number of Rotations (Sorted Rotated Array)
// ❓ Question

// Sorted rotated array me array kitni baar rotate hua hai find karo.

// ✅ Answer
// int findRotationCount(int arr[], int n) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         if (arr[low] <= arr[high])
//             return low;

//         int mid = low + (high - low) / 2;
//         int next = (mid + 1) % n;
//         int prev = (mid + n - 1) % n;

//         if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
//             return mid;
//         else if (arr[mid] <= arr[high])
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return 0;
// }

// 9️⃣ Find Peak Element
// ❓ Question

// Array me ek peak element find karo (jo apne neighbors se bada ho).

// ✅ Answer
// int findPeakElement(int arr[], int n) {
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