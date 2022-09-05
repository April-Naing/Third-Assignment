//created by April Naing on 2/9/22
#include <stdio.h>

void detail();
int booking();
void invoice();
 char name[100];
   int moviec=0;
   int phno;
   int* ptr;
   int mt=0;
   int qty=0;
   int fc=0;
   int cls=0;

int main(){
    int a=0;
    int choice=0;
    int exit=0;

    while(a==0){
    printf("\n--------Welcome to Online Movie Ticket Booking-------\n\n\n");
    printf("1.Movie Detail\n");
    printf("2.Ticket Booking\n");
    printf("3.Invoice\n");

    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice){
    case 1:
       detail();
    break;

    case 2:
       booking();
    break;

    case 3:
       invoice();
    break;

    default:
       printf("Wrong choice!!");
    break;
}
    printf("\nThank You.\n");
    printf("If you want to exit,press 2:");
    scanf("%d",&exit);
    if(exit==2){
    break;}

    }

return 0;
}
void detail(){
    printf("\n-----Movie Time-----\n\n");
    printf("12pm  /  3pm   /  7pm");


    printf("\n\n-----Now Playing Movies-----");
    printf("\n\nCode.1.The Invitation    -  1 HR 44 MIN\n");
    printf("Code.2.Beast             -  1 HR 33 MIN\n");
    printf("Code.3.Bullet Train      -  2 HR  6 MIN\n");
    printf("Code.4.Top Gun           -  2 HR 11 MIN\n");
    printf("Code.5.Dragon Ball Super -  1 HR 40 MIN\n");

    printf("\nYou can book ticket by not exiting.\n");
}

int booking(){
   ptr = &phno;

   printf("\nTo booking,pls fill these:\n\n");

   printf("Enter your first name:");
   scanf(" %s",&name);

   printf("\nEnter your ph-num:");
   scanf("%d",&phno);

   printf("Your ph-num is %d\n\n",*ptr);

   printf("Enter movie code:");
   scanf("%d",&moviec);

   if(moviec<6){
      printf("Movie code is %d\n",moviec);
   }else{
      printf("Wrong code.Code is (1 to 5).You can check in movie detail.\nEnter movie code again:");
      scanf("%d",&moviec);}


   printf("\nChoose movie time(12pm,3pm,7pm):");
   scanf("%d",&mt);

   printf("\nThere are three class.\n1.Gold class    -  10000kyats\n2.Silver class  -  8000kyats\n3.Normal class  -  5000kyats\n");
   printf("Enter your class choice:");
   scanf("%d",&cls);

   printf("Enter the quantity of ticket:");
   scanf("%d",&qty);

   if(cls==1){
      fc=10000*qty;
      printf("\nThe total cost is %d kyats\n\n",fc);
      }else if(cls==2){
      fc=8000*qty;
      printf("\nThe total cost is %d kyats\n\n",fc);
      }else if(cls==3){
       fc=5000*qty;
      printf("\nThe total cost is %d kyats\n\n",fc);
      }else{
      printf("Wrong input!!");}

      printf("You can check invoice for your booking in main page by not exiting.\n");
return 0;
}

void invoice(){
    ptr=&phno;
    printf("\n***Invoice***\n\n");

    printf("Name        -   %s\n",name);
    printf("Ph-no       -   %d\n",*ptr);
    printf("Movie code  -   %d\n",moviec);
    printf("Movie time  -   %d pm\n",mt);
    printf("Ticket      -   %d ticket\n",qty);
    printf("Total Cost  -   %d kyats\n",fc);
}

