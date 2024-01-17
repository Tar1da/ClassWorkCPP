#include <iostream>
#include <string>

using namespace std;

class Student {
	string name;
	float ball;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void setBall(float ball) {
		this->ball = ball;
	}
	float getBall() {
		return ball;
	}
};

struct Garage {
	Car* car = nullptr;
	int countCars = 0;
};

class Car {
private:
	string color;
	string model;
	float price;
public:
	Car() {
		//cout << "car created" << endl;
	}
	Car(string color, string model)
	{
		this->color = color;
		this->model = model;
	}
	Car(string color, string model, float price):
	Car(color, model)
	{
		this->price = price;
	}
	void setColor(string color)
	{
		this->color = color;
	}
	void setModel(string model)
	{
		this->model = model;
	}
	void setPrice(float price)
	{
		this->price = price;
	}
	string getColor()
	{
		return color;
	}
	string getModel()
	{
		return model;
	}
	float getPrice()
	{
		return price;
	}


	string toString()
	{
		return "color: " + color + " model: " + model + " price: " + to_string(price);
	}
};

Car getMinPrice(Car& car1, Car& car2)
{
	if (car1.getPrice() < car2.getPrice())
	{
		return car1;
	}
	else
		return car2;
}

Car getMaxPrice(Car& car1, Car& car2)
{
	if (car1.getPrice() > car2.getPrice())
	{
		return car1;
	}
	else
		return car2;
}

Car newCar(Car& car1) {
	Car newCar = car1;
	float x = car1.getPrice() * 10 / 100;
	newCar.setPrice(car1.getPrice() + x);
	return newCar;
}

void changeColor(Car& car)
{
	car.setColor("gold");
}

auto carColor(Car* cars,int sz, string color) {
	int count = 0;

	for (int k = 0; k < sz; k++) {
		if (cars[k].getColor() == color) count++;
	}
	auto arrCarColor = new Car[count];
		return arrCarColor;
		for (int k = 0, n = 0; k < sz; n++) {
			arrCarColor[k++] = cars[n];
		}

}

template <typename T>
T get_rand(T a, T b) {
	return rand() % (b - a + 1) + a;
}

int main() {
	/*Car car1;
	//car1.color = "red"; //не можем изменить свойства на прямую
	car1.setColor("red");
	car1.setModel("mers");
	car1.setPrice(500000);
	//cout << car1.toString() << endl;

	Car car2("Silver", "audi", 23000);
	//cout << getMinPrice(car1, car2).toString() << endl;

	changeColor(car1);
	//cout << car1.toString() << endl;

	//cout << "newCar " << newCar(car1).toString() << endl;

	Car car3 = newCar(car1);
	//cout << "car3 " << car3.toString() << endl;

	Car car4("White", "Aka", 900000);
	/////////////////

	Car cars[4]{ car1, car2, car3, car4 };
	float maxPrice = car1.getPrice();
	int id = 0;
	for (int k = 1; k < size(cars); k++)
	{
		if (maxPrice < cars[k].getPrice())
		{
			maxPrice = cars[k].getPrice();
			id = k;
		}
	}
	cout << endl;
	cout << cars[id].toString();

	for (int k = 0; k < size(cars); k++) {
		cout << cars[k].toString();
	}
	cout << "after" << endl;
	*/

	const char* name1 = "Petya";
	const char* name2 = "Natalia";
	const char* name3 = "Vlad";
	const char* name4 = "Masha";
	const char* name5 = "Danil";
	const char* names[5]{name1, name2, name3, name4, name5};
	auto students = new Student[5];

	for (int k = 0; k < 5; k++) {
		students[k].setName(get_rand(names[0], names[4]));
		students[k].setBall(get_rand(0.0, 12.0));
	}
	for (int k = 0; k < 5; k++) {
		students[k].getName();
		cout << endl;
		students[k].getBall();
		cout << endl << endl;
	}
	system("pause");
	return 0;
}