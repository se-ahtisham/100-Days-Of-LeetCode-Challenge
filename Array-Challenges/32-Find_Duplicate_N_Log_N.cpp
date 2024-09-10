#include<iostream>
#include<algorithm>

using namespace std;

void findduplicate(int ar[], int size)
{
    if (size == 0)
    {
        return;  // Return -1 if the array is empty
    }

    sort(ar, ar + size);

    for (int i = 0; i < size - 1; i++)
    {
        if (ar[i] == ar[i + 1])
        {
            cout<< ar[i];
        }
    }

    return; // Return -1 if no duplicate is found
}

int main()
{
    int ar[] = { 1, 2, 3, 4, 5, 1, 8, 4, 8 };
    int size = sizeof(ar) / sizeof(ar[0]);

    findduplicate(ar, size);
    

    return 0;
}
