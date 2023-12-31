#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{

    vector<int> vect2;
    // Copying vector by insert function
    vect2.insert(vect2.begin(), nums.begin(), nums.end());
    k = k % nums.size();
    for (int i = nums.size() - 1; i >= 0; i--) // trace backword
    {
        //[1 ,2 ,3,4,5,6] >> 4;
        if ((i - k) >= 0)
        {
            nums[i] = nums[i - k];
        }
        else
        {
            nums[i] = vect2[nums.size() + (i - k)];
        }
    }
    auto it = nums.begin();
    while (it != nums.end())
    {
        std::cout << *it;
        it++;
    }
}
int main()
{
    std::vector<int> i{1, 2, 3, 4, 5};
    rotate(i, 11);
    return 0;
}

// rotate by revarsal algo/.....
#include <bits/stdc++.h>

using namespace std;

// Function to rotate an array by k elements to the left
void rotateArray(vector<int> &arr, int d)
{
    // Find the size of the array
    int n = arr.size();

    // Mod k with the size of the array
    // To handle the case where k is greater than the size
    // of the array
    d %= n;

    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse the remaining n-k elements
    reverse(arr.begin() + d, arr.end());

    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}

int main()
{
    // Initialize the array
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    // Number of elements to rotate to the right
    int d = 2;

    // Call the rotateArray function to rotate the array
    rotateArray(arr, d);

    // Print the rotated array
    for (int i : arr)
    {
        cout << i << " ";
    }

    // Return 0 to indicate successful termination of the
    // program
    return 0;
}
