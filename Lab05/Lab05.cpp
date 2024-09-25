#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	cout << "Enter you message:" << endl;

	vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

	string text;
	getline(cin, text);

	for (int i(0); i < text.length(); i++) {
		char hold;
		char lower;
		if (text[i] >= 65 && text[i] <= 90) {
			hold = text[i] - 65;
			cout << cypher[hold];
		}
		else if (text[i] >= 97 && text[i] <= 122) {
			hold = text[i] - 97;
			lower = cypher[hold] + 32;
			cout << lower;
		}
		else {
			cout << text[i];
		}

	}
}


