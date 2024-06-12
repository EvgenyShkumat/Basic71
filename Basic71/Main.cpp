#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ifstream fin1("input1.txt");
	ifstream fin2("input2.txt");
	
	string result1 = "", buf1 = "";
	string result2 = "", buf2 = "";


	if (!fin1.fail()) {
		while (!fin1.eof()) {
			getline(fin1, buf1);
			result1 += buf1;
		}

		fin1.close();
	}

	if (!fin2.fail()) {
		while (!fin2.eof()) {
			getline(fin2, buf2);
			result2 += buf2;
		}

		fin2.close();
	}

	cout << (result1 == result2 ? "These files are the same" : "These files are different");

	return 0;
}

