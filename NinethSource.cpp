#include <iostream>
#include <string>
#include <fstream>

using namespace std;

namespace  Utilities{
	bool fileExists(const string& filename) {
        ifstream file(filename);
        return file.good();
    }
    string readFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            throw runtime_error("Cannot open file: " + filename);
        }
        string content;
        string line;
        while (getline(file, line)) {
            content += line + "\n";
        }
        file.close();
        return content;
    }
    void writeFile(const string& filename, const string& content) {
        ofstream file(filename);
        if (!file.is_open()) {
            throw runtime_error("Cannot create or open file for writing: " + filename);
        }
        file << content;
        file.close();
    }
}
void main() {
    string filename("txt.txt");
    if (!Utilities::fileExists(filename))
    {
        throw runtime_error("File doesnt exist!");
    }
    try
    {
        string filecontent = Utilities::readFile(filename);
        cout << "Countent of this file " << filecontent << endl;
        string newtext = "New text addadadadasdsadasdasd";
        string newfilename = "output.txt";
        Utilities::writeFile(newfilename,newtext);
        cout << "Succesfully wrote content to " << newfilename << endl;
    }
    catch (const exception& e)
    {
        cout << "Error : " << e.what() << endl;
    }
}