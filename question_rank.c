#include "head.h"

void startQuiz(){
     
    int score=0;
    char choice_option;
    char questions[3][100]={"1.What is the capital of France?","2.Who created C programming language?","3.Who is the father of computers?"};
    char options[3][4][100]={{"a.Berlin","b.Tokyo","c.Paris","d.Dublin"},{"a.Dennis Ritchie","b.B.Jarne Stroustrup","c.Larry Page","d.Bill Gates"},{"a.Charles Babbage","b.Benjamin Franklin","c.Lady Ada Lovelace","d.Elon Musk"}};
    char correct_options[3]={'c','a','a'};
    printf("The quiz starts🚩🚩..\n");
    
    for(int i=0;i<3;i++){
        printf("%s\n",questions[i]);
        
        for( int j=0;j<4;j++){
            printf("%s\n",options[i][j]);
        } 
        while ((getchar()) != '\n');
        scanf("%c",&choice_option);
        
        if(choice_option==correct_options[i]){
            printf("correct!\n");
            score=score+20;
        }
        else {
            printf("wrong\n");
            score=score+0;
        }

    }
       

   if (score >= 80) {
        printf("Rank: Z - Top smarty. \n");
    } else if (score >= 60) {
        printf("Rank: A - Decent fella\n");
    } else if (score >= 40) {
        printf("Rank: B - Mediocre.\n");
    } else {
        printf("Rank: C - Bad Geek. \n");
    } 

}