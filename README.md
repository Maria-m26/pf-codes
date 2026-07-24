# Programming Fundamentals — C++ Practice Programs

Ye repository/assignment **Programming Fundamentals** course ke 20 chote C++ programs par based hai. Har program `if / else if / else` conditions, comparison operators, aur basic input/output (cin/cout) practice karwata hai.

## Requirements
- Any C++ compiler (Code::Blocks, Dev-C++, or g++)
- `#include<iostream>` aur `using namespace std;`

## Programs List

| # | File | Description |
|---|------|-------------|
| 1 | program1.cpp | `y` input le kar check karta hai ke `y == 10`, us hisab se `x` ki value 0 ya 1 set karta hai aur print karta hai |
| 2 | program2.cpp | Temperature input le kar check karta hai ke -50 se 150 ke darmiyan hai (valid range) |
| 3 | program3.cpp | Do numbers `a, b` compare kar ke larger aur smaller value print karta hai |
| 4 | program4.cpp | Floating point comparison (`a = a + 0.2`) ke through dikhata hai ke `a` ya `b` larger hai |
| 5 | program5.cpp | Division by zero check — agar denominator 0 na ho to result print karta hai, warna error message |
| 6 | program6.cpp | Logical operators (`&&`, `||`, `!`) ke multiple boolean expressions ka result (A–E) print karta hai |
| 7 | program7.cpp | Teen race runners ke time (`r1, r2, r3`) compare kar ke 1st position decide karta hai |
| 8 | program8.cpp | Menu-based area calculator — Circle, Rectangle, ya Triangle ka area nikalta hai |
| 9 | program9.cpp | Character input le kar us ki ASCII value print karta hai |
| 10 | program10.cpp | Mass se weight calculate karta hai (`weight = mass * 9.8`) aur "Too heavy"/"Too light" check karta hai |
| 11 | program11.cpp | Sales amount par bonus formula apply karta hai agar sales > 50000 ho |
| 12 | program12.cpp | Income aur years of experience check kar ke "Qualified" / "Not Qualified" decide karta hai |
| 13 | program13.cpp | Month × Day == Year check kar ke "Magic Date" verify karta hai |
| 14 | program14.cpp | Sales bonus calculation (program11 jaisa) |
| 15 | program15.cpp | Sales ke hisab se commission rate (10%, 15%, 20%) calculate karta hai |
| 16 | program16.cpp | Bank checks ki tadaad aur balance ke hisab se fee calculate karta hai |
| 17 | program17.cpp | Menu choice ke mutabiq product price print karta hai (249/199/49) |
| 18 | program18.cpp | Membership plan choice aur months ke hisab se total cost nikalta hai |
| 19 | program19.cpp | Internet package aur GB usage ke hisab se total bill calculate karta hai |
| 20 | program20.cpp | Seconds ko days/hours/minutes mein convert karta hai |

## Concepts Covered
- `if`, `else if`, `else` statements
- Relational operators (`==`, `>`, `<`, `>=`, `<=`, `!=`)
- Logical operators (`&&`, `||`, `!`)
- Nested conditions
- Basic arithmetic aur type casting (`(float)`, `(int)`)
- Menu-driven programs using `cin >> choice`

## How to Run
1. Har `.cpp` file ko apne compiler (Code::Blocks / Dev-C++) mein open karein
2. Compile & Run karein
3. Jab program input maange, required value type karein (jaise number ya character)
4. Output console mein dikh jayega

## Author
Maria — Software Engineering, Superior University, Lahore

# Programming Fundamentals – Assignment 03 (Part 2)

**Name:** Maria
**Roll No:** 029
**Section:** BSSEM-2A

Six more C++ programs covering arrays, strings, and functions.

## Programs

### 1. Find 2nd Lowest and 2nd Highest
Finds the second lowest and second highest values in an array of student scores.
- `calculate2Low(int arr[], int size)` and `calculate2High(int arr[], int size)`
- Tracks lowest/second-lowest (and highest/second-highest) while looping, skipping duplicates of the current lowest/highest
- Example: for scores `40, 70, 20, 90, 60` → 2nd Lowest = 40, 2nd Highest = 70

### 2. Calculate Sum of Array
Reads scores into an array and computes their total using a function.
- `calculateSum(int arr[], int size)` accumulates the sum and returns it as a `double`
- Output formatted with `setprecision(2)`

