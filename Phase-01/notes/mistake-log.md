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
1. Problem Name 
  A. way Too long words 

2. Link
  https://codeforces.com/problemset/problem/71/A

3. Initial Approach
  - Get first char.
  - Get last  chat.
  - Calculate the number of characters between them.
  - if the word lenght is greater than 10,
  print frist char and number and last char/
  - Otherwise print the word .

4. Mistake 
   The solution had a Compilation Error.
    The compiler said:
    expected '}' at end of input
    I forgot to close one of the opened blocks
    with a closing curly brace }.
    I need to make sure every { has a matching }.
      

5. Breaking test Case 
    
    intput :
        4
        word
        localization
        internationalization
        pneumonoultramicroscopicsilicovolcanoconiosis

6. Correct Approach

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

7. Complexity 
  Time Complexity: O(n × L)
  Space Complexity: O(L)

    Where:
    n = number of words
    L = length of the word

8. What I Learned

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
2. Calculate their sum.
3. If sum >= 2, increase count.
4. Print count.

7. Complexity
Time Complexity: O(n)

Space Complexity: O(n)

8. What I Learned
I learned that I can solve the problem by counting
how many friends are sure about the solution.

If at least two friends are sure:
sum >= 2

Then the problem should be counted.