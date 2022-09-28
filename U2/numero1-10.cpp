
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int numero= 1;

    for (int i = 1; i <= 10; i++)
    {
        cout <<numero << "\t";
        numero = numero + 1;
    }

    return 0;
}