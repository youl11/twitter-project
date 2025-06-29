#include <iostream>

void runOwnerMenu();
void runContactMenu();

struct ownerinfo {
    char name[20];
    char phonenumber[13];
    char email[30];
    char address[50];
    char twitterAccout[20];
};

struct ContactInfo {
    char name[20];
    char phoneNumeber[13];
    char email[30];
    char address[50];
};
ownerinfo owner;
ContactInfo contacts[100];
int contactnumber = 0;

void inputownerinfo() 
{
    std::cout << "name: ";
    std::cin >> owner.name;

    std::cout << "number: ";
    std::cin >> owner.phonenumber;

    std::cout << "email: ";
    std::cin >> owner.email;

    std::cout << "owner address: ";
    std::cin >> owner.address;
    std::cout << "twitterAccount: ";
    std::cin >> owner.twitterAccout;

    std::cout << "your input is complete" << std::endl;

}

void outputOwnerinfo () 
   {
    std::cout << "owner name:" << owner.name << std::endl;
    std::cout << "owner phon number" << owner.phonenumber << std::endl;
    std::cout << "owner email" << owner.email << std::endl;
    std::cout << "owner adddress" << owner.address << std::endl;
    std::cout << "owner twitterAccount" << owner.twitterAccout << std::endl;
}

void addContact() {
    std::cout << "contact name";
    std::cin >> contacts[contactnumber].name;

    std::cout << "contact phonenumber: ";
    std::cin >> contacts[contactnumber].phoneNumeber;

    std::cout << "contact email";
    std::cin >> contacts[contactnumber].email;

    std::cout << "contact address: ";
    std::cin >> contacts[contactnumber].address;
    
    contactnumber++;
    std::cout << "your input is complete" << std::endl;

}

void outputContactList() {
    int i;

    for (i = 0; i < contactnumber; i++) {
        std::cout << i << ":" << contacts[i].name << std::endl;
    }
}

void runMainMenu() {
    int menuNum;

    do {
        std::cout << "1.owner management function" << std::endl;
        std::cout << "2.contact information management function" << std::endl;
        std::cout << "3.program exit" << std::endl;
        std::cin >> menuNum;


        switch (menuNum)
        {
        case 1:
            runOwnerMenu();
            break;
        case 2:
            runContactMenu();
            break;
        case 3:
            std::cout << "program is exiting" << std::endl;
            break;
        default:
            std::cout << "You have entered incorrectly. Please try again." << std::endl;

        }
    } while (menuNum == !3);
}

void runOwnerMenu() {
    int menuNum;

    do {
        std::cout << "1.enter owner information" << std::endl;
        std::cout << "2.owner information inquiry" << std::endl;
        std::cout << "3.previous screen" << std::endl;
        std::cin >> menuNum;

        switch (menuNum)
        {
        case 1:
            inputownerinfo();
            break;

        case 2:
            outputOwnerinfo();
            break;
        case 3:
            std::cout << "back to previous screen" << std::endl;
            runMainMenu();
            break;
        default:
            std::cout << "you have entered the information incorrectly, pleas try agian" << std::endl;

        }
    } while (menuNum != 3);
}

void runContactMenu() {
    int menuNum;

    do {
        std::cout << "1.Add contact information" << std::endl;
        std::cout << "2.contact list inquiry" << std::endl;
        std::cout << "3.previous screen" << std::endl;
        std::cin >> menuNum;

        switch (menuNum)
        {
        case 1:
            addContact();
            break;
        case 2:
            outputContactList();
            break;
        case 3:
            std::cout << "Returning to previous screen" << std::endl;
            runMainMenu();
            break;
        default:
            std::cout << "You have entered incorrectly" << std::endl;
         

        }

    } while (menuNum != 3);
}

int main() {
    runMainMenu();
    return 0;

}