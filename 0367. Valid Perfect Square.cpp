class Solution {
public:
    bool isPerfectSquare(int num) {
        int a = sqrt(num);
        return (num == a*a);
    }
};