#include<stdlib.h>
#include<stdio.h>
#include <iostream>

using namespace std;

string fecha;
int main() {
	cout << "ingrese la fecha con el siguiente formato AAAA/MM/DD";
	cin >> fecha;
    string str = fecha;
    quitarcaracteres(str);
    return 0;
};
void quitarcaracteres(string str)
{

    string word = "";
    for (auto x : str)
    {
        if (x == '/')
        {
            cout << word << endl;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    cout << word << endl;
}

