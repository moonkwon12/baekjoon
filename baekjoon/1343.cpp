#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	int i=0;
	int count = 0;
	int countB;
	while (s[i] != '\0') {
		
		if (s[i] == 'X') {
			count++;
		}
		else if (s[i] == '.') {
			if ((count % 2) == 0) {
				if ((count % 4) != 0) {

				}
				else {

				}
			}
			
		}


		i++;
	}


}