#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>
#include <string>
#include <vector>

using namespace std;

void WriteToFile(ostream& out, const string& text) {
    out << text;
}

vector<string> ReadFromFile(istream& out) {
    vector<string> result;
    string str;
    while (!out.eof()) // пока файл не пуст, считываем из файла по одному символу и выводим на экран
    {
       /* getline(out, str);
        result.emplace_back(str);*/

        result.emplace_back();
        getline(out, result.back());
        
    }
    return result;
}


int main() {
   /* ofstream fout("test.txt"s);
    string str = "sdhfjhskd";
    WriteToFile(fout, str);
    fout.close();*/

    ifstream iout("test.txt"s);

    for (string value : ReadFromFile(iout) ) {
        cout << value << '\n';
    }
    return 0;
}