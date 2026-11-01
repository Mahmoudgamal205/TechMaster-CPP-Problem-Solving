1. Problem Name
   Plus One
2. Link

https://leetcode.com/problems/plus-one/

3. Initial Approach

I initially thought I could just increase the last element by 1:

digits[n - 1]++;

For example:

[1,2,3]

Then:

3 + 1 = 4

So:

[1,2,4]

This works when the last digit is less than 9.

4. Mistake

The mistake:

I cannot always just increase the last digit.

If the last digit is 9:

[1,2,9]

Then:

9 + 1 = 10

I cannot put 10 in one position.

I need to handle the carry and move to the previous digit.

So:

[1,2,9]
↓
9 → 0

Becomes:

[1,2,0]

Then the 1 is added to the previous digit:

2 + 1 = 3

Final result:

[1,3,0] 5. Breaking Test Case
Input:
[1,2,9]

If I only use:

digits[n - 1]++;

I get:

[1,2,10]

❌ Wrong.

Because:

129 + 1 = 130

Correct output:

[1,3,0]
Another Breaking Test Case:
[9,9,9]

All digits are 9.

We get:

9 → 0
9 → 0
9 → 0

So temporarily:

[0,0,0]

But the correct answer is:

[1,0,0,0] 6. Correct Approach
Start from the last digit.
If the digit is less than 9:
Increase it by 1.
Return the vector.
If the digit is 9:
Change it to 0.
Continue to the previous digit.
If all digits were 9:
Add 1 to the beginning of the vector.

The important part is:

if (digits[i] < 9)
{
digits[i]++;
return digits;
}
else
{
digits[i] = 0;
}

And if all digits are 9:

digits.insert(digits.begin(), 1); 7. Complexity

Time Complexity: O(n)

Space Complexity: O(1) extra space.

8. What I Learned

It is not enough to increase the last digit.

I need to think about the carry when the digit is 9.

I also need to test edge cases, especially when:

The last digit is 9.
Multiple digits are 9.
All digits are 9.

Important test cases:

[1,2,3] → [1,2,4]

[1,2,9] → [1,3,0]

[1,9,9] → [2,0,0]

[9,9,9] → [1,0,0,0]
Main Lesson:

When working with numbers represented as arrays/vectors, always think about Carry and Edge Cases.

9. Code
   #include <iostream>
   #include <vector>
   using namespace std;

class Solution
{
public:
vector<int> plusOne(vector<int>& digits)
{
int n = digits.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }

};
