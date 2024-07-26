#include "iostream"
#include "vector"

using namespace std;

bool isPrime(int num) {
	if(num < 2) return false;
	for(int i = 2; i < num; i++) {
		if(num%i==0) return false;
	}
	return true;
}

vector<int> primeNums(int num) {
	vector<int> v;
	for(int i = 2; i <= num; i++) {
		if(isPrime(i)) v.push_back(i);
	}
	return v;
}

int main() {
	int N;
	cin >> N;
	vector<int> v = primeNums(N);
	int x=0,y=v.size()-1;
	while(x < y) {
		if(v[x]+v[y]==N) break;
		if(v[x]+v[y]>N) y--;
		if(v[x]+v[y]<N) x++;
	}
	cout << v[x] << " " << v[y] << endl;
}
