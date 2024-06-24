#include <iostream>
#include <fstream>

using namespace std;
int readfrofile(const string& filename) {
	ifstream file(filename);
	if (!file.is_open())
	{
		throw runtime_error("File not found!");
	}
	int number;
	file >> number;
	if (file.fail())
	{
		throw invalid_argument("Invalid number in file!");
	}return number;
}
void main() {
	string filename;
	cout << "Enter filename of file from where you want to read a number: ";
	cin >> filename;

	try
	{
		int number = readfrofile(filename);
		cout << "Number readded from file " << filename << " is " << number << endl;

	}
	catch (const runtime_error& e)
	{
		cout << "Runtime error " << e.what() << endl;
	}
	catch (const invalid_argument& e)
	{
		cout << "Invalid argument error " << e.what() << endl;
	}
}