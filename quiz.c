#include <stdio.h>
#include "head.h"
#include "cli.c"
#include "question_rank.c"
#include "rules.c"
 int displayMenu(int choice);
void startQuiz();
int showRules(int x);
void exitGame(){
    printf("well play better next timebye\n");
}
int main(){
  
  
  int y;
  int choice=displayMenu(1);

    switch(choice){
        
        case 1:startQuiz();
                break;        
        case 2: showRules(1);
                break;
        case 3: printf("well play better next timebye\n");
                break;
        default: printf("invalid choice.try again.");
       
                
        
    }
    
    printf("to retake quiz enter 1\nto quit,enter 0");
    scanf("%d",&y);
    if(y==1){
    startQuiz();
    } 
    return 0;

    
}
        


