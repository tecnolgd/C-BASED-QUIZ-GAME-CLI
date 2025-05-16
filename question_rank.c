
#include <stdio.h>
#include "head.h"
void startQuiz(){
    
    char ch;
    int score=0;
    printf("the quiz has started..\n");
    printf("what is the capital of france\n");
    printf("a)paris ,b)spain,c)tokyp,d)shadong\n");
    printf("enter option\n");
    scanf("%c",&ch);
    
    if(ch=='a'){
        printf("correct!\n");
        score=score+10;
    }
    else 
    printf("wrong\n");
    score=0;
   if (score >= 80) {
    printf("Rank: S - Chief-level IQ 🤯\n");
} else if (score >= 60) {
    printf("Rank: A - Strong start 💪\n");
} else if (score >= 40) {
    printf("Rank: B - Decent effort 🧠\n");
} else {
    printf("Rank: C - Come back stronger 🔥\n");
} 
   
}