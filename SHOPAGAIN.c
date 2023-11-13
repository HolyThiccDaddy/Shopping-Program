#include <stdio.h>
#include <string.h>
struct items {
    int Motorbike;
    int Gasoline;
    int Light;
};

void wallet(int money){
    printf("How much money do you have : ");
    scanf("%d", &money);
}

void program (struct items items){
    char input[20];
    int itemfound = 0;
    printf("What do you want to buy : ");
    scanf("%s",input);

    if (strcmp(input, "Motorbike") == 0){
        printf("You have bought Motorbike");
        itemfound = 1;
    }

    if (strcmp(input, "Gasoline") == 0){
        printf("You have bought Gasoline");
        itemfound = 1;
    }

    if (strcmp(input, "Light") == 0){
        printf("You have bought Light");
        itemfound = 1;
    }
    if (!itemfound){
        printf("Item not found.");
    }
}

void final_balance(struct items items){
    if
}

int main(){
    struct items items;
    items.Motorbike = 1000;
    items.Gasoline = 500;
    items.Light = 100;

    int money;
    wallet(money);
    program(items);
}
