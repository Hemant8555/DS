
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,
        m, k;
    cin >> n >> m >> k;
    int arr[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sort(arr, arr + n);
    sort(arr2, arr2 + m);
    int count = 0;
    int z = 0, j = 0;
    while (z < n && j < m)
    {
        if (abs(arr[z] - arr2[j]) <= k)
        {
            count++;
            z++;
            j++;
        }
        else if (arr[z] < arr2[j])
        {
            z++;
        }
        else
        {
            j++;
        }
    }
    cout << count << "\n";
    return 0;
}