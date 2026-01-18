// Q1. 1 se 10 tak numbers print karo.
// ✔ Solution
// for i in range(1, 11):
//     print(i)

// Q2. 1 se 20 tak ke even numbers print karo.
// ✔ Solution
// for i in range(1, 21):
//     if i % 2 == 0:
//         print(i)

// Q3. Diye gaye number ka table print karo. (Example: 5)
// ✔ Solution
// num = 5
// for i in range(1, 11):
//     print(num, "x", i, "=", num*i)

// Q4. 1 se 10 tak numbers ka sum find karo.
// ✔ Solution
// total = 0
// for i in range(1, 11):
//     total += i
// print("Sum =", total)

// ✅ WHILE LOOP – Solved Questions
// Q5. 1 se 10 tak numbers print karo (while loop).
// ✔ Solution
// i = 1
// while i <= 10:
//     print(i)
//     i += 1

// Q6. 10 se 1 tak reverse counting print karo.
// ✔ Solution
// i = 10
// while i >= 1:
//     print(i)
//     i -= 1

// Q7. Diye gaye number ke digits count karo. (Example: 5482 → 4 digits)
// ✔ Solution
// num = 5482
// count = 0

// while num > 0:
//     num //= 10
//     count += 1

// print("Digits =", count)

// Q8. Jab tak user 0 na daale, tab tak input lete raho.
// ✔ Solution
// num = int(input("Enter number: "))
// while num != 0:
//     print("You typed:", num)
//     num = int(input("Enter number: "))
// print("Loop end")