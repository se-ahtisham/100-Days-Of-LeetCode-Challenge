#include <iostream>
using namespace std;

void Input(int price[7])
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Please Enter " << i + 1 << " Day Amount: ";  
        cin >> price[i];
    }
}

void Profit(int price[7], int& Sell, int& Buy)
{
    if (Sell >= Buy)
    {
        if (price[Sell] - price[Buy] > 0)
            cout << "The Profit is: " << price[Sell] - price[Buy] << endl;
        else
            cout << "The Loss is: " << price[Sell] - price[Buy] << endl;
    }
    else
    {
        cout << "Not Allowed" << endl;
    }
}

int main()
{
    int price[7] = { 0 };
    int sell, buy = 0;

    Input(price);

    cout << "Please Enter Buy Day (1-7): ";
    cin >> buy;

    cout << "Please Enter Sell Day (1-7): ";
    cin >> sell;

    buy--;  // Convert to zero-based index
    sell--; // Convert to zero-based index

    Profit(price, sell, buy);

    return 0;
}
