#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <stdlib.h>

using std::string;

class PhoneContact{
    private:
        string fName;
        string lName;
        string mobNum;
    public:
        PhoneContact(){}
        void print(PhoneContact * contact, int count);
        void setAll(PhoneContact contact[], float percent, int count);
};

void PhoneContact::print

int main()
{
    PhoneContact Contact[100];
    PhoneContact c;
    int count=0;
    int status=0;
    string fName, lName, mobNum;
    while()
    {
        cout<<"1. Add New Contact\n";
        cout<<"2. Show Contact\n";
        cout<<"3. Show All Contact\n";
        cout<<"4. Find Contact\n";
        cout<<"5. Edit Contact\n";
        cout<<"6. Delete Contact\n";
    }
}