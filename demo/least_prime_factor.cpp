#include "iostream"
#include <vector>

using namespace std;

bool isPrime(int number) {
	if(number < 2) return false;
	for(int i=2; i<number; i++) {
		if(number % i == 0) return false;
	}
	return true;
}

vector<int> primeNums(int number) {
	vector<int> v;
	for(int i=1;i<=number;i++) {
		if(isPrime(i)) v.push_back(i);
	}
	return v;
}

int main() {
	int T;
	cin >> T;
	vector<vector<int>> vs;
	while(T-- > 0) {
		int N, i;
		cin >> N;
		vs.push_back(primeNums(N));
	}
	int i,j;
	for(i=0;i<vs.size();i++) {
		for(j=0;j<vs[i].size();j++) {
			cout << vs[i][j] << " ";
		}
		cout << endl;
	}
}
