#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;


long long sum(std::vector<int> &a) {
	long long ans = 0;

	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}



	return ans;
}

int main(void) {
	vector<int> a;
	int size, b;
	cin >> size;
	for(int i = 0; i<size; i++) {
		cin >> b;
		a.push_back(b);
	}
	cout << sum(a);
}
