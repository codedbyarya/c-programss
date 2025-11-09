#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address a;

    strcpy(a.name, "Arya");
    printf("Name: %s\n", a.name);

    strcpy(a.hostel_address, "UPES Hostel, Dehradun");
    printf("Present Address: %s\n", a.hostel_address);

    strcpy(a.city, "Dehradun");
    printf("City: %s\n", a.city);

    strcpy(a.state, "Uttarakhand");
    printf("State: %s\n", a.state);

    strcpy(a.zip, "248007");
    printf("ZIP: %s\n", a.zip);

    return 0;
}
