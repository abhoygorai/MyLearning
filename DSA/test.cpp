#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    char ch;
    streambuf *p;
    ofstream os;
    os.open("test.txt");
    p = os.rdbuf();

    do
    {

        ch = cin.get();

        p->sputc(ch);

    } while (ch != '.');

    os.close();

    return 0;
}