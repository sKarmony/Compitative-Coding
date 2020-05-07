#include<iostream>
using namespace std;

class student{
public:
	string name;
	string dept;
	double grade;

	student(string aname, string adept, double agrade)
	{
		name = aname;
		dept = adept;
		grade = agrade;
	}

	bool hasPassed(){
		if(grade>7)
		{
			return true;
		}
		return false;

	}
};

int main()

{
	student stu1("rishabh", "btech", 8);
	student stu2("halwa", "bba", 6);

	if(stu1.hasPassed())
	{
		cout<<"congratulations you passed!!\n";

	}
	else
	{
		cout<<"Sorry! Try again next year\n";
	}
	cout<<stu1.name;





	return 0;
}