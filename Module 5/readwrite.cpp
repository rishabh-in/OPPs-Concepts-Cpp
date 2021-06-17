// Using both ifstream and ofstream
// We have to create 2 objects 1 for writing from ofstream and one for reading from ifstream. 

#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ofstream fout;
    string line;
    fout.open("sample.txt");
    while(fout) {
        getline(cin, line);
        if(line == "-1") {
            break;
        }

        fout<<line<<endl;
    }
    fout.close();

    ifstream fin;
    fin.open("sample.txt");
    while(fin) {
        getline(fin, line);
        cout<<line<<endl;
    }
    fin.close();
    cout<<endl;
    return 0;
}