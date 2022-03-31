#include<iostream>
using namespace std;
class Time{
	int hour,minute,second;
	public:
		Time(int x);
		void display();
};
Time::Time(int x )
{
	int hrs,min,sec;
	cout<<"basic to class conversion"<<endl;
	hour=(x/3600);
	minute=(x%3600)/60;
	second=(x%3600)%60;
}
void Time::display()
{
cout<<"hours="<<hour<<endl;
cout<<"minutes="<<minute<<endl;
cout<<"second="<<second<<endl;	
}
int main(){
int duration;
cout<<"enter duration";
cin>>duration;
Time t1=duration;
t1.display();
return 0;
}

