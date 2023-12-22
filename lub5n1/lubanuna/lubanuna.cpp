#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	string text, copy; cout << "Введите предложение: "; getline(cin, text); text = text + "."; copy = text;
	int size = 0; while (copy.find(" ") != -1) { int t = copy.find(" "); copy.erase(1, t); size++; }size++; int* Words = new int(sizeof(size)); copy = text;
	for (int i = 0; i < size; i++) {
		int counter = 0, plase = 0;
		for (int j = 0; j < copy.size(); j++) {
			if (copy[j]=='1'|| copy[j] == '2' || copy[j] == '3' || copy[j] == '4' || copy[j] == '5' || copy[j] == '6' || copy[j] == '7' || copy[j] == '8' || copy[j] == '9' || copy[j] == '0' )
			{counter++;}
			if (copy[j] == ' '||copy[j]=='.') {Words[i] = counter; plase = j; break; }
		}
		plase++;
		copy.erase(0,plase);//с начала до места
	}
	copy = text;
	cout << "Ответ: ";
	for (int i = 0; i < size; i++) {
		int plase = 0;
		for (int j = 0; j < copy.size(); j++) {
			if (Words[i] == 1) { cout << copy[j]; }
			if (copy[j] == ' '|| copy[j] == '.') { plase = j; break; }
		}
		plase++;
		copy.erase(0, plase);
	}
}