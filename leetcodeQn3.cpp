// qno. reverse integer
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
        
            cout<<"answer is 0"<<endl;
             return 0;
        }
      
            ans = (ans * 10) + digit;
            n = n / 10;
        
    }

    cout << "answer is:" << ans;
    return 0;
}
