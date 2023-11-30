#include <bits/stdc++.h>

using namespace std;

void findLDS(const vector<int> &arr)
{
    int n = arr.size();

    // Initialize LDS length and array
    vector<int> ldsLength(n, 1);
    vector<int> ldsArray(arr.begin(), arr.end());

    // Compute LDS Length
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (arr[j] > arr[i] && ldsLength[j] + 1 > ldsLength[i])
            {
                ldsLength[i] = ldsLength[j] + 1;
            }
        }
    }

    // Find the Maximum Length
    int maxLDSLength = *max_element(ldsLength.begin(), ldsLength.end());

    // Construct LDS Array
    vector<int> resultLDSArray;
    int currentLength = maxLDSLength;

    for (int i = n - 1; i >= 0; --i)
    {
        if (ldsLength[i] == currentLength)
        {
            resultLDSArray.push_back(arr[i]);
            currentLength -= 1;
        }
    }

    // Output results
    cout << "Length of LDS: " << maxLDSLength << endl;
    cout << "LDS Array: ";
    for (int i : resultLDSArray)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    // Example usage
    vector<int> arr = {4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3};
    findLDS(arr);

    return 0;
}
