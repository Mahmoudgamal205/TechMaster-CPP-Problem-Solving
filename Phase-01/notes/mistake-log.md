<!-- ///////////////////////////////////////Problem 2 ////////////////////////// -->

1. Problem Name
   A. Watermelon

2. Link
   https://codeforces.com/problemset/problem/4/A

3. Initial Approach
   The number is even -> YES
   or
   The number is odd -> NO

4. Mistake
   The mistake: Not every even number works.

   We must divide w into two parts:
   The first part is even and positive.
   The second part is even and positive.

5. Breaking Test Case

   Input: 2

   if we divide it : 1+1

   But 1 is an odd number

   Therefore :
   Output =ON

6. Correct Approach
   1. Even
   2. Greater than 2

   Therefore:
   if(w % 2 == 1 || w == 2)
   No
   Else
   Yes

7. Complexity
   Time Complexity :O(1)
   Space Complexity :O(1)

8. What I Learned
   It's not enough for a number to be even.
   I need to review the edge cases.
   2 is an even number ,but it cannot be divide into two even and
   positive parts.

   Therefore the correct condition is :
   w % 2 == 1 || w == 2
   ==================================================================================
   <!-- ///////////////////////////////////////Problem 2 ////////////////////////// -->

9. Problem Name
   A. way Too long words

10. Link
    https://codeforces.com/problemset/problem/71/A

11. Initial Approach

- Get first char.
- Get last chat.
- Calculate the number of characters between them.
- if the word lenght is greater than 10,
  print frist char and number and last char/
- Otherwise print the word .

4.  Mistake
    The solution had a Compilation Error.
    The compiler said:
    expected '}' at end of input
    I forgot to close one of the opened blocks
    with a closing curly brace }.
    I need to make sure every { has a matching }.

5.  Breaking test Case

    intput :
    4
    word
    localization
    internationalization
    pneumonoultramicroscopicsilicovolcanoconiosis

6.  Correct Approach

    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
    int n;
    cin >> n;

        string word;

        for (int i = 0; i < n; i++)
        {
            cin >> word;

            char first = word[0];
            char last = word[word.length() - 1];
            int number = word.length() - 2;

            if (word.length() > 10)
            {
                cout << first << number << last << endl;
            }
            else
            {
                cout << word << endl;
            }
        }

        return 0;

    }

7.  Complexity
    Time Complexity: O(n × L)
    Space Complexity: O(L)

    Where:
    n = number of words
    L = length of the word

8.  What I Learned

I learned that every opening { must have
a matching closing }.

I also learned to check the compiler error
before thinking about the problem logic.

Compilation Error means the program cannot
compile, so I should fix the syntax first.

==================================================================================

<!-- /////////////////////////////////////////Problem 3 ////////////////////// -->

A. Team

1. Problem Name
   A. Team

2. Link
   https://codeforces.com/problemset/problem/231/A

3. Initial Approach
   I stored the answers of the three friends for each problem
   in a 2D array.

Then I calculated the sum of the three answers.

If the sum is greater than or equal to 2,
I increased the count.

Finally, I printed the count.

4. Mistake
   There is no logical mistake in the solution.

The condition:
sum >= 2

is correct because the problem should be solved
when at least two friends are sure about the solution.

5. Breaking Test Case
   No breaking test case.

The solution works correctly for the given requirements.

Example:

Input:
3
1 1 0
1 1 1
1 0 0

Expected Output:
2

The program counts:

- First problem → 2 → count = 1
- Second problem → 3 → count = 2
- Third problem → 1 → ignore

Final answer:
2

6. Correct Approach
   For every problem:

1. Read the three values.
1. Calculate their sum.
1. If sum >= 2, increase count.
1. Print count.

1. Complexity
   Time Complexity: O(n)

Space Complexity: O(n)

8. What I Learned
   I learned that I can solve the problem by counting
   how many friends are sure about the solution.

If at least two friends are sure:
sum >= 2

# Then the problem should be counted.

<!-- /////////////////////////////////////////Problem 4 ////////////////////// -->

1. Problem Name

D - Bit++

2. Link

https://vjudge.net/contest/827826#problem/D

3. Initial Approach

Read n operations.

For each operation, check if it is "++X" or "X++" → increment x.

