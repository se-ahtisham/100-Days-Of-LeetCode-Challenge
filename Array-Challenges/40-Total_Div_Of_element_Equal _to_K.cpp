#include <iostream>

using namespace std;

void printSubarraySumsDivByK(int nums[], int size, int k)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += nums[j];
            if (sum % k == 0)
            {
                count++;
                cout << "Sum of subarray from index " << i << " to " << j << " is: " << sum << endl;
            }
        }
    }
    cout<<count;
}

int main()
{
    int nums[] = {4, 5, 0, -2, -3, 1};
    int k = 5;
    int size = sizeof(nums) / sizeof(nums[0]);

    printSubarraySumsDivByK(nums, size, k);

    return 0;
}
