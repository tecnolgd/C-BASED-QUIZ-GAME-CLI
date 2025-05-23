#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#include "cli.c"
#include "question_rank.c"
#include "rules.c"
int x,back;
 int displayMenu(int x);
void startQuiz();
void showRules();

void exitGame(){
    printf("well play. better next timebye\n");
}
int main(){
  
  
  int y;

 
   int choice=displayMenu(choice);
  
    switch(choice){
        
        case 1:startQuiz();
                break;
            
        case 2: do{
        showRules();
        }
        while(back==1);
        break;

        
        
                
        case 3: printf("bye  bye\n");
                exit(0);
        default: printf("invalid choice.try again.");
       
                
        
    }
    
    printf("to retake quiz enter 1\nto quit,enter 0");
    scanf("%d",&y);
    if(y==1){
    startQuiz();
    } 
    return 0;

    
}
        