Otherwise (it must be "--X" or "X--") → decrement x.

Print the final value of x.

4. Mistake

No logical mistake in the solution.

Since each operation is guaranteed to be one of the four forms
(++X, X++, --X, X--), checking only for the increment forms
and treating everything else as a decrement is safe and correct.

5. Breaking Test Case

Input:
1
--X

The operation doesn't match "++X" or "X++",
so it falls into the else branch → x--.

Output = -1

6. Correct Approach

1. Read n.
1. For each of the n operations, read the operation string.
1. If it contains "++", increment x. Otherwise, decrement x.
1. Print x.

#include <iostream>
using namespace std;
int main()
{
int x = 0;
int n;
cin >> n;
for (int i = 0; i < n; i++)
{
string operation;
cin >> operation;
if (operation == "++X" || operation == "X++")
{
x++;
}
else
{
x--;
}
}
cout << x;
}

7. Complexity
   Time Complexity: O(n)
   Space Complexity: O(1)

8. What I Learned

When there are only a limited number of possible input forms
and you already know two of them, you don't need to explicitly
check every remaining form — you can group them all under a
single else branch as long as the input is guaranteed valid.

Note: this code reads into a std::string, so #include <string>
should be added alongside <iostream> for it to compile safely.
==================================================================================

   <!-- ///////////////////////////////////////Problem 5 ////////////////////////// -->

1. Problem Name

A. Domino Piling

2. Link

https://vjudge.net/problem/CodeForces-50A

3. Initial Approach

Read the board dimensions N and M.

Each domino covers exactly 2 cells, so the maximum number
of dominoes that fit on the board is:

(N \* M) / 2

4. Mistake

No logical mistake in the solution.

Since N and M are integers, integer division (N \* M) / 2
automatically floors the result, which is exactly what's needed
when the total number of cells is odd (one cell is left uncovered).

5. Breaking Test Case

Input:
3 3

Total cells = 9 (odd)

sum = (3 \* 3) / 2 = 9 / 2 = 4 (integer division floors 4.5 to 4)

Output = 4

6. Correct Approach

1. Read N and M.
1. Compute (N \* M) / 2 using integer division.
1. Print the result.

#include <iostream>
using namespace std;

int main()
{
int N,M;
cin >>N>>M;
int sum= (N\*M)/2;
cout << sum;
}

7. Complexity
   Time Complexity: O(1)
   Space Complexity: O(1)

8. What I Learned

When tiling a board with 1x2 dominoes, the maximum number
of dominoes always equals floor(N \* M / 2), because each
domino covers 2 cells and at most one cell can be left over
when the total is odd.

Integer division in C++ already floors positive numbers,
so no extra rounding logic is needed.
==================================================================================

   <!-- ///////////////////////////////////////Problem 6 ////////////////////////// -->
   <!-- ///////////////////////////////////////Problem 6 ////////////////////////// -->

1. Problem Name

B. Taxi

2. Link

https://codeforces.com/problemset/problem/158/B

3. Initial Approach

I tried to put each group into the current taxi according to the input order.

I used:

Taxi = 4

to represent the available space in the taxi.

If the group fits:

Taxi -= group;

Otherwise, I open a new taxi.

4. Mistake

The mistake: I assumed that I could process the groups in the same order as the input.

But this does not always give the minimum number of taxis.

The groups can be arranged in a different order.

Also, I initially tried to use:

group

instead of:

group[i]

when I was using an array.

5. Breaking Test Case

Input:

8
2 3 4 4 2 1 3 1

If I process the groups in the input order, I may get an incorrect number of taxis.

But we can arrange them as:

4
4
3 + 1
3 + 1
2 + 2

Therefore:

Output = 5 6. Correct Approach

Count how many groups have each size:

one → groups of 1
two → groups of 2
three → groups of 3
four → groups of 4

Then combine them optimally:

4 → 1 taxi
3 + 1 → 1 taxi
2 + 2 → 1 taxi
2 + 1 + 1 → 1 taxi
1 + 1 + 1 + 1 → 1 taxi

Therefore, the solution processes the groups from the largest size to the smallest size.

7. Complexity
   Time Complexity: O(n)
   Space Complexity: O(1)

Because we only use four counters:

