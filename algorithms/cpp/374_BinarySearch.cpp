/* 374. Guess Number Higher or Lower
We are playing the Guess Game. The game is as follows:
I pick a number from 1 to n. You have to guess which number I picked.
Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.
You call a pre-defined API int guess(int num), which returns three possible results:
-1: Your guess is higher than the number I picked (i.e. num > pick).
1: Your guess is lower than the number I picked (i.e. num < pick).
0: your guess is equal to the number I picked (i.e. num == pick).
Return the number that I picked.

Example 1:
Input: n = 10, pick = 6
Output: 6

Example 2:
Input: n = 1, pick = 1
Output: 1

Example 3:
Input: n = 2, pick = 1
Output: 1

Constraints:
1 <= n <= 2^31 - 1
1 <= pick <= n */

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lowerbound = 1;
        int upperbound = n;
        int curVal = lowerbound + (upperbound - lowerbound) / 2;
        int isCorrect = guess(curVal);
        while(isCorrect != 0) {
            if(isCorrect == -1) {
                upperbound = curVal - 1;
            }
            else {
                lowerbound = curVal + 1;
            }
            curVal = lowerbound + (upperbound - lowerbound) / 2;
            isCorrect = guess(curVal);
        }
        return curVal;
    }
};