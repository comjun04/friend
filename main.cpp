#include <iostream>

using namespace std;

char shell_char = '>';
char input[256];

int main()
{
    while(1)
    {
        cout << shell_char;
        cin >> input;
    }
    return 0;
}
