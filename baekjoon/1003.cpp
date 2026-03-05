#include <iostream>

using namespace std;

int ct[2];
long long fiboarr[50] = { 0,1 };

long long fibo(int n) {
    
    if (n == 0 || n == 1)
        return fiboarr[n];
    else if (fiboarr[n] == 0)
        fiboarr[n] = fibo(n - 1) + fibo(n - 2);
    return fiboarr[n];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int num, t;
    cin >> t;

    for (int i = 0;i < t;i++) {
        cin >> num;
        if (num == 0)
            cout << "1 0\n";
        else
            cout << fibo(num - 1) << " " << fibo(num) << "\n";
    }
    
	return 0;
}