//This block of code consists of the logic for the quiz question generation and grading scheme and with display of rank based on total score. 
#include "head.h"

void startQuiz(){
    int score=0;
    char choice_option;
    char questions[3][100]={"1.What is the capital of France?","2.Who created C programming language?","3.Who is the father of computers?"};
    char options[3][4][100]={{"a.Berlin","b.Tokyo","c.Paris","d.Dublin"},{"a.Dennis Ritchie","b.B.Jarne Stroustrup","c.Larry Page","d.Bill Gates"},{"a.Charles Babbage","b.Benjamin Franklin","c.Lady Ada Lovelace","d.Elon Musk"}};
    char correct_options[3]={'c','a','a'};
    printf("The quiz starts..\n");
    
    for(int i=0;i<3;i++){ //loop for printing questions 
        printf("%s\n",questions[i]);
        for( int j=0;j<4;j++){
            printf("%s\n",options[i][j]);//loop for printing options
        } 
        while ((getchar()) != '\n');//removing new line
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
    
     if (score >= 70) { //ranking logic using else-if ladder
        printf("Rank: Z - Top smarty. \n");
    } else if (score >= 55) {
        printf("Rank: A - Decent fella\n");
    } else if (score >= 35) {
        printf("Rank: B - Mediocre.\n");
    } else {
        printf("Rank: C - Bad Geek. \n");
    } 
}
