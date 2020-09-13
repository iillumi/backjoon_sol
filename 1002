#include <iostream>
using namespace std;

int main() {
	int size;
	int x1, y1, x2, y2, d1, d2;
	int s, r;
	int *z;
	cin >> size;
	z = new int[size]; // Dynamic allocation for storing repeated results
	for (int i = 0; i < size; i++) {
		cin >> x1 >> y1 >> d1 >> x2 >> y2 >> d2;

		s = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
		r = (d1 + d2)*(d1 + d2);

		if (x1 == x2 && y1 == y2) {
			if (d1 == d2) {  // When the coordinates and distance are the same
				z[i] = -1;
			}
			else { // When the coordinates same and distance isn't the same
				z[i] = 0;
			}
			if (d1 == 0 && d2 == 0) {
				z[i] = 1;
			}
		}
		else if (s == r || (d1 - d2)*(d1 - d2) == s) {
			z[i] = 1; //when the sum of the radii and the distance between the two branches is equal.
		}
		else if ((d1 - d2)*(d1 - d2)<s && s<r) {
			z[i] = 2; // WThe distance between the two points is less than the sum of the radii.
		}
		else { // in other cases
			z[i] = 0;
		}
	}
	//cout << "Output" << endl;
	for (int i = 0; i < size; i++) {
		cout << z[i] << endl;
	}
	delete[] z; // Return dynamically allocated memory
	return 0;
}
