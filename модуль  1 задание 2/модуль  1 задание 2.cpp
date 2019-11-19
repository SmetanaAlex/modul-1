

#include <iostream>
using namespace std;

struct point {

	int x;

	int y;

};



struct treug {

	point a;

	point b;

	point c;

};
float dist(point a, point b) { return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2)); }
bool prtr(treug t) {

	if ((pow (dist (t.a, t.b), 2) + pow(dist(t.b, t.c), 2) == pow(dist(t.c, t.a), 2)) || (pow(dist(t.b, t.c), 2) + pow(dist(t.c, t.a), 2) == pow(dist(t.a, t.b), 2)) || (pow(dist(t.c, t.a), 2) + pow(dist(t.a, t.b), 2) == pow(dist(t.b, t.c), 2)))return true;

	else return false;

}
void Prtr(int n, int m)

{
	if (n <= 0) {
		cout << "Eto tak ne rabotaet";
		return;
	}
	treug* Tr = new treug[n];

	for (int i = 0; i < n; ++i) {
		if (m == 0) {
			cout << "Eto tak ne rabotaet";
			return;
		}
	

		Tr[i].a.x = rand() % (2 * m) - m;

		Tr[i].a.y = rand() % (2 * m) - m;

		Tr[i].b.x = rand() % (2 * m) - m;

		Tr[i].b.y = rand() % (2 * m) - m;

		Tr[i].c.x = rand() % (2 * m) - m;

		Tr[i].c.y = rand() % (2 * m) - m;

	}

	cout << "Show us right triangolas (if there are some):\n";

	cout << endl;

	int count = 0;

	for (int i = 0; i < n; ++i) {

		if (prtr(Tr[i])) {

			cout << "Triangola:\n";

			cout << "A = " << "(" << Tr[i].a.x << ", " << Tr[i].a.y << ")" << endl;

			cout << "B = " << "(" << Tr[i].b.x << ", " << Tr[i].b.y << ")" << endl;

			cout << "C = " << "(" << Tr[i].c.x << ", " << Tr[i].c.y << ")" << endl;

			cout << endl;

		}

	}

	cout << endl;

	cout << "That's all right triangolas!\n";

	delete[] Tr;

}



void main()

{

	int n, m;

	cout << "Enter the number of triangolas: ";

	cin >> n;

	cout << "Enter max coordinate (integer): ";

	cin >> m;

	Prtr(n, m);

	cout << endl;
}

