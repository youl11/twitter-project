#include <iostream>

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

void inputownerinfo() {
    std::cout << "name ";
    std::cin >> owner.name;

    std::cout << "phonenumber ";
    std::cin >> owner.phonenumber;

    std::cout << "email ";
    std::cin >> owner.email;

    std::cout << "address ";
    std::cin >> owner.address;
    std::cout << "Account ";
    std::cin >> owner.twitterAccout;

    std::cout << "eng" << std::endl;

}
int main() {
    inputownerinfo();
    std::cout << "Press any key to exit..." << std::endl;
    std::cin.ignore();
    std::cin.get();

    return 0;
}