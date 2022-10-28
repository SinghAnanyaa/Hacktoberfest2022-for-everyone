#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, maxSum = INT_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                //    cout << arr[k];
            }
            maxSum = max(maxSum, sum);
            // cout << endl;
        }
    }
    cout << maxSum;

    return 0;
}