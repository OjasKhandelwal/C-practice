#include <stdio.h>
#include <string.h>
int main() {
    char place[100];
    int count = 0;
    printf("place:");
    scanf("%s" , &place);
    int len = strlen(place);
    printf("length of the string: %d \n" , len);
    for(int i = 0 ; place[i] !='\0' ; i++){
        if(place[i] == 'a' || place[i] == 'A' ){
            count++;
        }
    }
    printf("no. of times 'a' occurs in this string: %d" , count);
    return 0;
}