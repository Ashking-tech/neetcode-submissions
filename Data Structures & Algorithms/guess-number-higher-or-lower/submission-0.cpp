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

       int l = 1,r = n;
       while(l <= r){
        int gue = l + (r - l) /2;
       int res = guess(gue); 
        if(res == 0){
            return gue;
        }else if(res == -1){
            r = gue - 1;
            
        }else{
            l = gue + 1;
        }
       }
       return -1;
    }
};