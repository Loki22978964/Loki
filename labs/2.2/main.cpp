enum Names { David, Tom, Andrew, Kate, Mary, Olga };

struct Student
{

	Names name;
	int yearOfStudy;
	double avs;


};
#include <iostream>
int main() {
	Student myStudents[7];
	myStudents[0] = { Tom, 2, 90 };
	myStudents[1] = { David, 1, 87 };
	myStudents[2] = { Kate, 2, 92 };
	myStudents[3] = { Andrew, 3, 65 };
	myStudents[4] = { Olga, 1, 91 };
	myStudents[5] = { Mary, 1, 90 };
	myStudents[6].name = Andrew;
	myStudents[6].yearOfStudy = 2;
	myStudents[6].avs = 78;

	int count = 0;

	for (int i = 0; i < 7; i++) {
		if (myStudents[i].yearOfStudy == 1, myStudents[i].avs >= 90) {
			count++;
		}
	}
	float p = (float)count * 100 / 7;

	std::cout << p << std::endl;
}
