✅ String (Basic & Easy) – Questions Solved (C++)

Today I solved basic and easy level String problems to strengthen my fundamentals.
String is an important DSA topic and frequently asked in interviews.

📌 Topics Covered Today

✔ String traversal
✔ Reverse string
✔ Palindrome check
✔ Count vowels & consonants
✔ Count digits and spaces
✔ Convert uppercase to lowercase
✔ Remove spaces from string

🔥 1️⃣ Reverse a String
💻 Code (C++)
#include <iostream>
using namespace std;

void reverseString(string &s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    string s = "ankuj";
    reverseString(s);

    cout << "Reversed String: " << s << endl;
    return 0;
}

⏱ Complexity

Time: O(n)

Space: O(1)

🔥 2️⃣ Check Palindrome
💻 Code (C++)
#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }
    return true;
}

int main() {
    string s = "madam";

    cout << (isPalindrome(s) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}

⏱ Complexity

Time: O(n)

Space: O(1)

🔥 3️⃣ Count Vowels and Consonants
💻 Code (C++)
#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main() {
    string s = "HelloWorld";
    int vowels = 0, consonants = 0;

    for (char ch : s) {
        if (isalpha(ch)) {
            if (isVowel(ch))
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}

⏱ Complexity

Time: O(n)

Space: O(1)

🔥 4️⃣ Count Digits, Spaces and Alphabets
💻 Code (C++)
#include <iostream>
using namespace std;

int main() {
    string s = "Ankuj 123 DSA";
    int alphabets = 0, digits = 0, spaces = 0;

    for (char ch : s) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else if (ch == ' ')
            spaces++;
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}

⏱ Complexity

Time: O(n)

Space: O(1)

🔥 5️⃣ Convert Uppercase to Lowercase
💻 Code (C++)
#include <iostream>
using namespace std;

int main() {
    string s = "ANKUJ MATRE";

    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    cout << "Lowercase String: " << s << endl;
    return 0;
}

⏱ Complexity

Time: O(n)

Space: O(1)

🔥 6️⃣ Remove Spaces from String
💻 Code (C++)
#include <iostream>
using namespace std;

int main() {
    string s = "I love coding";
    string result = "";

    for (char ch : s) {
        if (ch != ' ')
            result += ch;
    }

    cout << "Without Spaces: " << result << endl;
    return 0;
}

⏱ Complexity

Time: O(n)

Space: O(n) (new string)

📌 Key Learnings

✔ Improved string handling skills
✔ Practiced loops and built-in functions
✔ Understood character checking (isalpha, isdigit, tolower)
✔ Strengthened basic string manipulation concepts

⏱ Complexity Summary
Problem	Time	Space
Reverse String	O(n)	O(1)
Palindrome Check	O(n)	O(1)
Count Vowels/Consonants	O(n)	O(1)
Count Digits/Spaces	O(n)	O(1)
Uppercase → Lowercase	O(n)	O(1)
Remove Spaces	O(n)	O(n)
🚀 Conclusion

Today’s practice helped me build a strong foundation in String basics.
Next I will solve more medium-level string problems like:

Anagram Check

Reverse Words in a Sentence

Longest Substring Without Repeating Characters