one, two, three, four 8. What I Learned

It's not enough to process the input in its original order.

I need to think about how to arrange the groups optimally to get the minimum number of taxis.

The important combinations are:

3 + 1 = 4
2 + 2 = 4
2 + 1 + 1 = 4
1 + 1 + 1 + 1 = 4

code is :
#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;

int one = 0, two = 0, three = 0, four = 0;

for (int i = 0; i < n; i++)
{
int group;
cin >> group;

    if (group == 1)
      one++;
    else if (group == 2)
      two++;
    else if (group == 3)
      three++;
    else
      four++;

}

int taxi = four;

taxi += three;
one -= three;

taxi += two / 2;

if (two % 2)
{
taxi++;
one -= 2;
}

if (one > 0)
taxi += (one + 3) / 4;

cout << taxi;
}

````

```markdown
<!-- ///////////////////////////////////////Problem 7 ////////////////////////// -->
1. Problem Name

A. Beautiful Matrix

2. Link

https://codeforces.com/problemset/problem/263/A

3. Initial Approach

Read the 5x5 matrix.

Loop over every cell, and when the cell containing 1 is found,
calculate how many moves it takes to bring it to the center cell (2,2)
using the Manhattan distance:

abs(i - 2) + abs(j - 2)

4. Mistake

No logical mistake in the solution.

The matrix is always 5x5, and the problem guarantees
exactly one cell contains 1, so the center is always at
index (2,2) (0-based indexing).

5. Breaking Test Case

Input:
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

The 1 is at position (1,4).

Distance = abs(1-2) + abs(4-2) = 1 + 2 = 3

Output = 3

6. Correct Approach

1. Read the 5x5 matrix.
2. Loop through every cell.
3. When Matrex[i][j] == 1, compute abs(i - 2) + abs(j - 2).
4. Print the result.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

  int Matrex[5][5];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> Matrex[i][j];
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (Matrex[i][j] == 1)
      {
        cout << abs(i - 2) + abs(j - 2);
      }
    }
  }
}

7. Complexity
Time Complexity: O(1) (matrix size is fixed at 5x5)
Space Complexity: O(1)

8. What I Learned

When a problem asks for the minimum number of moves to reach
a fixed target cell on a grid (moving one step at a time,
up/down/left/right), the answer is simply the Manhattan distance:

abs(row - targetRow) + abs(col - targetCol)

No need for BFS or simulation since moves are unrestricted
by obstacles.
````

```markdown
<!-- ///////////////////////////////////////Problem 8 ////////////////////////// -->

1. Problem Name

A. Way Too Long Words? No — Comparing Strings (Codeforces 112A)

2. Link

https://codeforces.com/problemset/problem/112/A

3. Initial Approach

Read the two strings.

Convert every character in both strings to lowercase,
so the comparison is case-insensitive.

Compare the two lowercase strings lexicographically:

- if String_1 > String_2 → print 1
- if String_1 < String_2 → print -1
- if they are equal → print 0

4. Mistake

No logical mistake in the solution.

Since std::string already supports lexicographical comparison
with >, <, and == operators, no manual character-by-character
comparison loop was needed.

5. Breaking Test Case

Input:
Codeforces
CodEforces

After converting both to lowercase, they become identical
("codeforces" == "codeforces").

Output = 0

6. Correct Approach

1. Read String_1 and String_2.
1. Convert every character of both strings to lowercase using tolower.
1. Compare the two strings directly with >, <, ==.
1. Print 1, -1, or 0 accordingly.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{

string String_1;
string String_2;
cin >> String_1;
cin >> String_2;
for (int i = 0; i < String_1.length(); i++)
{
String_1[i] = tolower(String_1[i]);
}

for (int j = 0; j < String_2.length(); j++)
{
String_2[j] = tolower(String_2[j]);
}

if (String_1 > String_2)
{
cout << "1";
}
else if (String_1 < String_2)
{
cout << "-1";
}
else if (String_1 == String_2)
{
cout << "0";
}
}

7. Complexity
   Time Complexity: O(L1 + L2)
   Space Complexity: O(1)

Where:
L1 = length of String_1
L2 = length of String_2

8. What I Learned

