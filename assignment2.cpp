#include <iostream>
#include <vector>

using namespace std;

class Animal {
public:
	virtual void makeSound() = 0;
	virtual ~Animal() {}
};

class Dog : public Animal {
public:
	void makeSound() {
		cout << "Bow! Wao!" << endl;
	}
};

class Cat : public Animal {
public:
	void makeSound() {
		cout << "Meow" << endl;
	}
};

class Cow : public Animal {
public:
	void makeSound() {
		cout << "Moooou!" << endl;
	}
};

int main() {
	vector<Animal*> A;
	A.push_back(new Dog());
	A.push_back(new Cat());
	A.push_back(new Cow());

	for (size_t i = 0; i < A.size(); ++i) {
		A[i]->makeSound();
	}
	for (size_t i = 0; i < A.size(); ++i) {
		delete A[i];
	}
	return 0;
}