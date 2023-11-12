// C++ implementation to find the length
// of longest subarray having sum k
#include <bits/stdc++.h>
using namespace std;

// function to find the length of longest
// subarray having sum k
int lenOfLongSubarr(int A[], int N, int K)
{

	int sum = 0, maxLen = 0;

	unordered_map<int, int> sumvsindex;
	for (size_t i = 0; i < N; i++)
	{
		/* code */
		sum += A[i];
		sumvsindex[sum] = i;
		if (sum == K)
		{
			maxLen = i + 1;
		}

		if (sumvsindex.find(sum - K) != sumvsindex.end())
		{
			int temp = i - sumvsindex[sum - K];
			maxLen = max(maxLen, temp);
		}
	}

	return maxLen;
}

// Driver Code
int main()
{
	int arr[] = {1, 5, 1, 2, 2, 1, 1};

	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 6;
	cout << "Length = " << lenOfLongSubarr(arr, n, k);
	return 0;
}