When comparing strings case-insensitively, converting both
strings to the same case (lowercase) first makes the built-in
comparison operators (>, <, ==) work correctly out of the box,
since they compare character codes directly and 'A' != 'a'
without normalization.
```

```markdown
<!-- ///////////////////////////////////////Problem 9 ////////////////////////// -->

1. Problem Name

A. Helpful Maths

2. Link

https://codeforces.com/problemset/problem/339/A

3. Initial Approach

Read the string, which contains only the digits 1, 2, 3
and '+' characters.

Count how many times each digit (1, 2, 3) appears in the string.

Print the digits back out in non-decreasing order, separated by '+',
using the counted amounts.

4. Mistake

No logical mistake in the solution.

The problem guarantees the string only ever contains the digits
1, 2 and 3, so counting only these three digits is sufficient
and correct — no other digits can appear.

5. Breaking Test Case

Input:
3+2+1

count_1 = 1, count_2 = 1, count_3 = 1

Output = 1+2+3

6. Correct Approach

1. Read the string.
1. Count occurrences of '1', '2', and '3'.
1. Print count_1 copies of '1' separated by '+'.
1. Print count_2 copies of '2' separated by '+'.
1. Print count_3 copies of '3', with '+' between them but not after the last one.

#include <iostream>
using namespace std;

int main()
{
string add;
cin >> add;

int count_1 = 0;
int count_2 = 0;
int count_3 = 0;

for (int i = 0; i < add.length(); i++)
{
if (add[i] == '1')
{
count_1++;
}
else if (add[i] == '2')
{
count_2++;
}
else if (add[i] == '3')
{
count_3++;
}
}

for (int i = 0; i < count_1; i++)
{
cout << '1';
cout << '+';
}

for (int i = 0; i < count_2; i++)
{
cout << '2';
if (i == count_2 - 1)
{
cout << '+';
}
}

for (int i = 0; i < count_3; i++)
{
cout << '3';
if (i != count_3 - 1)
{
cout << '+';
}
}
}

7. Complexity
   Time Complexity: O(n)
   Space Complexity: O(1)

8. What I Learned

When the output must be sorted but the values are restricted to a small,
known set (here just 1, 2, 3), counting occurrences and reprinting them
in order is much simpler and faster than actually sorting the string.

Also, care is needed with where the separator '+' is placed: it must
go between digits, not after the very last one — the middle loop
(count_2) only adds '+' after the LAST '2', which works here only because
it relies on there being more digits (3s) following; this is a fragile
pattern and should be replaced with a general "add '+' unless this is the
overall last character" rule to avoid trailing/missing '+' bugs.
```

```markdown
<!-- ///////////////////////////////////////Problem 10 ////////////////////////// -->

1. Problem Name

A. Stones on the Table

2. Link

https://codeforces.com/problemset/problem/266/A

3. Initial Approach

Read n and the string of letters (each letter represents a stone's color).

Count how many adjacent pairs of stones have the same color,
since each such pair means one stone must be removed.

4. Mistake

No logical mistake in the solution.

Comparing each character to the one directly before it and counting
matches correctly gives the minimum number of stones to remove so
that no two adjacent stones share the same color.

5. Breaking Test Case

Input:
5
AABBB

Comparisons: A-A (match), A-B (no), B-B (match), B-B (match)

count = 3

Output = 3

6. Correct Approach

1. Read n and the string.
1. Loop from i = 1 to n-1, comparing leter[i] to leter[i-1].
1. If equal, increment count.
1. Print count.

#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
string leter;
cin >> leter;
int count = 0;

for (int i = 1; i < n; i++)
{

    if (leter[i] == leter[i - 1])

      count++;

}
cout << count;
}

7. Complexity
   Time Complexity: O(n)
   Space Complexity: O(1)

8. What I Learned

When counting consecutive matches in a sequence, start the loop at
index 1 (not 0) so you always have a valid "previous" element to
compare against — this avoids an out-of-bounds access at leter[-1].
```

```markdown
<!-- ///////////////////////////////////////Problem 11 ////////////////////////// -->

1. Problem Name

A. Soldier and Bananas

2. Link

https://codeforces.com/problemset/problem/546/A

3. Initial Approach

The soldier pays k dollars for the 1st banana, 2k for the 2nd, ...,
and i\*k for the i-th banana, up to w bananas.

