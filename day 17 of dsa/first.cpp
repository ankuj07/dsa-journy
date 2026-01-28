// # 📘 Time Complexity (Big-O Notation) – Complete Notes


// Time Complexity बताती है कि किसी algorithm का running time input size **n** के बढ़ने पर कैसे change होता है। इसे analyze करने के लिए हम **Big-O notation** का उपयोग करते हैं।

// ---

// ## 🔹 1. What is Big-O?

// Big-O notation किसी algorithm की **worst-case growth rate** बताता है।  
// यह बताता है कि n बढ़ने पर algorithm कितनी जल्दी slow या fast होता है।

// ---

// ## 🔹 2. Common Time Complexities (Best → Worst)

// | Time Complexity | Name | Example |
// |-----------------|------|---------|
// | **O(1)** | Constant time | Accessing array element |
// | **O(log n)** | Logarithmic | Binary Search |
// | **O(n)** | Linear | Traversing array |
// | **O(n log n)** | Linearithmic | Merge Sort, Quick Sort (avg) |
// | **O(n²)** | Quadratic | Bubble Sort, Nested loops |
// | **O(n³)** | Cubic | 3 nested loops |
// | **O(2ⁿ)** | Exponential | Subset generation |
// | **O(n!)** | Factorial | Permutations |

// ---


// ## 🔹 3. How to Analyze Time Complexity?

// ### ✔️ 3.1 Ignore Constants  
// O(2n) → O(n)
// O(100) → O(1)

// graphql
// Copy code

// ### ✔️ 3.2 Consider Dominant Term  
// O(n² + n) → O(n²)
// O(n³ + n log n) → O(n³)

// scss
// Copy code

// ### ✔️ 3.3 Count Loop Iterations  
// - Single loop → **O(n)**
// - Two nested loops → **O(n²)**

// ```cpp
// for(int i = 0; i < n; i++) {
//     for(int j = 0; j < n; j++) {
//         // O(1)
//     }
// }
// // Total → O(n²)
// 🔹 4. Time Complexity of Common Code Patterns
// ✔️ 4.1 Single Loop → O(n)
// cpp
// Copy code
// for(int i = 0; i < n; i++) {
//     // O(1)
// }
// ✔️ 4.2 Nested Loops → O(n²)
// cpp
// Copy code
// for(int i = 0; i < n; i++) {
//     for(int j = 0; j < n; j++) {}
// }
// ✔️ 4.3 Loop With Half Steps → O(log n)
// cpp
// Copy code
// while(n > 1) {
//     n = n / 2;
// }
// ✔️ 4.4 Multiple Loops (Independent) → Add
// cpp
// Copy code
// for(int i=0; i<n; i++) {}      // O(n)
// for(int j=0; j<n; j++) {}      // O(n)
// // Total = O(n + n) = O(n)
// 🔹 5. Time Complexity of Common Data Structures
// Operation	Array	Vector	Linked List	Stack/Queue	Hash Map
// Access	O(1)	O(1)	O(n)	–	–
// Insert	O(n)	O(n)/O(1)*	O(1)	O(1)	O(1)*
// Delete	O(n)	O(n)	O(1)	O(1)	O(1)*
// * Average case					

// 🔹 6. Time Complexity in Sorting Algorithms
// Algorithm	Best	Average	Worst
// Quick Sort	O(n log n)	O(n log n)	O(n²)
// Merge Sort	O(n log n)	O(n log n)	O(n log n)
// Bubble Sort	O(n)	O(n²)	O(n²)
// Insertion Sort	O(n)	O(n²)	O(n²)
// Selection Sort	O(n²)	O(n²)	O(n²)

// 🔹 7. Space Complexity
// Space Complexity बताती है कि algorithm कितनी extra memory use करता है।

// Examples:

// Array of size n → O(n)

// Recursive function → O(n) (stack memory)

// Merge Sort → O(n) extra space

// Quick Sort → O(log n) (average recursion)

// 🔹 8. Big-O Cheat Sheet (Quick Overview)

// Pattern	Complexities
// Simple loop	O(n)
// Nested loops	O(n²)
// Divide by 2 (Binary search)	O(log n)
// Merge/Quick Sort	O(n log n)
// Generating subsets	O(2ⁿ)
// Permutations	O(n!)