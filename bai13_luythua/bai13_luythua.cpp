#include <iostream>
using namespace std;
int main()
{
    cout << "luy thua\n" << endl;
    int so, luythua = 1, b = 4;
    cin >> so;
    for (int a = 1; a < b; a++)
    {
        luythua *= so;
    }
    cout << luythua * so;
        return 0;
}