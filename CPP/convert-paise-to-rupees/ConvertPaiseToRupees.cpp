#include <iostream>

using namespace std;

int main()
{

    float paise;
    cout << "\nEnter the amount in Paise (Ps) -> ";
    cin >> paise;

    float rupee = paise / 100;

    cout << "\nThe amount in Rupee is (Rs) -> " << rupee << endl
         << endl;

    return 0;
}