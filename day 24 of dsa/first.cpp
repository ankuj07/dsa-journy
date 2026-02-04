// 🔁 Binary Search – Revision Notes
// (Time & Space Complexity Focus)
// 📌 What I Revised Today

// Binary Search concept

// Working of algorithm

// Time Complexity

// Space Complexity

// Important interview points

// 🔍 Binary Search (Quick Recap)

// Binary Search ek efficient searching algorithm hai jo sorted array par kaam karta hai.
// Har step par search space ko half kar diya jata hai.

// Working:

// Middle element find karte hain

// Target == mid → element found

// Target > mid → right half me search

// Target < mid → left half me search

// Process repeat hota hai jab tak element mile ya range khatam ho

// ⏱️ Time Complexity (Revised)
// Case	Time Complexity	Reason
// Best Case	O(1)	Middle element hi target ho
// Average Case	O(log n)	Har step me array half hota hai
// Worst Case	O(log n)	Element last step par mile ya na mile

// 📌 Key Point:
// Binary Search har iteration me n → n/2 → n/4 → ... karta hai
// isliye complexity logarithmic hoti hai.

// 💾 Space Complexity (Revised)
// Type	Space Complexity
// Iterative Binary Search	O(1)
// Recursive Binary Search	O(log n) (call stack)

// 📌 Interview me agar space optimize puchha jaye → Iterative approach best

// ⚠️ Important Revision Points

// Binary Search sirf sorted data par kaam karta hai

// mid calculate karte waqt overflow avoid karo

// mid = low + (high - low) / 2;


// First / Last occurrence ke questions me condition change hoti hai

// Binary Search ka use sirf arrays me nahi balki:

// Rotated Array

// Peak Element

// Binary Search on Answer
// me bhi hota hai

// 🧠 When to Use Binary Search

// Data sorted ho

// Large input size ho

// Time efficiency important ho

// 📂 GitHub Commit Message (Optional)
// Revised Binary Search: Time & Space Complexity with key concepts

// 📝 README Short Version (Alternative)
// ✔ Revised Binary Search
// ✔ Time Complexity: O(log n)
// ✔ Space Complexity: O(1) (Iterative)
// ✔ Key interview concepts covered