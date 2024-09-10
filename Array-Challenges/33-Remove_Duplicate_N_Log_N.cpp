#include <iostream>
#include <algorithm>

using namespace std;

int removeDuplicates(int ar[], int size)
{
    if (size == 0)
    {
        return 0;  // Return 0 if the array is empty
    }

    sort(ar, ar + size);

    int uniqueCount = 1; // Count the first element as unique

    for (int i = 1; i < size; i++)
    {
        if (ar[i] != ar[i - 1])
        {
            ar[uniqueCount] = ar[i];
            uniqueCount++;
        }
    }

    return uniqueCount;
}

int main()
{
    int ar[] = { 1, 2, 3, 4, 5, 1, 2, 4, 2 };
    int size = sizeof(ar) / sizeof(ar[0]);

    int newSize = removeDuplicates(ar, size);

    for (int i = 0; i < newSize; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
