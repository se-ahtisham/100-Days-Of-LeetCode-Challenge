#include <iostream>

using namespace std;

void printSubarraysDivByK(int nums[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += nums[j];
            if (sum % k == 0)
            {
                for (int l = i; l <= j; l++)
                {
                    cout << nums[l] << " ";
                }
                cout << endl;
            }
        }
    }
}

int main()
{
    int nums[] = {4, 5, 0, -2, -3, 1};
    int k = 5;
    int size = sizeof(nums) / sizeof(nums[0]);

    printSubarraysDivByK(nums, size, k);

    return 0;
}
