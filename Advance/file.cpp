
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("demo.txt");
    if (!fout.is_open()) {
        cout << "Cannot open file for writing\n";
        return 1;
    }
    fout << "hello world\n";
    fout << "cpp file io\n";
    fout << "single\n";
    fout << "last line with many words\n";
    fout.close();
    
    ifstream fin("demo.txt");
    if (!fin.is_open()) {
        cout << "Cannot open file for reading\n";
        return 1;
    }

    string word;
    cout << "--- words ---\n";
    while (fin >> word) {
        cout << word << "\n";
    }
    fin.close();

    fin.open("demo.txt");
    string line;
    cout << "\n--- lines ---\n";
    while (getline(fin, line)) {
        cout << line << "\n";
    }
    fin.close();

    fin.open("demo.txt");
    cout << "\n--- eof loop ---\n";
    fin >> word;
    while (!fin.eof()) {
        cout << word << " ";
        fin >> word;
    }
    cout << "\n";
    fin.close();

    ofstream mix("mix.txt");
    mix << "42\nsecond line\n";
    mix.close();

    ifstream mf("mix.txt");
    int num;
    string got;

    mf >> num;
    getline(mf, got);
    cout << "\n--- mixing trap ---\n";
    cout << "after >>, getline gave: [" << got << "]\n";

    mf.clear();
    mf.seekg(0);
    mf >> num;
    mf >> ws;
    getline(mf, got);
    cout << "with >> ws, getline gave: [" << got << "]\n";
    mf.close();

    ofstream app("demo.txt", ios::app);
    app << "appended line\n";
    app.close();

    fin.open("demo.txt");
    cout << "\n--- file after append ---\n";
    while (getline(fin, line)) {
        cout << line << "\n";
    }
    fin.close();
    cout << "\n--- error check ---\n";
    ifstream bad("no_such_file.txt");
    if (!bad.is_open()) {
        cout << "file did not open\n";
    }
    fin.open("demo.txt");
    while (fin >> word) { }
    cout << "eof  = " << fin.eof()  << "\n";
    cout << "fail = " << fin.fail() << "\n";
    cout << "bad  = " << fin.bad()  << "\n";
    fin.close();
    return 0;
}
