// ⏱️ Time Complexity – Basic Practice Questions

// This repository contains basic practice questions on Time Complexity, solved to build a strong foundation in algorithm analysis.
// The focus is on understanding how code performance scales with input size.

// 📌 What is Time Complexity?

// Time Complexity describes how the execution time of an algorithm grows as the input size increases.

// It is represented using Big-O Notation, which focuses on the worst-case scenario.

// 🔹 Question 1: Constant Time – O(1)
// int x = 10;
// cout << x;

// ✅ Analysis:

// The statement runs only once

// No loop, no condition based on input size

// Time Complexity: O(1)

// 🔹 Question 2: Linear Time – O(n)
// for(int i = 0; i < n; i++) {
//     cout << i;
// }

// ✅ Analysis:

// Loop runs n times

// Execution increases linearly with input

// Time Complexity: O(n)

// 🔹 Question 3: Loop with Constant Work – O(n)
// for(int i = 0; i < n; i++) {
//     cout << "Hello";
// }

// ✅ Analysis:

// Even though "Hello" is constant,

// It is printed n times

// Time Complexity: O(n)

// 🔹 Question 4: Nested Loop – O(n²)
// for(int i = 0; i < n; i++) {
//     for(int j = 0; j < n; j++) {
//         cout << i << j;
//     }
// }

// ✅ Analysis:

// Outer loop runs n times

// Inner loop runs n times for each outer iteration

// Time Complexity: O(n²)

// 🔹 Question 5: Loop with Half Iterations – O(n)
// for(int i = 0; i < n; i += 2) {
//     cout << i;
// }

// ✅ Analysis:

// Loop runs n/2 times

// Constants are ignored in Big-O

// Time Complexity: O(n)

// 🔹 Question 6: Logarithmic Time – O(log n)
// for(int i = 1; i < n; i = i * 2) {
//     cout << i;
// }

// ✅ Analysis:

// Value of i doubles every iteration

// Number of steps ≈ log₂(n)

// Time Complexity: O(log n)

// 🔹 Question 7: Multiple Loops – O(n)
// for(int i = 0; i < n; i++) {
//     cout << i;
// }

// for(int j = 0; j < n; j++) {
//     cout << j;
// }

// ✅ Analysis:

// Two separate loops

// Total operations = n + n = 2n

// Time Complexity: O(n)

// 📘 Key Takeaways

// Constants are ignored in Big-O

// Nested loops multiply complexities

// Sequential loops add, but simplify

// Worst-case scenario is always considered

// 🚀 Purpose of This Repository

// Strengthen DSA fundamentals

// Improve algorithm analysis skills

// Build a strong GitHub profile for placements