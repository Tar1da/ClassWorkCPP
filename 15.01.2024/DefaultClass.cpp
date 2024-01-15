#include <iostream>
using namespace std;

class Fraction {
	int total;
	int num;
	int denom;
public:
	Fraction(int total, int num, int denom) {
		this->total = total;
		this->num = num;
		this->denom = denom;
	}

	void convert() {
		 total += num / denom;
		 num = num % denom;
	}

	void show() {
		convert();
		if (total > 0 && num == 0) {
			cout << total << endl;
		}
		else
			cout << num << "/" << denom << endl;
	}
};

class Student {
	string name;
	string num_grup;
	float avg;
public:
	Student(string name, string num_grup, float avg) {
		this->name = name;
		this->num_grup = num_grup;
		this->avg = avg;
	}

	string whoIsTheStudent() {
		if (avg > 4.6) return "A";
		if (avg > 3.6) return "B";
		if (avg > 2.6) return "C";
		else return "D";
	}

	void showInfo() {
		cout << name << " " << num_grup << " " << whoIsTheStudent() << endl;
	}
};
/*
class Fraction {
	int numerator;
	int denominator;
public:
	Fraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}
	void show() {
		cout << numerator << "/" << denominator << endl;
	}
};*/
/*
class Student {
private:
	string name;
	int age;
public:
	Student(string name, int age) {
		this->age = age;
		this->name = name;
	}
	void show() {
		cout << "name: " << name << "age: " << age << endl;
	};
};*/
	int main() {
		//Student st1("Jon", 21);
		//st1.show();
		//Fraction f1(3,6);
		//f1.show();
		//Student st2("Jon2", "5", 3.8);
		//st2.showInfo();
		Fraction f2(0, 0, 4);
		f2.show();
		system("pause");
		return 0;
	}