### 3. Celsius to Fahrenheit Converter
Converts a temperature from Celsius to Fahrenheit.
- `celsiusToFahrenheit(double c)` applies the formula `(c * 9.0/5.0) + 32`
- Example: 25°C → 77.0°F

### 4. Leap Year Checker
Checks whether a given year is a leap year.
- `isLeapYear(int year)` uses the standard rule: divisible by 400, or divisible by 4 but not by 100
- Returns `true`/`false` (prints as `1`/`0`)

### 5. Count Vowels in a Word
Counts the number of vowels (uppercase and lowercase) in a word.
- `countVowels(char word[])` loops through the char array until `'\0'`, checking against a, e, i, o, u (both cases)
- Example: "PAKISTAN" → 3 vowels

### 6. Sort 5 Letters (Bubble Sort)
Takes 5 characters as input and sorts them alphabetically.
- Uses nested `for` loops (classic bubble sort) to compare and swap adjacent characters
- Example: input `d a c e b` → sorted output `a b c d e`

## Tech & Concepts Used
- Functions with array parameters
- Nested loops and comparison logic
- Character arrays and manual string traversal
- Bubble sort algorithm
- `setprecision` for formatted output

## How to Run
1. Copy any program's code into a `.cpp` file.
2. Compile:
   ```
   g++ program.cpp -o program
   ```
3. Run:
   ```
   ./program
   ```

## Author
Maria — Software Engineering, Superior University, Lahore


# Programming Fundamentals – Assignment 03 (Part 3)

**Name:** Maria
**Roll No:** 029
**Section:** 2A

Six programs covering arrays, 2D arrays, and fill-in-the-blank logic exercises.

## Programs

### 1. Count Even and Odd Numbers in Array
Counts how many even and odd numbers exist in a user-entered array.
- `countEvenNumbers(int arr[], int size)` and `countOddNumbers(int arr[], int size)`
- Each loops through the array checking `arr[i] % 2 == 0` or `!= 0`
- Example: `10, 7, 9, 7, 5` → 1 even, 4 odd

### 2. 2D Array Seating Chart
Takes a Rows × Columns grid of seat numbers and displays it back as a seating chart.
- Uses a 2D array `arr[R][C]`
- Nested loops fill the array with input, then print it in grid format
- Example: 2×3 grid with values 101–106 prints as a 2-row seating chart

### 3. Fill in the Blank — While Loop (likely GCD/Euclidean-style logic)
**Statement:** `while(________)`
**Answer:** `while(b != 0)`
Tests understanding of loop continuation conditions where a variable `b` is repeatedly updated until it reaches zero (typical of the Euclidean algorithm for GCD).

### 4. Calculate Cricket Strike Rate
Computes a batsman's strike rate from runs and balls faced.
- `calculateStrikeRate(int runs, int balls)` returns `((double)runs / balls) * 100`
- Example: 80 runs off 40 balls → Strike Rate: 200

### 5. Fill in the Blank — For Loop Condition (char array traversal)
**Statement:** `for(int i=0; ________; i++)`
**Answer:** `for(int i=0; arr[i] != '\0'; i++)`
Tests understanding of how to traverse a character array/string until the null terminator.

### 6. Fill in the Blank — Copy Array/String Element
**Statement:** `________;`
**Answer:** `dest[i] = src[i];`
Tests understanding of copying elements from a source array to a destination array (typical of a custom string/array copy function).

## Tech & Concepts Used
- Functions with array parameters
- 2D arrays and nested loops
- Loop conditions (`while`, `for`) and their role in array/string traversal
- Null-terminated character arrays
- Basic array copying logic

## How to Run
1. Copy any full program's code into a `.cpp` file.
2. Compile:
   ```
   g++ program.cpp -o program
   ```
3. Run:
   ```
   ./program
   ```

## Author
Maria— Software Engineering, Superior University, Lahore


# Programming Fundamentals — Assignment 4

**Name:*Maria
**Section:** 2A
**Roll No:** 029
**Subject:** Programming Fundamentals

This assignment contains 6 C++ programs covering **2D arrays, function overloading, pass-by-reference, and character array manipulation**.

---

## Program 1 — Sum of 2D Array Elements

