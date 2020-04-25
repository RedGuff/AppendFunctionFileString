#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int appendFunctionFileString(string file, string data = "")  // And create new file if does not exist.
{
    ofstream outfile(file.c_str(), ios_base::app);
    if (!outfile) {
        cerr << "Error: Imossible to write in the file " << file << "!" << endl;
        return -1;
    } else {
        outfile << data;
        outfile.close();
    }
return 0; // Ok.
}

int main()
{
    string file = "Test.txt";
    string stringToAppend = "A";
    appendFunctionFileString(file, stringToAppend);
    appendFunctionFileString("Test.txt", "1\n");
    appendFunctionFileString("Z:\Test.txt", "No!");
    cout << "OK!" << endl;
    return 0;
}
