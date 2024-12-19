#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <string>
using namespace std;

void readFile(string path1, string path2) {
	string line;
	ifstream in(path1);
	ofstream out(path2);
	if (in.is_open()) {
		while (in >> line) {
			if (line.length() >= 7) {
				out << line << " ";
			}
		}
	}
	in.close();
	out.close();
}

int main()
{
	//vector<int> v = { 1,2,3,4,5 };
	//for (auto item : v) {
	//	cout << item << " ";
	//}

	//cout << endl;

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i];
	//}

	//vector<int>::iterator it = v.begin();
	//for (it = v.begin(); it != v.end(); it++) {
	//	cout << *it << " ";
	//}
	
	setlocale(LC_ALL, "ru");

	map<string, string> map = {};
	string en = "engl.txt";
	string ru = "ru.txt";
	string dict = "dict.txt";

	string label1;
	string label2;
	string strLine;
	string line;
	ifstream in(dict);
	ifstream in2(en);

	int count = 1;
	if (in.is_open()) {
		while (getline(in, label1, ':')) {
			getline(in, label2);
			map.insert({ label1, label2 });
		}

		while (in2 >> label1) {
			if (label1[label1.length() - 1] == '.' || label1[label1.length() - 1] == ',' || label1[label1.length() - 1] == ':' || label1[label1.length() - 1] == ';') {
				for (int i = 0; i != label1.length() - 2; i++) {
					strLine[i] = label1[i];
				}
				int num = map.count(strLine);
			}
			else {
				int num = map.count(label1);
			}

		}
	}
	in.close();
}
