
#include <stdio.h>
#include<string.h>
#include<conio.h>
#include "head.h"
void startQuiz(){
     
    int score=0;
    char choice_option;
    char questions[3][100]={"1.what is the capital of france?","2.who created c programming language?","3.who is the father of computers?"};
    char options[3][4][100]={{"a.berlin","b.tokyo","c.paris","d.dublin"},{"a.dennis ritchie","b.b.jarne stroustrup","c.larry page","d.bill gates"},{"a.charles babbage","b.bengamin franklin","c.lady ada lovelace","d.elon musk"}};
    char correct_options[3]={'c','a','a'};
    printf("the quiz starts..\n");
    
        
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
    printf("Rank: Z - high knowledge \n");
} else if (score >= 60) {
    printf("Rank: A - mediocre\n");
} else if (score >= 40) {
    printf("Rank: B - descent\n");
} else {
    printf("Rank: C - okay \n");
} 
  printf("\nwell play better next timebye\n");
}