The total cost is k _ (1 + 2 + ... + w) = k _ w \* (w+1) / 2.

If he has n dollars, the amount he needs to borrow is total - n,
or 0 if he already has enough.

4. Mistake

No logical mistake in the solution.

Using the arithmetic series formula w\*(w+1)/2 instead of a loop
correctly and efficiently computes the total cost.

5. Breaking Test Case

Input:
3 17 4

total = 3 _ 4 _ 5 / 2 = 30

borrow = 30 - 17 = 13

Since n (17) < total (30), output = 13

6. Correct Approach

1. Read k, n, w.
1. Compute total = k _ w _ (w+1) / 2.
1. If n >= total, print 0.
1. Otherwise, print total - n.

#include <iostream>
using namespace std;

int main()
{
int k, n, w;
cin >> k >> n >> w;

int total = k _ w _ (w + 1) / 2;
int borrow = total - n;
cout << (n >= total ? 0 : abs(borrow));
}

7. Complexity
   Time Complexity: O(1)
   Space Complexity: O(1)

8. What I Learned

When a cost grows linearly with each step (1k, 2k, 3k, ...), the total
over w steps is a arithmetic series and can be computed directly with
k _ w _ (w+1) / 2 instead of looping — much faster and avoids overflow
risk from unnecessary iteration.
```

```markdown
<!-- ///////////////////////////////////////Problem 12 ////////////////////////// -->

1. Problem Name

A. Bear and Big Brother

2. Link

https://codeforces.com/problemset/problem/791/A

3. Initial Approach

Start with Limak's weight a and Bob's weight b (a <= b).

Each year, triple a and double b.

Count the years until a becomes strictly greater than b.

4. Mistake

No logical mistake in the solution.

Since a starts smaller than or equal to b but grows faster (x3 vs x2),
simulating year by year until a > b correctly finds the answer, and
the loop is guaranteed to terminate.

5. Breaking Test Case

Input:
4 7

Year 1: a=12, b=14 (12 <= 14, continue)
Year 2: a=36, b=28 (36 > 28, stop)

Output = 2

6. Correct Approach

1. Read a and b.
1. While a <= b: multiply a by 3, multiply b by 2, increment years.
1. Print years.

#include <iostream>
using namespace std;

int main()
{
int years = 0;
int a, b;
cin >> a >> b;
while (a <= b)
{
a _= 3;
b _= 2;
years++;
}
cout << years;
}

7. Complexity
   Time Complexity: O(log(b/a)) (very few iterations since a grows exponentially faster)
   Space Complexity: O(1)

8. What I Learned

When one quantity grows at a faster exponential rate than another,
direct simulation (a simple while loop) converges very quickly and
is often simpler and just as efficient as deriving a closed-form formula.
```

```markdown
<!-- ///////////////////////////////////////Problem 13 ////////////////////////// -->

1. Problem Name

A. Wrong Subtraction

2. Link

https://codeforces.com/problemset/problem/977/A

3. Initial Approach

Tanya subtracts 1 from n a total of k times, but incorrectly:
if the last digit of n is non-zero, she decreases n by 1;
if the last digit is zero, she divides n by 10 (removes the last digit).

Simulate this process k times and print the final value of n.

4. Mistake

No logical mistake in the solution.

Checking n % 10 != 0 to decide between decrementing and dividing by 10
correctly implements Tanya's (wrong) subtraction algorithm exactly as
described.

5. Breaking Test Case

Input:
512 4

512 -> 511 -> 510 -> 51 -> 50

Output = 50

6. Correct Approach

1. Read n and k.
1. Repeat k times: if n's last digit isn't 0, subtract 1; otherwise divide n by 10.
1. Print the final n.

#include <iostream>
using namespace std;

int main()
{
int n, k;
cin >> n >> k;
for (int i = 0; i < k; i++)
{
if (n % 10 != 0)
{
n--;
}
else
{
n /= 10;
}
}
cout << n;
}

7. Complexity
   Time Complexity: O(k)
   Space Complexity: O(1)

8. What I Learned

