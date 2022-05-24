#include<iostream>
using namespace std;

int main(){
	int a,b,choice,result;
	
	cout<<"MENU\n";
	cout<<"1. add\n"<<"2. sub\n"<<"3. mul\n"<<"4. div\n"<<"5. mod\n"<<"6. to exit\n";
	bool d=true;
	while(d){
		cout<<"enter choice of your operation\n";
	    cin>>choice;
		switch(choice){
		case 1:
		    cout<<"enter two numbers\n";
	        cin>>a>>b;
			result = a+b;
			cout<<"result = "<<result<<endl;
	        continue;	 
		case 2:
			cout<<"enter two numbers\n";
	        cin>>a>>b;
			result=a-b;
			cout<<"result = "<<result<<endl;
	        continue;
		case 3:
			cout<<"enter two numbers\n";
	        cin>>a>>b;
			result=a*b;
			cout<<"result = "<<result<<endl;
	        continue;
		case 4:
			cout<<"enter two numbers\n";
	        cin>>a>>b;
			result=a/b;
			cout<<"result = "<<result<<endl;
	        continue;
		case 5:
			cout<<"enter two numbers\n";
	        cin>>a>>b;
			result=a%b;
			cout<<"result = "<<result<<endl;
	        continue;
		case 6:
			d=false;
			exit ;
		default:
			cout<<"Invalid Operator\n";
	}
	}	
	return 0;
}
