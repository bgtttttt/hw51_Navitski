#include <iostream>
#include <string>

using namespace std;

class Point2D {
private:
	int x;
	int y;
public:
	Point2D(int xPoint, int yPoint) : x(xPoint), y(yPoint) {};
	void changeCoord(int newX, int newY) {
		x = newX; y = newY;
	}

	string getCoord() {
		return "(" + to_string(x) + ";" + to_string(y) + ")";
	}

	string whichQuarter() {
		if (x > 0 && y > 0) {
			return "First quarter";
		}
		else if (x < 0 && y > 0) {
			return "Second quarter";
		}
		else if (x < 0 && y < 0) {
			return "Third quarter";
		}
		else if (x > 0 && y < 0) {
			return "Fourth quarter";
		}
		else {
			return "Not in any quarter";
		}
	}
};

int main() {
	Point2D p1(5, 5);
	Point2D p2(-1, 4);
	cout << "Before:\n";
	cout << "Point 1: " << p1.getCoord() << "   Quarter: " << p1.whichQuarter()
		<< "\nPoint 2: " << p2.getCoord() << "   Quarter: " << p2.whichQuarter() << "\n";

	p1.changeCoord(-1, -1);
	p2.changeCoord(0, 0);

	cout << "\nAfter:\n";
	cout << "Point 1: " << p1.getCoord() << "   Quarter: " << p1.whichQuarter()
		<< "\nPoint 2: " << p2.getCoord() << "   Quarter: " << p2.whichQuarter() << "\n";

	return 0;
}