When a problem describes a step-by-step (possibly "wrong" or unusual)
algorithm, the safest approach is to simulate it literally exactly as
stated, rather than trying to find a shortcut — the described process
IS the correct answer, even if it doesn't match normal subtraction.
```

```markdown
<!-- ///////////////////////////////////////Problem 14 ////////////////////////// -->

1. Problem Name

Ceiling Division by 5 (exact Codeforces problem number not confirmed)

2. Link

Not confirmed — let me know the problem link/name if you have it and I'll fill this in.

3. Initial Approach

Given n, divide it into groups of 5 (constant x = 5).

If n divides evenly by 5, the answer is simply n / 5.

Otherwise, one extra partially-filled group is needed, so the answer
is n / 5 + 1 (ceiling division).

4. Mistake

No logical mistake in the solution.

The ternary condition (n % 5 == 0) ? (n / x) : (n / x + 1) correctly
implements ceiling division without needing floating-point math.

5. Breaking Test Case

Input:
n = 7

7 % 5 != 0, so answer = 7/5 + 1 = 1 + 1 = 2

Output = 2

6. Correct Approach

1. Read n.
1. If n is divisible by 5, print n/5.
1. Otherwise, print n/5 + 1.

#include <iostream>
using namespace std;
int main()
{
int x = 5, n;
cin >> n;

cout << (n % 5 == 0 ? (n / x) : (n / x + 1));
}

7. Complexity
   Time Complexity: O(1)
   Space Complexity: O(1)

8. What I Learned

Ceiling division by a constant can be done cleanly with a modulo check
instead of using ceil() with floating-point numbers, which avoids
precision issues entirely.
```

```markdown
<!-- ///////////////////////////////////////Problem 15 ////////////////////////// -->

1. Problem Name

B. Anton and Danik

2. Link

https://codeforces.com/problemset/problem/734/A

3. Initial Approach

Read n fights, represented as a string of 'A' (Anton wins) and
'D' (Danik wins) characters.

Count how many fights each boy won.

Whoever has more wins is the overall winner; if equal, print "Friendship".

4. Mistake

No logical mistake in the solution.

Counting 'A' and 'D' occurrences and comparing the two totals directly
gives the correct result for all three cases (Anton wins, Danik wins, tie).

5. Breaking Test Case

Input:
6
ADAAAD

A count = 4, D count = 2

Output = Anton

6. Correct Approach

1. Read n and the string x.
1. Count occurrences of 'A' and 'D'.
1. If A > D print "Anton"; if A < D print "Danik"; else print "Friendship".

#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
string x;
cin >> x;
int A = 0;
int D = 0;
for (int i = 0; i < n; i++)
{
if (x[i] == 'A')
{
A++;
}
else
{
D++;
}
}
if (A > D)
{
cout << "Anton";
}
else if (A < D)
{
cout << "Danik";
}
else if (A == D)
{
cout << "Friendship";
}
}

7. Complexity
   Time Complexity: O(n)
   Space Complexity: O(1)

8. What I Learned

When a string only contains two possible characters, counting one of
them (here 'A') is enough — the count of the other can be inferred as
(n - A), though counting both explicitly (as done here) is also fine
and arguably clearer to read.
```

```markdown
<!-- ///////////////////////////////////////Problem 16 ////////////////////////// -->

1. Problem Name

Count Distinct Consecutive Entries (exact Codeforces problem number not confirmed)

2. Link

Not confirmed — let me know the problem link/name if you have it and I'll fill this in.

3. Initial Approach

Read o strings into an array n[].

Loop through the array and count how many entries differ from the
previous entry.

4. Mistake

The loop starts at i = 0 and compares n[i] to n[i - 1].

When i = 0, this accesses n[-1], which is out of bounds and reads
undefined/garbage memory. This can cause an incorrect extra count
on the very first comparison, or undefined behavior/crashes.

5. Breaking Test Case

Input:
3
apple
apple
banana

At i = 0, the code compares n[0] ("apple") to n[-1] (garbage memory),
which is almost never equal, so x is incorrectly incremented for the
first element even though there's nothing valid to compare it to.

Expected correct output (comparing only from i = 1 onward) = 1
(only "banana" differs from the one before it)

But the actual output may be 2, because of the invalid n[-1] access.

6. Correct Approach

1. Read o and the array of strings.
1. Loop from i = 1 to o - 1 (not i = 0), comparing n[i] to n[i-1].
1. If different, increment x.
1. Print x.

