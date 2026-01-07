#include <iostream>

using namespace std;
class Student {
private:
	int id;
	float score;
public:
	void set_Data(int studentid,float studentscore) {
		id = studentid;
		score=studentscore;
	}
	int getid() {
		return id;
	}
	float getscore() {
		return score;
	}
};
void max(Student *p) {
	float maxscore = p[0].getscore();
	int maxid = 0;
		for (int i = 1; i < 5; i++) {
		if (p[i].getscore() > maxscore) {
			maxscore = p[i].getscore();
			maxid = i;
		}
	}
		cout << "成绩最高的学生的学号为：" << p[maxid].getid() << endl;
		cout<< "成绩为："  << maxscore << endl;
}

int main() {
	Student student[5];
	student[0].set_Data(1001, 85.5);
	student[1].set_Data(1002, 92.0);
	student[2].set_Data(1003, 78.5);
	student[3].set_Data(1004, 95.5);
	student[4].set_Data(1005, 88.0);
	max(student);
	return 0;
}