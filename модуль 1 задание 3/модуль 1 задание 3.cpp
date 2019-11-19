

#include <iostream>
using namespace std;
void delete_proc(char s[], char t[],int size);
int main()
{ 

 int size = 256;
 char  t[256],s[256];

 cout << "Enter line - t " << endl;
 cin.getline(t, size);
 cout << "Enter line - s" << endl;
 cin.getline(s, size);
 delete_proc(s,t ,size);
 cout << "Else -->" ;
 for (int l = 0; l < strlen(s); l++) { cout << s[l]; }
}
 void delete_proc(char s[],char t[],int size){
	 for (int i = 0; i < strlen(t); i++) {
		 for (int j = 0; j < strlen(s); j++) {
			 if (s[j] == 32) { j++; }
			 if (s[j] ==t[i] )
			 {
				
				 for (int k = j; k < size; k++) {
					 s[k] = s[k + 1]; 
				 }
               
			 }

		 }
	 }

}
 
