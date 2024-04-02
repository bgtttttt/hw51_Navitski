#include <iostream>
#include <string>

using namespace std;

class Counter {
private:
	int min;
	int max;
	int k;
public:
	Counter(int Min, int Max) : min(Min), max(Max), k(min) {};
	Counter(int Min, int Max, int k) : min(Min), max(Max), k(k) {};
	void addOne() {
		if (k < max) {
			k += 1;
		}
		else {
			k = min;
		}
	}
	void changeMinMax(int newMin, int newMax) {
		min = newMin; max = newMax;
		if (k < min || k > max) {
			k = min;
		}
	}

	int getK() {
		return k;
	}

	string getMinMax() {
		return "Min: " + to_string(min) + "  Max: " + to_string(max);
	}
	
};

int main() {
	Counter c1(0, 100);
	Counter c2(5, 10, 8);
	cout << "Before:\n";
	cout << "Counter 1: " << c1.getK() << "\t" << c1.getMinMax()
		<< "\nCounter 2: " << c2.getK() << "\t" << c2.getMinMax();
	
	for (int i = 0; i < 10; i++) { c1.addOne(); };
	for (int i = 0; i < 4; i++) { c2.addOne(); }; //reset

	cout << "\n\nAfter(1):\n";
	cout << "Counter 1: " << c1.getK() << "\t" << c1.getMinMax()
		<< "\nCounter 2: " << c2.getK() << "\t" << c2.getMinMax();

	c1.changeMinMax(5, 9); //leaving the definition area
	c2.changeMinMax(7, 15);

	cout << "\n\nAfter(2):\n";
	cout << "Counter 1: " << c1.getK() << "\t" << c1.getMinMax()
		<< "\nCounter 2: " << c2.getK() << "\t" << c2.getMinMax();

	return 0;
}