#include <iostream>
using namespace std;

int main()
{
int o;
cin >> o;
string n[o];
for (int i = 0; i < o; i++)
{
cin >> n[i];
}

int x = 0;
for (int i = 1; i < o; i++) // fixed: start from i = 1, not i = 0
{
if (n[i] != n[i - 1])
{
x++;
}
}
cout << x;
}

7. Complexity
   Time Complexity: O(n) (string comparisons dominate, each up to O(L))
   Space Complexity: O(n)

8. What I Learned

When comparing each element to "the previous one" in an array, always
start the loop at index 1, not 0 — index 0 has no valid previous
element, and reading arr[-1] is undefined behavior in C++ (unlike some
other languages where negative indices wrap around).
```

```markdown
<!-- ///////////////////////////////////////Problem 17 ////////////////////////// -->

1. Problem Name

Palindrome Pair Check (exact Codeforces problem number not confirmed)

2. Link

Not confirmed — let me know the problem link/name if you have it and I'll fill this in.

3. Initial Approach

Read two strings, name_1 and name.

Reverse the second string (name) using the <algorithm> reverse function.

Compare the reversed string to name_1: if they match, print "YES",
otherwise print "NO".

4. Mistake

No logical mistake in the solution.

Using std::reverse to reverse name in place and then comparing it to
name_1 correctly checks whether name_1 is the reverse of name.

5. Breaking Test Case

Input:
name_1 = "code"
name = "edoc"

Reversing "edoc" gives "code", which equals name_1.

Output = YES

6. Correct Approach

1. Read name_1 and name.
1. Reverse name using std::reverse.
1. Compare name_1 to the reversed name; print YES if equal, NO otherwise.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
string name_1;
cin >> name_1;
string name;
cin >> name;
reverse(name.begin(), name.end());
string name_2 = name;
cout << (name_1 == name_2 ? "YES" : "NO");
}

7. Complexity
   Time Complexity: O(L) where L is the string length (reverse + comparison)
   Space Complexity: O(L) (extra copy in name_2)

8. What I Learned

std::reverse() from <algorithm> reverses a string in place efficiently,
making "is string A the reverse of string B" checks a simple one-liner
instead of a manual index-swapping loop.
```

```markdown
<!-- ///////////////////////////////////////Problem 18 ////////////////////////// -->

1. Problem Name

A. Word

2. Link

https://codeforces.com/problemset/problem/59/A

3. Initial Approach

Read a word and count how many letters are uppercase vs lowercase.

If uppercase letters outnumber lowercase ones, convert the whole word
to uppercase; otherwise (including a tie), convert it to lowercase.

4. Mistake

No logical mistake in the solution.

Using isupper() to classify each character and comparing the two
counts correctly decides which case to convert the whole word to,
and defaulting to lowercase on a tie matches the problem's requirement.

5. Breaking Test Case

Input:
HoUse

Uppercase count = 2 ('H', 'U'), lowercase count = 3 ('o', 's', 'e')

Since lowercase count is greater, convert everything to lowercase.

Output = house

6. Correct Approach

1. Read the word.
1. Count uppercase and lowercase letters using isupper()/else.
1. If uppercase count > lowercase count, convert all chars to uppercase.
1. Otherwise, convert all chars to lowercase.
1. Print the result.

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
string name;
cin >> name;
int Cip = 0;
int Smil = 0;

for (int i = 0; i < name.size(); i++)
{
if (isupper(name[i]))
{
Cip++;
}
else
{
Smil++;
}
}

if (Cip > Smil)
{
for (int i = 0; i < name.size(); i++)
{
name[i] = toupper(name[i]);
}
}
else
{
for (int i = 0; i < name.size(); i++)
{
name[i] = tolower(name[i]);
}
}
cout << name;
}

7. Complexity
   Time Complexity: O(L) where L is the word length
   Space Complexity: O(1) (modifies the string in place)

8. What I Learned

isupper() and toupper()/tolower() from <cctype> make case-classification
and case-conversion straightforward per character; when a tie needs a
default behavior (like "equal counts -> lowercase"), using else instead
of a separate == check keeps the logic simple and covers that case
automatically.
```
