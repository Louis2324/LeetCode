
#include <iostream>
#include <vector>
using namespace std;

// brute-force solution
// class Solution
// {
// public:
//     int countPrimes(int n)
//     {
//         vector<int> primes;

//         for (int i = 2; i < n; i++)
//         {
//             bool isPrime = true;
//             for (int j = 2; j < i; j++)
//             {
//                 if (i % j == 0)
//                 {
//                     isPrime = false;
//                     break;
//                 }
//             }
//             if (isPrime)
//                 primes.push_back(i);
//         }

//         return primes.size();
//     }
// };


int main()
{

    Solution sol;
    cout << sol.countPrimes(8);
    return 0;
}