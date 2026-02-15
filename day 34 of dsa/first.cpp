📌 2D Array Theory – Learning Update

Today I studied the theory of 2D Arrays in DSA and focused on understanding how matrices work in programming.

2D Arrays are very important because they are widely used in problems related to:

Matrices

Grid based problems

Image processing

Graph traversal (as grids)

✅ What I Learned Today
🔹 1. What is a 2D Array?

A 2D Array is a collection of elements arranged in rows and columns.

Example:

1  2  3
4  5  6
7  8  9

🔹 2. Row and Column Concept

Row → horizontal line

Column → vertical line
Each element is accessed using:

arr[row][col]

🔹 3. Traversing a 2D Array

2D arrays are traversed using nested loops.

Example:

for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
        cout << arr[i][j] << " ";
    }
}

🔹 4. How 2D Arrays are Stored in Memory

In C/C++, a 2D array is stored in row-major order.

That means:

First complete row is stored

Then second row

Then third row

Example:

arr[0][0] arr[0][1] arr[0][2] arr[1][0] arr[1][1] ...

🔹 5. Common Operations in 2D Arrays

Input & output in matrix form

Row-wise traversal

Column-wise traversal

Sum of rows / columns

Diagonal traversal

⏱ Time & Space Complexity

Traversing a 2D array takes:
Time Complexity: O(rows * cols)

Space Complexity depends on matrix size:
Space Complexity: O(rows * cols)

🎯 Conclusion

Today’s learning helped me understand the basics of 2D Arrays and how to work with matrix-style problems.
Next, I will solve more easy and medium questions based on 2D arrays.
