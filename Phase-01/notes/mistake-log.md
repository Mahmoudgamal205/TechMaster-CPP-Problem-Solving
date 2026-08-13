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
