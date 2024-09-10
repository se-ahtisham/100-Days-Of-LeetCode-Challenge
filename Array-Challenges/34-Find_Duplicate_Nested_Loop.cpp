#include <iostream>

using namespace std;

int findduplicate(int ar[], int size)
{
    if (size == 0)
    {
        return -1;  // Return -1 if the array is empty
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ar[i] == ar[j])
            {
                return ar[i];
            }
        }
    }

    return -1; // Return -1 if no duplicate is found
}

int main()
{
    int ar[] = { 1, 2, 3, 4, 5, 1, 2, 4, 2 };
    int size = sizeof(ar) / sizeof(ar[0]);

    int answer = findduplicate(ar, size);
    cout << answer;

    return 0;
}
