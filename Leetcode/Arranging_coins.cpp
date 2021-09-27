// For any floor, say i we need 1+2+3+....+i (i.e sum from 1 to i ) coins to fill it completely. We know sum of first i positive integers is i*( i+1)/2, which is the number of coins required to fill it completely.

// Or we can say root of the quadratic i(i+1)/2=coins will have 2 solution(floor)*
// (since the equation is quadratic), one is positive and other is negative. We neglect negative since floor value can't be negative.

// Root of a quadratic equation of form ax^2 + bx + c is
// Root 1 : ( -b+sqrt( b^2 - 4ac ))/2a.
// Root 2 : (-b-sqrt( b^2 - 4ac ))/2a. discarded since negative solution

// In our case quation is of the form i^2+i-2coins=0 hence 'a' & 'b' that is coefficient is 1 & c is (-2coins)
// Using above values our Root 1 simplifies to (sqrt(1+8*coins) - 1) / 2

// To avoid overflow caused by 8*coins since 1 <= coins <= 2^31 - 1 , we rearrange the expression by taking 8 common that simplifies to => sqrt(2)xsqrt(1/8.0+n)-0.5

// int arrangeCoins(int n)
// {
//         return (sqrt(2)*sqrt(1/8.0+n)-0.5);
// }

class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1){
            return 1;
        }
        long long int sum=0,i=1;
        while(sum+i<=n){
            sum+=i;
            i++;
        }
        return i-1;
    }
};