#include <iostream>
#include <vector>
#include <algorithm>

#define F(i, a, n) for (int i = a; i < n; i++)
#define vs(n) vector<int> v(n, 0);
// #define v vector<int>a;
#define sz(x) ((int)x.size())
// -----------------------------------------------------------------------
#define vi vector<int>
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define forr(a, k, n) for (long long a = k; a < n; a++)
#define llmin_queue priority_queue<ll, vector<ll>, greater<ll>>
#define min_queue priority_queue<int, vector<int>, greater<int>>
#define Yes cout << "Yes\n";
#define YES cout << "YES\n";
#define No cout << "No\n";
#define NO cout << "NO\n";
#define f first
#define s second
#define endl "\n"
#define debug(x) cout << #x << " is " << x << endl
#define pii pair<int, int>
#define pll pair<ll, ll>

using namespace std;

int longestincreasingsubarray(vector<int> arr, int n)
{
    int len = 0, maxi = 1;
    F(i, 1, n)
    {
        if (arr[i - 1] < arr[i])
            len++;
        else
            len = 1;
        maxi = max(maxi, len);
    }
    return maxi;
}

signed main()
{

    vector<int> arr = {1, 5, 4, 2, 1, 3, 0, 4, 4};
    int n = sz(arr);
    int ans = longestincreasingsubarray(arr, n);
    cout << "ans " << ans << endl;
}
// T.C = O(N);