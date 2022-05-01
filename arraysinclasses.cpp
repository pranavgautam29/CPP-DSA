#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter ID of your Item no: " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your Item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    char c;
    Shop dukaan;
    dukaan.initCounter();
    do
    {
        dukaan.setPrice();

        cout << "Do you want to add more items(y/n): " << endl;
        cin >> c;
    } while (c == 'y');

    dukaan.displayPrice();

    return 0;
}