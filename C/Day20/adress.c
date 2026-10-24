#include<stdio.h>
#include<string.h>
struct adress{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
int main(){
    struct adress adds[5];
    printf("enter info for person 1\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);
    printf("enter info for person 2\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);
    printf("enter info for person 3\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);
    printf("enter info for person 4\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].state);
    scanf("%s", adds[0].city);
    printf("enter info for person 5\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);



    return 0;
}
void printAdd(struct adress add){
    printf("adress is: %d, %d, %s, %s\n", add.houseNo, add.block, add.city,add);
}