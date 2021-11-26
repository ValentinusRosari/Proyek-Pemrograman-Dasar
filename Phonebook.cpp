#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using std::string;

string name[50];
string mobileNum[50];
int counter = -1;
/*  Yang perlu dikembangkan lebih lanjut:
    1. Iterasi show all contact
    2. tambah fitur kode negara
    3. toleransi spasi pada input nama
    4. tampilan API 
    5. kata2 yang ramah pengguna
    6. sejauh ini flow-nya masih kurang
    7. cetak pada fail keluaran
    8. Buat program berbasis oop
*/
int validate(string tmpName){
    for (int i = 0; i <= counter; i++){
        if (name[i] == tmpName){
            return 0;
        }
    }
    return 1;
}

void addContact(){
    string tmpName = " ";
        std::cout << "Name          : ";
        std::cin >> tmpName;
        
        if(validate(tmpName) == 1){
            counter++;
            name[counter] = tmpName;
        }
        else{
            std::cout << std::endl << "This contact already exist." << std::endl;
            return;
        }
    std::cout << "Mobile Phone  : ";
    std::cin >> mobileNum[counter];
}

void showContact(int tmpCounter){
    if(name[tmpCounter] == "")
        return;
    if(counter > -1){
        std::cout << name[tmpCounter] << std::endl;
        std::cout << mobileNum[tmpCounter] << std::endl;
        getch();
    }
}

void showAll(){
    if (counter > -1){
        for (int i = 0; i <= counter; i++){
            showContact(i);
        }
    }
}

int findContact(){
    if( counter < 0 )
        return -1;
    
    string tmpName;
    std::cout << "Name          : ";
    std::cin >> tmpName;
    for(int i = 0; i <= counter; i++){
        if(name[i] == tmpName){
                return i;
        }
    }
    return 1;
}

void editContact(int tmpCounter){
    string tmpName = "";
    std::cout << "Name          : ";
    std::cin >> tmpName;

    if(validate(tmpName)){
        name[tmpCounter] == tmpName;
    }
    else{
        std::cout << std::endl << "This contact already exist." << std::endl;
        return;
    }
    
    std::cout << "Mobile Phone  : ";
    std::cin >> mobileNum[tmpCounter];
}

void deleteContact(int tmpCounter){
    name[tmpCounter] = "";
    mobileNum[tmpCounter] = "";

    std::cout << "The contact deleted successfully!";
}

int main(){
    char action;
    do{
        system("cls");
        std::cout << "WELCOME TO THE PHONEBOOK" << std::endl;
        std::cout << "========================" << std::endl;
        std::cout << "1. Add Contact" << std::endl;
        std::cout << "2. Show All Contact" << std::endl;
        std::cout << "3. Search Contact" << std::endl;
        std::cout << "4. Edit Contact" << std::endl;
        std::cout << "5. Delete Contact" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << "Choose the action: ";
        std::cin >> action;

        switch (action){
            case '1':{
                addContact();
                std::cout << "Successfully  adding contact" << std::endl;
                std::cout << "Press any key to continue" << std::endl;
                getch();
                break;
            }
            case '2':{
                showAll();
                break;
            }
            case '3':{
                int tmpCounter = findContact();
                if(tmpCounter > -1){
                    showContact(tmpCounter);
                }
                break;
            }
            case '4':{
                int tmpCounter = findContact();
                if(tmpCounter > -1){
                    editContact(tmpCounter);
                }
                break;
            }
            case '5':{
                int tmpCounter = findContact();
                if(tmpCounter = -1){
                    deleteContact(tmpCounter);
                }
                break;
            }
            case '6':{
                continue;
                break;
            }
            
        }
    }while (action != '6');

    return 0;
    
}