#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	string path = "input.txt";
	ifstream in(path);
	string line;
	if (!in.is_open()) {
		return -1;
	}
	vector<vector<char>> mains;
	
	while (getline(in, line)) {
		vector<char> column;
		for (int i = 0; line[i] != '\0'; i++) {
			if (line[i] != ' ') {
				column.push_back(line[i]);
			}
		}
		mains.push_back(column);
	}

	for (auto item : mains) {
		for (auto items : item) {
			cout << items << " ";
		}
		cout << endl;
	}

	char choose;
	while (mains[1][6] != 2) {
		cout << endl << "w - up, s - down, a - left, d - right" << endl;
		cout << "enter chooce: ";
		cin >> choose;
		switch (choose)
		{
		case 'w':
			for (int i = 0; i < mains.size(); i++) {
				for (int j = 0; j < mains[i].size(); j++) {
					if (mains[i][j] == '2') {
						if (mains[i - 1][j] != '0' && mains[i - 1][j] != '3') {
							cout << "Lose";
							break;
						}
						else {
							mains[i][j] = '0';
							mains[i - 1][j] = '2';
							cout << endl;
							for (auto item : mains) {
								for (auto items : item) {
									cout << items << " ";
								}
								cout << endl;
							}
							break;
						}
					}
				}
			}
			break;
		case 's':
			for (int i = 0; i < mains.size(); i++) {
				for (int j = 0; j < mains[i].size(); j++) {
					if (mains[i][j] == '2') {
						if (mains[i + 1][j] != '0' && mains[i + 1][j] != '3') {
							cout << "Lose";
							break;
						}
						else {
							mains[i][j] = '0';
							mains[i + 1][j] = '2';
							cout << endl;
							for (auto item : mains) {
								for (auto items : item) {
									cout << items << " ";
								}
								cout << endl;
							}
							break;
						}
					}
				}
			}
			break;
		case 'a':
			for (int i = 0; i < mains.size(); i++) {
				for (int j = 0; j < mains[i].size(); j++) {
					if (mains[i][j] == '2') {
						if (mains[i][j - 1] != '0' && mains[i][j - 1] != '3') {
							cout << "Lose";
							break;
						}
						else {
							mains[i][j] = '0';
							mains[i][j - 1] = '2';
							cout << endl;
							for (auto item : mains) {
								for (auto items : item) {
									cout << items << " ";
								}
								cout << endl;
							}
							break;
						}
					}
				}
			}
			break;
		case 'd':
			for (int i = 0; i < mains.size(); i++) {
				for (int j = 0; j < mains[i].size(); j++) {
					if (mains[i][j] == '2') {
						if (mains[i][j + 1] != '0' && mains[i][j + 1] != '3') {
							cout << "Lose";
							break;
						}
						else {
							mains[i][j] = '0';
							mains[i][j + 1] = '2';
							cout << endl;
							for (auto item : mains) {
								for (auto items : item) {
									cout << items << " ";
								}
								cout << endl;
							}
							break;
						}
					}
				}
			}
			break;
		default:
			break;
		}
	}
}
