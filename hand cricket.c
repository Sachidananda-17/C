#include<stdio.h>
#include<stdlib.h>

int main(){

char player1[20];
int option,score;

printf("\n\t\t\t\t\t\t\tHand Cricket\n\n");
printf("1. How to play?\n");
printf("2. Exit\n\n");

printf("Choose the above options to proceed :");
scanf("%d",&option);


 if(option==1){

 printf("\n\t\t\t\t\t\t\tHOW TO PLAY\n");
  printf("\n1. Enter your name to get started.\n");
  printf("2. The game will be played against the computer.\n");
  printf("3. The player has to choose either batting or bowling from the following options.\n");
  printf("4. After the selection, the game begins.\n");
  printf("5. The player should enter the number between 1-6 for validity.\n");
  printf("6. Alternatively the computer generates a random number.\n");
  printf("7. First innings is continued untill the player/comp is out. Similarly, the second innings is continued untill the player/comp is out.\n");
  printf("8. The greater score is declared as the winner.\n\n");

 }

 else if(option==2){
   exit(0);
 }


printf("Enter your name: ");
scanf("%s", player1);


printf("\n\t\t\t\t\t\t\tWelcome %s! \n\n", player1);

  int batBowlChoice;

    printf("\nChoose 'Batting or 'Bowling'");
    printf("\n1. Batting\n");
    printf("2. Bowling\n");

    printf("\nChoice: ");
    scanf("%d", &batBowlChoice);



    if(batBowlChoice<=2){

        if(batBowlChoice==1){


        printf("%s chose to bat first",player1);

    printf("\n\n\t\t\t\t\t\tLet the game begin\n");

int k=0,m=0;
int playerScore,comp,score1=0;



    while(k==0)
 {
  printf("\n\n%s: ", player1);
  scanf("%d",&playerScore);
  comp=1 + (rand() % 6);
        printf("Computer : %d",comp);
        if(comp!=playerScore){
          if(playerScore<=6){

   score=score+playerScore;
   printf("\n\n score : %d",score);

         }

  else
  printf("\nEnter a number between 1-6");

        }
        else
        {
            printf("\n\n Out! ");
            printf("\n\n Target : %d",score + 1);

            k=1;

  printf("\n\nComputer is going to bat now");

     while(m==0)
 {


  printf("\n\n%s: ", player1);
  scanf("%d",&playerScore);
  comp=1 + (rand() % 6);
           printf("\n computer : %d \n %s   : %d",comp,player1,playerScore);
        if(comp!=playerScore){
          if(playerScore<=6){

   score1=score1+comp;
   printf("\n\n Score : %d",score1);

         }

  else
  printf("\nEnter a number between 1-6");

        }

        else{


            printf("\n\n Out! ");
            printf("\n\n Score : %d",score1);

            m=1;

             if(score<=score1){
                 printf("\n\nComputer has won the game");
                  break;
             }
               else{
                 printf("\n\n%s has won the game",player1);
                 break;
               }
 }


  }

  }


}


        }

   else{
    printf("%s chose to bowl first", player1);
    printf("\n\n\t\t\t\t\t\tLet the game begin\t\t");


    int k=0,m=0;
int playerScore,comp,score1=0;

             while(m==0)
 {


  printf("\n\n%s: ", player1);
  scanf("%d",&playerScore);
  comp=1+ (rand() % 6);
           printf("\n computer : %d \n %s   : %d",comp,player1,playerScore);
        if(comp!=playerScore){
          if(playerScore<=6){

   score1=score1+comp;
   printf("\n\n Score : %d",score1);



         }

  else
  printf("\nEnter a number between 1-6");

        }
        else
        {
            printf("\n\n Out! ");
            printf("\n\n Target : %d\n",score1 + 1);

            m=1;

  printf("\n\%s is going to bat now",player1);

        while(k==0)
 {
  printf("\n\n%s: ", player1);
  scanf("%d",&playerScore);
  comp=1 + (rand() % 6);
        printf("Computer : %d",comp);
        if(comp!=playerScore){
          if(playerScore<=6){
   score=score+playerScore;
   printf("\n\n Score : %d",score);
         }

  else
  printf("\nEnter a number between 1-6");

        }
        else
        {
            printf("\n\n Out! ");
            printf("\n\n Score : %d",score);

            k=1;
        if(score<=score1){
                 printf("\n\nComputer has won the game");
                  break;
             }
               else{
                 printf("\n\n%s has won the game",player1);
                 break;
               }
               }

}

}
}
}
   }
    }
