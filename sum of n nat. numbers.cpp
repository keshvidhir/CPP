#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){


 int n,sum=0;
    cout<<"enter number till which you would like to add";
    cin>>n;
    while(n>0)
    {
    	sum+=n;
    	n--;
	}
	cout<<"\n sum is: "<<sum;
	return 0;
}
