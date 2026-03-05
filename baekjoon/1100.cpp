#include <iostream>
using namespace std;

int arr[8][8];

int main(void) {
	string str[8];
	
	for (int i = 0;i < 8;i++) {
		cin >> str[i];
	}
	
	int count = 0;
	for (int i = 0;i < 8;i++) {
		if (i % 2 == 0) {
			for (int j = 0;j < 8;j+=2) {
				if (str[i][j] == 'F') {
					count++;
				}
			}
		}
		else {
			for (int j = 1;j < 8;j += 2) {
				if (str[i][j] == 'F') {
					count++;
				}
			}
		}
		
	}
	cout << count;


}