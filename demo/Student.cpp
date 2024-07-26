#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
	int id;
	string name;
	float scoreA;
	float scoreB;
	float scoreC;
	
	Student(int id) {
		this->id = id;
		cin.ignore();
		getline(cin, this->name);
		cin >> scoreA;
		cin >> scoreB;
		cin >> scoreC;
	}
	
	void print() {
		cout << id << " " << name << " ";
		printf("%.1f ", scoreA);
		printf("%.1f ", scoreB);
		printf("%.1f ", scoreC);
		cout << endl;
	}
	
	void update() {
		cin >> scoreA;
		cin >> scoreB;
		cin >> scoreC;
	}
	
	float totalScore() {
		return scoreA + scoreB + scoreC;
	}
};

bool compare(Student a, Student b) {
	return a.totalScore() < b.totalScore();
}

void addStudent(int &currentId, vector<Student> &v) {
	int num;
	cin >> num;
	while(num-- > 0) {
		currentId++;
		Student s(currentId);
		v.push_back(s);
	}
}

void updateStudent(vector<Student> &v) {
	int updateId;
	cin >> updateId;
	for(int i=0; i<v.size();i++) {
		if(updateId == v[i].id) {
			v[i].update();
			break;
		}
	}
}



int main() {
	int funcNum = 1;
	vector<Student> v;
	int id = 0;
	while(funcNum != 0) {
		cin >> funcNum;
		if(funcNum == 1) {
			addStudent(id, v);
		} else if(funcNum == 2) {
			updateStudent(v);
		} else if(funcNum == 3) {
			sort(v.begin(), v.end(), compare);
			for(int i = 0; i< v.size(); i++) {
				v[i].print();
			}
		}
	}
}
