
#include <stdio.h>
#include<string.h>
#include "head.h"
void startQuiz(){
    
    int i=0,j=0;
     
    int score=0;
    char choice_options[4];
    char questions[3]={"1.what is the capital of france?","2.who created c programming language?","3.who is the father of computers?"};
    char options[4][3]={{"1.berlin","2.tokyo","3.paris","4.dublin"},{"1.dennis ritchie","2.b.jarne stroustrup","3.larry page","4.bill gates"},{"1.charles babbage","2.bengamin franklin","3.lady ada lovelace","4.elon musk"}};
    char correct_options[3]={"3","1","1"};
    printf("the quiz has started..\n");
    while(i<4){
        printf("%s\n",questions[i]);
        for(int i=0;i<4;i++){
            for( j=0;j<5;j++){
         printf("%s\n",options[i][j]);
         
        scanf("%s",&choice_options[j]);
             } }
        
    
     
    if(choice_options[j]==correct_options[j]){
        printf("correct!\n");
        score=score+20;
    }
    else {
    printf("wrong\n");
    score=score+0;
    }
    i++;
}

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