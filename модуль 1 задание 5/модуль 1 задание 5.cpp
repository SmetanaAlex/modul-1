#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "   \n";
	cin >> a >> b;
	int **z = new int*[a];
	int* k = new int[a];
	int* d = new int[a];
	for (int i = 0; i < a;i++) {
         z[i] = new int [b];
		for (int j = 0; j < b; j++) {
			cin >> z[i][j];
     	}
	}
	/////////////////////////koeficient//////////////////////////////////////
	for (int i = 0; i < a; i++) {
		k[i] = 0;
		for (int j = 0; j < b; j++) {
			k[i] = k[i]+ z[i][j];
		}
	}
	cout << "--->" << endl;
	////////////////////////////---------------------/////////////////////////////////////
	     
	for (int i = 1; i < a; ++i) {
		for (int j = 0; j < a - i; j++) {
             if(k[j]>k[j+1])
			swap(k[j], k[j + 1]);
		}
	}
	
	//////////////////////----last------/////////////////////////////////////////////
	for (int i = 0; i < a; i++) {
       for(int j=0;j<a;j++){
		      d[j] = 0;
		   for (int f = 0; f< b; f++) {
			   d[j] = d[j] + z[j][f];
		   }
		   if (k[i] == d[j]) {
			   for (int g = 0; g < b; g++) {
				   cout<< z[j][g];
			   }
	        }
	   }
     }
}

