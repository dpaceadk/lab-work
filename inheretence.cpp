// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;


class BIT{
	protected:
		int x;
     public:
    void Math() {
        cout << "maths is hard" << endl;
    }
    void C() {
        cout << "c is intresting" << endl;
    }

};


class secondsem : public BIT {
       public:
    void digital() {
        cout << "i dont know logic" << endl;
    }
    void getdata(int y)
    {
    	x=y;
    	cout<<"The value of x in base class is "<<x<<endl;
	}
};

int main() {
    secondsem sem1;
	sem1.Math();
    sem1.C();
    sem1.getdata(10);
	sem1.digital();
	return 0;
}
