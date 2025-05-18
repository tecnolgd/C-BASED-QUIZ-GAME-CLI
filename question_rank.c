
#include <stdio.h>
#include "head.h"
void startQuiz(){
    
    int x;
    int score=0;
    printf("the quiz has started..\n");
    printf("what is the capital of france\n");
    printf("1)paris ,2)spain,3)tokyp,4)shadong\n");
    
    printf("enter option\n");
    scanf("%d",&x);
    
    if(x== 1){
        printf("correct!\n");
        score=score+10;
    }
    else 
    printf("wrong\n");
    score=0;
   if (score >= 80) {
    printf("Rank: S - high knowledge \n");
} else if (score >= 60) {
    printf("Rank: A - mediocre\n");
} else if (score >= 40) {
    printf("Rank: B - descent\n");
} else {
    printf("Rank: C - okay \n");
} 
   
}