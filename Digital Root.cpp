#include <iostream>
using namespace std;
//User function Template for C++
class Solution{
  public:
    int digitalRoot(int n)
    {
        int rem,i;
        int sum=0;
        while(n>0)
        {
            rem=n%10;
            sum+=rem;
            n/=10;
        }
        if(sum>9)
        {
            return digitalRoot(sum);
        }
        return sum;
    }
};
int main()
{
    int n;
    cin>>n;//taking number n
    //calling digitalRoot() function
    Solution obj;
    cout<<obj.digitalRoot(n)<<endl;
	return 0;
}
