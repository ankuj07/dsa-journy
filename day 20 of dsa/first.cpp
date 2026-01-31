// ⏱️ Time & Space Complexity – Practice Questions
// Question 1: Simple Loop
// for(int i = 0; i < n; i++){
//     cout << i;
// }

// ✅ Time Complexity

// Loop n times chalega

// O(n)

// ✅ Space Complexity

// Extra memory use nahi ho rahi

// O(1)

// Question 2: Nested Loop
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//         cout << i << j;
//     }
// }

// ✅ Time Complexity

// Outer loop → n

// Inner loop → n

// Total operations → n × n

// O(n²)

// ✅ Space Complexity

// Sirf variables use ho rahe hain

// O(1)

// Question 3: Loop with Half Iterations
// for(int i = 0; i < n; i += 2){
//     cout << i;
// }

// ✅ Time Complexity

// Loop n/2 times chalega

// Constant ignore karte hain

// O(n)

// ✅ Space Complexity

// O(1)

// Question 4: While Loop with Division
// int i = n;
// while(i > 1){
//     i = i / 2;
// }

// ✅ Time Complexity

// Har iteration me n half ho raha hai

// O(log n)

// ✅ Space Complexity

// O(1)

// Question 5: Two Independent Loops
// for(int i = 0; i < n; i++){
//     cout << i;
// }

// for(int j = 0; j < n; j++){
//     cout << j;
// }

// ✅ Time Complexity

// First loop → n

// Second loop → n

// Total → 2n → O(n)

// ✅ Space Complexity

// O(1)

// Question 6: Loop Inside Log Loop
// for(int i = 0; i < n; i++){
//     int j = 1;
//     while(j < n){
//         j = j * 2;
//     }
// }

// ✅ Time Complexity

// Outer loop → n

// Inner loop → log n

// Total → O(n log n)

// ✅ Space Complexity

// O(1)

// Question 7: Array Creation
// int arr[n];
// for(int i = 0; i < n; i++){
//     arr[i] = i;
// }

// ✅ Time Complexity

// Loop n times

// O(n)

// ✅ Space Complexity

// Array of size n

// O(n)

// Question 8: Recursive Function
// void fun(int n){
//     if(n == 0) return;
//     fun(n - 1);
// }

// ✅ Time Complexity

// Function n times call hota hai

// O(n)

// ✅ Space Complexity

// Recursive call stack n

// O(n)

// Question 9: Binary Search (Iterative)
// while(low <= high){
//     int mid = (low + high) / 2;
//     if(arr[mid] == key) break;
//     else if(arr[mid] < key) low = mid + 1;
//     else high = mid - 1;
// }

// ✅ Time Complexity

// Array har step me half ho rahi hai

// O(log n)

// ✅ Space Complexity

// O(1)

// Question 10: Triple Nested Loop
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//         for(int k = 0; k < n; k++){
//             cout << i << j << k;
//         }
//     }
// }

// ✅ Time Complexity

// n × n × n

// O(n³)

// ✅ Space Complexity

// O(1)

// 📌 Interview Tip (GitHub README ke liye)
// ✔ Always ignore constants  
// ✔ Focus on worst-case complexity  
// ✔ Nested loops → multiply  
// ✔ Sequential loops → add  
// ✔ Recursion → stack space bhi count hota hai