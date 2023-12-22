#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
int count_of_words(string str) {
	int count = 1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') { count++; }
	}
	return count;
}
string del_abc(string str) {
	string out = "";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == ' ') {
			out = out + str[i];
		}
	}
	return out;
}
string sort_str(string str) {
	vector<char> num;

	for (char c : str) {
		if (isdigit(c)) {
			num.push_back(c);
		}
	}

	sort(num.begin(), num.end(), greater<char>());

	int i = 0;

	for (char& c : str) {
		if (isdigit(c)) {
			c = num[i];
			i++;
		}
	}
	return str;
}
int main() {
	setlocale(LC_ALL, "RUS");
	string in, copy, w; cout << "Введите строку:"; getline(cin, in);
	copy = del_abc(in); copy = copy + ' ';
	int cw = count_of_words(copy);
	for (int i = 0; i < copy.size(); i++) {
		if (copy[i] != ' ') { w = w + copy[i]; }
		if (copy[i] == ' ') { cout << sort_str(w) << " "; w = ""; }
	}
}