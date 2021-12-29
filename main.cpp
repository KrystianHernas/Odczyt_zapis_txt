#include <iostream>
#include <fstream>

using namespace std;

int main()
{   
    string cytat = "Dzien bez wschodu to noc";
    ofstream writer("cytat.txt");

    if (!writer) {
        cout << "Error opening file " << endl;
        return -1;
    }
    else {
        writer << cytat << endl;
        writer.close();
    }
    ofstream writer2("cytat.txt", ios::app);
    if (!writer2) {
        cout << "Error" << endl;
        return -1;
    }
    else {
        writer2 << "Krystian" << endl; writer2.close();
    }
    char letter;
    ifstream odczyt("cytat.txt");
    if (!odczyt) {
        cout << "error" << endl;
        return -1;
    }
    else {
        for (int i = 0; !odczyt.eof(); i++)
        {
            odczyt.get(letter);
            cout << letter;
        }
        cout << endl;
        odczyt.close();
    }
}
