 //Create a program to Based on a student's score, categorize as  "High", "Moderate", or "Low" using the ternary operator

#include <stdio.h>
int main() {
    int score;
    printf("score:");
    scanf("%d" , &score);
    const char* grade = (score>85)? "high": (score<85 && score>70)? "moderate" :"low" ;
    //     pointer      (condn 1)? "pit":                      (condn2)? "pit": last condn , type of else.....pit = print if true       
    printf("grade: %s " , grade);
    
    return 0;
}