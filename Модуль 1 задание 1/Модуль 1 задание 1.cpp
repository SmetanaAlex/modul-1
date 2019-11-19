#include <cmath>
#include <iostream>
using namespace std;
long int  d=1;
long int fact(int i, long int  d);
int main()
{
	double rez = 0, cuz = 1, eps,t;
	eps = 0.000001;
	bool flag = true;
	int i = 1;
	do { cuz = pow (-1, i) ;
		  cuz = cuz * (i + 1);
		  cuz = cuz / fact(i,d);
			rez =rez+ cuz;
			i++;
	} while (abs(cuz) >= eps);
	
	cout << rez;
}
long int fact (int i, long int  d) {
	for (int j = 1; j < i; j++) {
		d = d * j;
	}
	return d;
}
