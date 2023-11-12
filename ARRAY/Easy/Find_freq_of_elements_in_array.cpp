#include <bits/stdc++.h>
#include <iostream>

void countFreq(int arr[], int size)
{
    std::unordered_map<int, int> freq;
    for (size_t i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }
    for (auto a : freq)
    {
        std::cout << "key  " << a.first << "      frq  " << a.second << std::endl;
    }
}
int main()
{
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}