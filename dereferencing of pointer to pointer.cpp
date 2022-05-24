#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a=3;
	int *b=&a;
	int **c=&b;
	
	cout<<"value of a:"<<a<<endl;
	cout<<"value available at*b:"<<b<<endl;
	cout<<"value available at**c:"<<c<<endl;
	
	return 0;
}
