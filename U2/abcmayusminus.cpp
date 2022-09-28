
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char letra= 'A';

    for (int i = 0; i < 26; i++)
    {
        cout <<letra << "\t";
        letra = letra + 1;
    }

    char letraminus= 'a';

    for (int i = 0; i < 26; i++)
    {
        cout <<letraminus << "\t";
        letraminus = letraminus + 1;
    }


    return 0;
}