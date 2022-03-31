#include<iostream>
using namespace std;
class conv{
	int meter,kilometer;
	public:
		conv(int x);
		void display();
};
conv::conv(int x )
{
	int met,km;
	cout<<"basic to class conversion"<<endl;
	meter=(x*1000);
	kilometer=(x%1000);
}
void conv::display()
{
cout<<"meter="<<meter<<endl;
cout<<"kilometer="<<kilometer<<endl;
	
}
int main(){
int length;
cout<<"enter length";
cin>>length;
conv t1=length;
t1.display();
return 0;
}

