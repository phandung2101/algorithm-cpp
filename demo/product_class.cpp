#include "iostream"
#include "vector"
#include "iomanip"
#include <algorithm>

using namespace std;

class MatHang {
public:
	int ma;
	string ten;
	string loai;
	float giaMua;
	float giaBan;
	float loiNhuan;
	
	void nhapBp(int ma) {
		cin.ignore();
		this->ma = ma;
		getline(cin, ten);
		getline(cin, loai);
		cin >> giaMua;
		cin >> giaBan;
		loiNhuan = giaBan - giaMua;
	}
	
	void in() {
		cout << ma << " " << ten << " " << loai << " " << fixed << setprecision(2) << loiNhuan << endl;
	}
};

bool compare(MatHang a, MatHang b) {
	return a.loiNhuan > b.loiNhuan;
}

int main() {
	int i=0, N;
	cin >> N;
	vector<MatHang> v;
	while(i < N) {
		MatHang a;
		a.nhapBp(i+1);
		
		v.push_back(a);
		i++;
	}
	int x,y;
	
// manual sort
//	for(x=0;x<v.size();x++) {
//		for(y=x+1;y<v.size();y++) {
//			if(v[y].loiNhuan > v[x].loiNhuan) {
//				MatHang temp = v[y];
//				v[y] = v[x];
//				v[x] = temp;
//			}
//		}
//		
//	}

	sort(v.begin(), v.end(), compare);
	
	for(i=0;i<v.size();i++) {
		v[i].in();
	}
	
}
