#include <iostream>

using namespace std;

void removeDuplicates(int ar[], int &size)
{
    if (size == 0)
    {
        return;  // Return if the array is empty
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ar[i] == ar[j])
            {
                // Shift all elements to the left by one position
                for (int k = j; k < size - 1; k++)
                {
                    ar[k] = ar[k + 1];
                }
                size--; // Decrease the size of the array
                j--; // Check the new element at position j
            }
        }
    }
}

int main()
{
    int ar[] = { 1, 2, 3, 4, 5, 1, 2, 4, 2 };
    int size = sizeof(ar) / sizeof(ar[0]);

    removeDuplicates(ar, size);

    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
