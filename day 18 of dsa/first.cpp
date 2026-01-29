// 📦 Space Complexity

// Space Complexity is a measure of the amount of extra memory (auxiliary space) required by an algorithm to execute, expressed as a function of the input size n.

// It includes:

// Temporary variables

// Data structures created during execution

// Recursion call stack

// It does not include the memory taken by the input itself.

// 📌 Why Space Complexity is Important

// Understanding space complexity helps to:

// Write memory-efficient algorithms

// Avoid memory overflow issues on large inputs

// Optimize performance in resource-constrained systems

// Compare algorithms beyond just execution time

// In real-world systems (backend services, mobile apps, embedded systems), memory optimization is often as critical as time optimization.

// 🧠 Types of Space Used by an Algorithm
// 1️⃣ Fixed Space

// Memory that does not depend on input size, such as:

// Constants

// Simple variables

// Example: int x, y;

// 2️⃣ Variable Space

// Memory that depends on input size, such as:

// Arrays

// Linked lists

// Hash maps

// Recursion stack

// 📊 Common Space Complexity Classes
// Space Complexity	Meaning	Example
// O(1)	Constant space	Variable swapping
// O(n)	Linear space	Arrays, recursion
// O(n²)	Quadratic space	2D matrices
// O(log n)	Logarithmic space	Recursive binary search
// 🧪 Example: Constant Space
// int findMax(int arr[], int n) {
//     int maxVal = arr[0];  // constant space
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > maxVal)
//             maxVal = arr[i];
//     }
//     return maxVal;
// }


// Space Complexity: O(1)
// (Only a fixed number of variables are used)

// 🧪 Example: Linear Space
// vector<int> copyArray(vector<int>& arr) {
//     vector<int> temp = arr; // extra space proportional to n
//     return temp;
// }


// Space Complexity: O(n)
// (Extra memory grows with input size)

// 🔁 Space Complexity in Recursion

// Recursive algorithms consume memory due to the call stack.

// Example
// int factorial(int n) {
//     if(n == 0) return 1;
//     return n * factorial(n - 1);
// }


// Each recursive call uses stack memory

// Maximum depth = n

// Space Complexity: O(n)

// 🔄 Iterative vs Recursive (Space Perspective)
// Approach	Space Usage
// Iterative	More memory-efficient
// Recursive	Uses call stack memory

// Whenever possible, converting recursion to iteration can reduce space complexity.

// 📝 Key Notes

// Space Complexity focuses on auxiliary memory, not input memory

// Optimizing space often improves scalability

// Always analyze worst-case space complexity

// ✅ Summary

// Space Complexity measures extra memory usage

// Expressed using Big-O notation

// Important for writing scalable and optimized code

// Should always be analyzed along with Time Complexity