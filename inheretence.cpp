// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;


class BIT{
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
};

int main() {
    secondsem sem1;
	sem1.Math();
    sem1.C();
	sem1.digital();
	return 0;
}
