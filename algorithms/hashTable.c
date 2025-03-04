#include <stdio.h>
#include <string.h>

#define TABLE_SIZE 10

char* names[TABLE_SIZE];
float prices[TABLE_SIZE];

void hashTable(int index, const char *name, float price) {
    if (index >= TABLE_SIZE) {
        printf("Error: Table overflow\n");
        return;
    }
    if (names[index] == NULL) {
        names[index] = (char*)name;
        prices[index] = price;
    } else {
        hashTable(index + 1, name, price);
    }
}

void printTable() {
    printf("Products and their prices:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (names[i] != NULL) {
            printf("%s = %.2f$\n", names[i], prices[i]);
        }
    }
}

void findPrice(const char *name) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (names[i] != NULL && strcmp(names[i], name) == 0) {
            printf("%s = %.2f$\n", name, prices[i]);
            return;
        }
    }
    printf("Product '%s' not found.\n", name);
}

int main() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        names[i] = NULL;
    }

    hashTable(0, "avocado", 1.49);
    hashTable(0, "apple", 0.67);
    hashTable(0, "milk", 1.49);

    printTable();

    char query[20];
    printf("\nEnter product name to search: ");
    scanf("%19s", query);

    findPrice(query);

    return 0;
}