#include <iostream>
#include <cmath>
using namespace std;

int number = 100;
int primeNum[101];

void primeNumberSieve()
{
    // init
    for (int i = 2; i <= number; i++)
    {
        primeNum[i] = i;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (primeNum[i] == 0)
            continue;
        // skip through i * k
        for (int j = i * i; j <= number; j += i)
            primeNum[j] = 0;
    }

    //output
    for (int i = 2; i <= number; i++)
    {
        if (primeNum[i] != 0)
            cout << primeNum[i] << " ";
    }
}
int main()
{
    primeNumberSieve();
}
