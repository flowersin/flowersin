//Decrements x while x >= 0

#include <iostream>

int main()
{
    using namespace std;

    int x;

    cout << "enter a number >";
    for(cin >> x; x >= 0; x--)
    {
        cout << x << endl;

    }
    cout << "done!\n";

    return 0;
}