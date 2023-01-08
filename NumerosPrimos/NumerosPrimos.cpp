#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ingresa el numero a descomponer: ";
    cin >> n;
    if (n % 2 != 0) {

        cout << " no es primo";

    }
    else {
        for (int i = 2; n > 1; i++)
        {
            while (n % i == 0) {
                cout << " * " << i;
                n /= i;
            }
        }

    }

}