Takes the number of rows and columns from the user, fills a 2D array, and calculates the sum of all its elements.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[20][20];
    int sum = 0;

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements = " << sum;

    return 0;
}
```

**Sample Output:**
```
Enter rows and columns: 2 3
Enter array elements:
20 30 40 50 60 70
Sum of all elements = 270
```

---

## Program 2 — Sum of 2D Array Excluding First Element

Same as Program 1, but this time `arr[0][0]` is skipped and every other element is **subtracted** from it (using the first element as a starting base and excluding it from the subtraction loop).

```cpp
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[20][20];

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int result = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (!(i == 0 && j == 0))
            {
                result = result - arr[i][j];
            }
        }
    }

    cout << "Final Result = " << result;

    return 0;
}
```

**Sample Output:**
```
Enter rows and columns: 2 2
Enter array elements:
20 5 3 2
Final Result = 10
```

---

## Program 3 — Function Overloading: Area of Square & Rectangle

Demonstrates **function overloading** — two functions share the name `calculateArea` but differ in the number of parameters (1 parameter = square, 2 parameters = rectangle).

```cpp
#include <iostream>
using namespace std;

double calculateArea(double side)
{
    return side * side;
}

double calculateArea(double length, double width)
{
    return length * width;
}

int main()
{
    double side, length, width;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    cout << "Area of Square: " << calculateArea(side) << endl;
    cout << "Area of Rectangle: " << calculateArea(length, width);

    return 0;
}
```

**Sample Output:**
```
Enter side of square: 5
Enter length and width of rectangle: 8 4
Area of Square: 25
Area of Rectangle: 32
```

---

## Program 4 — Bowling Average (Cricket)

Calculates a bowler's average (runs conceded / wickets taken), with a check to avoid **division by zero** if no wickets were taken.

```cpp
#include <iostream>
using namespace std;

double getBowlingAverage(int runsConceded, int wicketsTaken)
{
    if (wicketsTaken == 0)
    {
        return 0.0;
    }

    return (double)runsConceded / wicketsTaken;
}

int main()
{
    int runs, wickets;

    cout << "Enter runs conceded and wickets taken: ";
    cin >> runs >> wickets;

    cout << "Bowling Average: " << getBowlingAverage(runs, wickets);

    return 0;
}
```

**Sample Output:**
```
Enter runs conceded and wickets taken: 120 4
Bowling Average: 30
```

---

## Program 5 — Print a Word Vertically

Takes a word (character array) and its size, then prints each character on a new line using a function that takes the array **by reference** (arrays are always passed by reference in C++).

```cpp
#include <iostream>
using namespace std;

void printVertical(char word[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << word[i] << endl;
    }
}

int main()
{
    char word[20];
    int size;

    cout << "Enter a word: ";
    cin >> word;

    cout << "Enter size of word: ";
    cin >> size;

    cout << "Vertical Word:" << endl;
    printVertical(word, size);

    return 0;
}
```

**Sample Output:**
```
Enter a word: hello
Enter size of word: 5
Vertical Word:
h
e
l
l
o
```

---

## Program 6 — Reverse a Word

Reverses a character array **in place** using the classic two-pointer swap technique (swapping characters from both ends moving toward the middle), and automatically finds the word's length using the null terminator `'\0'`.

```cpp
#include <iostream>
using namespace std;

void reverseWord(char word[], int size)
{
    char temp;

    for (int i = 0; i < size / 2; i++)
    {
        temp = word[i];
        word[i] = word[size - 1 - i];
        word[size - 1 - i] = temp;
    }
}

int main()
{
    char word[20];
    int size = 0;

    cout << "Enter a word: ";
    cin >> word;

    while (word[size] != '\0')
    {
        size++;
    }

    reverseWord(word, size);

    cout << "Reversed Word: " << word;

    return 0;
}
```

**Sample Output:**
```
Enter a word: HELLO
Reversed Word: OLLEH
```

---

## Concepts Covered

| Program | Main Concept |
|---|---|
| 1 | 2D Arrays, Nested Loops |
| 2 | 2D Arrays, Conditional Skipping of an Element |
| 3 | Function Overloading |
| 4 | Functions, Division-by-Zero Handling |
| 5 | Character Arrays, Pass-by-Reference (Arrays) |
| 6 | Character Arrays, In-Place Reversal, Null Terminator |

## How to Compile & Run

Each program can be compiled individually using g++:

```bash
g++ program1.cpp -o program1
./program1
```

(Replace `program1.cpp` with the relevant program file name.)


