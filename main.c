#include <stdio.h>
#include <stdlib.h>

int main()
{//gussing the right answer

int correcct;//how many coreect answer
    char question[][1300]={"1-how manny letter i",
                       "2-what 4*4?",
                       "3-how many letter in arabic alphabet?"

};
char answers[][10]={
                    "A-1","B-0","C-2",
                    "A-14","B-16","C-18",
                    "A-27","B-26","C-28"
                    };
char correct[]={'A','B','C'};
int a=sizeof(answers)/sizeof(answers[0]);//number of answers
int b=sizeof(question)/sizeof(question[0]);//number of question
int c=sizeof(correct)/sizeof(correct[0]);
char choice;
//printf("%d",a);
//printf("%s",answers[1]);
  for(int i=0;i<c;i++){
        printf("%s\n",question[i]);
    for(int j=i*3;j<(c+(i*c));j++){

printf("%s\n",answers[j]);




    }

printf("what is the correct answer:");
scanf(" %c",&choice);
choice=toupper(choice);
if(choice==correct[i]){

    printf("CORRECT");
    correcct++;
}else {printf("wrong!!");}
printf("\n*********************\n");



  }

  printf("your score is %d/%d",correcct,b);

    return 0;
}
