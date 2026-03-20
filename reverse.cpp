#include <iostream>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        long long res = 0;
        while (x)
        {
            int digit = x % 10;
            x /= 10;
            if (res > INT_MAX || res < INT_MIN)
            {
                return 0;
            }
            res = res * 10 + digit;
        }
        return res;
    }
};

int main()
{
    Solution obj;
    int x;

    cout << "Enter number: ";
    cin >> x;

    cout << "Reversed number: " << obj.reverse(x);

    return 0;
}
