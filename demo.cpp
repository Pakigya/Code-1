// you can use includes, for example:
// #include <algorithm>
#include <string.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int getlength()
{
         return 0;
}

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int i =0 ;
    int N = A.size();
    int ans=0;
    int sum1=0;
    int sum2=0;
    int j = 0;
    for (i = 0; i<N; i++)
    {
        for (j=i+1; j<N; j++)
        {
            sum1+=A[j];
        }
        for (j=0; j<i; j++)
        {
            sum2+=A[j];
        }
        if (sum1==sum2)
        {
            return i;    
        }
    }
    //do {}
    //while (A[i] !0)
   //cout << "this is a debug message.. the length is" <<size<< endl;
   //cout << "this is a debug message.. the length is" <<i<< endl;
   return ans;
}
