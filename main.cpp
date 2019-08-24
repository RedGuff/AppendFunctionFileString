#include <iostream>
#include <fstream>
#include <string>

using namespace std;

AppendFunctionFileString(string file, string data = "")  // And create new file if does not exist.
{
    ofstream outfile(file.c_str(), ios_base::app);
    if (!outfile) {
        cerr << "Error Opening File " << file << "!" << endl;
        return -1;
    } else {
        outfile << data;
        outfile.close();
    }
}

int main()
{
    string file = "Test.txt";
    string stringToAppend = "A";
    AppendFunctionFileString(file, stringToAppend);
    AppendFunctionFileString("Test.txt", "1\n");
    AppendFunctionFileString("Z:\Test.txt", "No!");
    cout << "OK!" << endl;
    return 0;
}
