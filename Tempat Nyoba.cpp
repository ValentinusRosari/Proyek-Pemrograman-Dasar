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
    int action=0;
    string fName, lName, mobNum;
    while(action!= 6)
    {
        cout<<"1. Add New Contact\n";
        cout<<"2. Show All Contact\n";
        cout<<"3. Find Contact\n";
        cout<<"4. Edit Contact\n";
        cout<<"5. Delete Contact\n";
        cout<<"6. Exit\n";

        cin>>action;

        switch(action)
        {
            case 1:{
                addContact();
                cout<<"Succesfully added contact!";
                getch();
                break;
            }

            case 2:{
               showAll();
                break;
            }

            case 3:{
                int tmpCounter = findContact();
                if(tmpCounter > -1){
                    showContact(tmpCounter);
                }
                break;
            }

            case 4:{
                int tmpCounter = findContact();
                if(tmpCounter > -1){
                    editContact(tmpCounter);
                }
                break;
            }

            case 5:{
                int tmpCounter = findContact();
                if(tmpCounter = -1){
                    deleteContact(tmpCounter);
                }
                break;
            }

            case 6:{
                continue;
                break;
            }
        }
    }
    return 0;
}
