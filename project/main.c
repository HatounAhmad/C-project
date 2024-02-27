#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

char menu_option;
bool b=true;
static int counter=0;


void menu();
void rock_paper();
void books();
void songs();
void quizes();
int generateRandomNumber(int n);
int greater(char c1, char c2);
void borrowOrPurchase(int a);
void start();
void help();
int main (void)
{
   menu();

}

void menu(){

   while(b==true){
  system("cls");

     printf("           WELCOME !! WHAT ARE LOOKUNG FOR TODAY?\n");
    printf("--------------------------------------------------------\n\n");
    printf("\n-----------Main Menu-----------\n");
    printf("\ta. GAMES/Quizes\n");
    printf("\tb. GAMES/ROCK PAPER SCISSORS\n");
    printf("\tc. BOOK LIBRARY \n");
    printf("\td. SONGS RECOMENDATIONS\n");
    printf("\tPlease enter an option from the main menu: ");
    scanf("%c",&menu_option);

    switch(menu_option){

    case 'a':
        quizes();

        break;
    case 'b':
       rock_paper();

        break;
    case'c':
       books();
        break;
    case'd':
       songs();
        break;
    default:
        printf("invalid input");break;
    }

}

}

void songs(){
    int genre;
     printf("\n\n\t\t\t   DO YOU LOOK FOR SOME GOOD MUSIC ?\n");
    printf("\t\t-----------------THIS IS THE RIGHT PLACE !!-----------------\n\n");

printf("\n\n>>>>SELECT SONG genre :\n");
printf("\n\t1:METAL.\n\t2:ROCK\n\t3:JAZZ\n\t4:POP\nor enter -1 to exit\n");
   scanf("%d",&genre);
   switch(genre){
   case 1:printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");
          printf("\n\tnew releases                  \tSONG:ZUNG ARTIST(Till lindemann)\n\tnew releases"
                 "    \t\tSONG:Charlatan ARTIST(Marduk)\n\t popular                     \tSONG:Pneuma ARTIST(TOOL)"
                 "\n\t popular                    \tSONG:CIRICE ARTIST(Ghost)\n");
   break;
   case 2 :printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");
          printf("\n\tnew releases                  \tSONG:Rockstar ARTIST(The struts)\n\tnew releases"
                 "    \t\tSONG:Angry ARTIST(The Rolling Stones)\n\t popular                     \tSONG:HOLIDAT ARTIST(Turnstile)"
                 "\n\t popular                    \tSONG:BLACK SUMMER(Red Hot Chili Pepperes)\n");
   break;
   case 3:printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");
          printf("\n\tnew releases                  \tSONG:Promise ARTIST(Luafey)\n\tnew releases"
           "            \tSONG:All I see in you ARTIST(Most Iverson)\n\tnew releases             \tSONG:Someone Like You ARTIST(Samara Joy)"
                 "\n\tnew releases            \tSONG:WELLLL ARTIST(Jacob Collier)");
    break;
    case 4:printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");
          printf("\n\tpopular                  \tSONG:Crel Summer ARTIST(Taylor Swift)\n\tpopular"
                 "    \t\t   SONG:Dance The Night ARTIST(Dua Lipa)\n\tpopular                     \tSONG:Anti-Hero ARTIST(Taylor Swift)"
                 "\n\tpopular                    \tSONG:Flowers(Miley Cyrus)\n");
   break;
  default:printf("\nPlease select number from the list, you just entered invalid number\n");
}


puts("\n\n\t Press any letter to go to home page or press N to exit ");

        if(toupper(getch()=='N'))
	    {
	         b=false;
             exit(1);
        }
}




void borrowOrPurchase(int a){
    if(a==1){
int day;
printf(">>>>here the time table of the period allowed to borrow a book:\n");
printf("\n\t1:one week.\n\t2:10 days\n\t3:two weeks\t\nor enter -1 to exit\n");
   scanf("%d",&day);
   switch(day){
   case 1:printf("~Dear customer,the period you have chosen is one week.period start from Tuesday 12-9-2023 until 19-9-2023.\n~THANK YOU");break;
   case 2 :printf("~Dear customer,the period you have chosen is 10 days.period start from Tuesday 12-9-2023 until  22-9-2023.\n~THANK YOU");break;
   case 3:printf("~Dear customer,the period you have chosen is two weeks.period start from Tuesday 12-9-2023 until 26-9-2023.\n~THANK YOU");break;
  default:printf("~Dear customer, you did not chose any period\n");}}
  else
  if(a==2){
        int coupon=2023,userCoup;
    printf("Dear customer, you can see the price on the information of the book.\nif you have a Coupon enter the coupon number or enter -1.\n\n");
    scanf("%d",&userCoup);
     if(coupon==userCoup)

        printf("\t\t\"IT'S THE CORRECT COUPON\",you get a 10 \%% DISCOUNT\n");
        else
            if(userCoup==-1){
            printf("\t\tDear customer THANK YOU for your purchase.\n");}
        else
            printf("\aUnfortunately,it seems that the coupon does not match with the coupon we have.\nTHANK YOU");
            }

}



void books(){
      system("cls");

    printf("\n\n\t\t\t   DO YOU LOOK FOR SOME BOOKS ?\n");
    printf("\t   -----------------THIS IS THE RIGHT PLACE !!-----------------\n\n");
    {
   int numofbook,i,bookCategories,selfBooks,computerBooks,businessBooks,customerChose,*ptr;
   //To count number of books  you have chosen

   char customerName[12];

   printf("\n\t********  Welcome to my simple library  ********\n");
   printf("\n");
   printf("Dear customer please write your first name :");
   scanf("%s",customerName);
   printf("\n\t^ Dear %s we glad to serve you!.\n\n",customerName);
   printf(" %s How many books do you want?\t\n",customerName);
   scanf("%d",&numofbook);
   for(i=1;i<=numofbook;i++){
    printf("\n please choose category from the list below:\nEnter 1:for Self Development.\nEnter 2:for Computer&Technology.\nEnter 3:for Business & Management.\n or Enter -1 to exit\n");
    scanf("%d",&bookCategories);
     ptr=&bookCategories;
    if(*ptr==-1)
        break;
    else
    if(*ptr==1){
        printf("\n-------Self Development-------\n choose the book you want from the list:\n1:Who Says You Can't. You Do.\n2:Outliers - The Story of Success.\n3:Give And Take.\n\n");
        scanf("%d",&selfBooks);
        switch(selfBooks){
        case 1:printf("\t\tName:Who Says You Can't. You Do.\n\t\tAuthor:Daniel Chidiac.\n\t\t year published:2018.\n\t\t price:89 SR.\n\t\tNumber of pages:368\n\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        case 2:printf("\t\tName:Outliers - The Story of Success.\n\t\tAuthor:Malcolm Gladwell.\n\t\t year published:2009.\n\t\t price:61 SR.\n\t\tNumber of pages:320.\n\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        case 3:printf("\t\tName:Give And Take.\n\t\tAuthor:Adam Grant.\n\t\t year published:2014.\n\t\t price:55 SR.\n\t\tNumber of pages:380.\n\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        default:printf("\t\t*you did not choose any book*\n");

        }



    }
  else
  if(*ptr==2){
     printf("\n-------COMPUTER&TECHNOLOGY-------.\n choose the book you want from the list:\n 1:C++ PROGRAMMING LANGUAGE.\n 2:ORACLE DATABASE 12C.\n 3:COMPUTER SYSTEM ARCHITECT.\n\n");
        scanf("%d",&computerBooks);
        switch(computerBooks){
        case 1:printf("\t\tName:C++ programming language.\n\t\tAuthor:Scott Smith.\n\t\t year published:2019.\n\t\t price:55 SR.\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        case 2:printf("\t\tName:Oracle database 12C release 2.\n\t\tAuthor:Richard Niemiec.\n\t\t year published:2017.\n\t\t price:159.04 SR.\n\t\tNumber of pages:848.\n\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        case 3:printf("\t\tName:Computer Architect.\n\t\tAuthor:M.Morris Mano.\n\t\t year published:1998.\n\t\t price:228.58 SR.\n\t\tNumber of pages:524.\n\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        default:printf("\t\t*you did not choose any book*\n");

        }


  }
else
    if(*ptr==3){
     printf("\n-------Business & Management-------.\n choose the book you want from the list:\n 1:The Science of Selling - Proven Strategies to Make Your Pitch.\n 2:Think & Grow Rich.\n 3:Start With Why.\n");
        scanf("%d",&businessBooks);
        switch(businessBooks){
        case 1:printf("\t\tName:The Science of Selling - Proven Strategies to Make Your Pitch.\n\t\tAuthor:David Hoffeld.\n\t\t year published:2016.\n\t\t price:109 SR.\n\t\tNumber of pages:278.\n\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        case 2 :printf("\t\tName:Think & Grow Rich.\n\t\tAuthor:Napoleon Hill.\n\t\t year published:1989.\n\t\t price:49 SR.\n\t\tNumber of pages:256.\n\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        case 3:printf("\t\tName:Start With Why.\n\t\tAuthor:Simon Sinek.\n\t\t year published:2011.\n\t\t price:59 SR.\n\t\tNumber of pages:256.\n\n");
        printf("\nDear %s do you want to borrow or buy this book? \n 1 for borrow and 2 for purchase\n",customerName);
        scanf("%d",&customerChose);
        borrowOrPurchase(customerChose);
        counter++;
        break;
        default:printf("\t\t*you did not choose any book*\n");

        }


}
else
      printf("\t\t*you did not choose any category*\n");
    printf("\n\n********************************************************\n");
   printf("********************************************************\n");
   printf("********************************************************\n\n");

}printf("\ndear %s YOU have chosen %d book(s)\n",customerName,counter);
}


puts("\n\n\t Press Y to go back to main menu or press N to exit ");

        if(toupper(getch()=='N'))
	    {
	         b=false;
             exit(1);
        }
        else if(toupper(getch()=='Y')){
            menu();
        }


}



void rock_paper(){

  int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("\n\n\tWelcome to the Rock Paper Scissors\n");
    printf("\t----------------------------------\n\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player input
        printf("\n\t--------------this is round %d --------------\nPress 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n",i);
        printf("\tPlayer's turn: ");
        scanf("%d", &temp);
        getchar();
        if(temp==1 ||temp==2 ||temp==3){

        playerChar = dict[temp - 1];
        printf(" -----------------\n");
        printf("| You choose: %c   |\n", playerChar);
        printf(" -----------------\n\n");
        //computer generate
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
        printf("\tComputer's turn\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf(" --------------------\n");
        printf("| Computer choose: %c |\n", compChar);
        printf(" --------------------\n\n");
        // compater character and increment the score
        if (greater(compChar, playerChar) == 1)
        {
            compScore++;
            printf("\t\tComputer Got It!\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore++;
            playerScore++;
            printf("\t\tIt's a draw. Both got 1 point!\n\n");
        }
        else
        {
            playerScore++;
            printf("\t\tYou Got It!\n\n");
        }
        printf(" -------------\n");
        printf("| You: %d      |\n", playerScore);
        printf("| Computer: %d |\n", compScore);
        printf(" -------------\n\n");
        printf("######################################################\n\n");

    printf(" -----------------\n");
    printf("|   Final Score   |\n");
    printf(" -----------------\n");
    printf("|  You | Computer |\n");
    printf("|------|----------|\n");
    printf("|   %d  |    %d     |\n", playerScore, compScore);
    printf(" -----------------\n\n");
    // compare score
    if (playerScore > compScore)
    {
        printf("\n\t -------------------\n");
        printf("\t| You Win the match |\n");
        printf("\t -------------------\n");
    }
    else if (playerScore < compScore)
    {
        printf("\n\t ------------------------\n");
        printf("\t| Computer Win the match |\n");
        printf("\t ------------------------\n");
    }
    else
    {
        printf("\n\t -------------\n");
        printf("\t| It's a draw |\n");
        printf("\t -------------\n");
    }}
    else {
         printf("\ninvalid input\n");
    exit(0);
    }}

    puts("\n\n\t Press Y to go back to main menu or press N to exit ");

        if(toupper(getch()=='N'))
	    {
	         b=false;
             exit(1);
        }
        else if(toupper(getch()=='Y')){
            menu();
        }



}

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}


int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}



void quizes(){
    int choice = 0;
     system("cls");

     printf("\n\t\t****************************************");

     printf("\n\t\t\t   WELCOME TO QUIZ GAME");

     printf("\n\t\t****************************************");
     printf("\n\t\t****************************************");
     printf("\n\t\t Enter 1 to start the game");
     printf("\n\t\t Enter 2 for help             ");
     printf("\n\t\t Enter 3 to exit             ");

     printf("\n\t\t****************************************\n\n");

      scanf( "%d", &choice );
       switch(choice)
    {
        // in order to start the game
        case 1:
        start();
        break;

        // in order to seek help
        case 2:
        help();
        break;

        // in order to exit
        default:
        exit(1);
    }


}
void start(){
    int r,count,i;
    game:
   count=0;
     for(i=1;i<=10;i++)
     {
                       system("cls");
                       r=i;

     switch(r)
     {
		case 1:
		printf("\n\nWhat number is one quarter of one tenth of one fifth of 200?");
		printf("\n\nA.20\t\tB.10\n\nC.1\t\tD.25");
		if (toupper(getch())=='C')
		{
                                  printf("\n\nCorrect!!!\n 1. One fifth (1 / 5) of 200 = 0.2 x 200 = 40. One tenth (1 / 10) of 40 = 0.1 x 40 = 4. One quarter (1 / 4) of 4 = 0.25 x 4 = 1.\n");
                                  count++;getch();
			                      break;

         }


        else
        {
                                  printf("\n\nWrong!!! The correct answer is C");
                                  getch();
		                          goto score;
		                          break;
        }


    	case 2:
		printf("\n\n\nWhat kind of file extension .mpg?,");
		printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
			        break;
         }


    	else
        {
                    printf("\n\nWrong!!! The correct answer is A.Movie file");
                    getch();
	                goto score;
		            break;
	     }

        case 3:
		printf("\n\n\nA, B, D, G, K. Which letter comes next in the sequence? ");
		printf("\n\nA.N\t\tB.Y\n\nC.W\t\tD.P");
		if (toupper(getch())=='D')
		{
                     printf("\n\nCorrect!!!\nThe sequence increments by one with each letter. The 5th letter after K is P.");
                     count++;
                     getch();
			         break;
                     }
		else
	    {
                    printf("\n\nWrong!!! The correct answer is D");
                    getch();
		            goto score;
		            break;
                    }

        case 4:
		printf("\n\n\nWho is he founder of facebook?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if (toupper(getch())=='A')
		{
                                  printf("\n\nCorrect!!!");
                                  count++;
                                  getch();
			                      break;
                                  }

        else
        {
                printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
                getch();
       	        goto score;
		        break;
		       }


        case 5:
		printf("\n\n\nWhich of he following is a web browser?");
		printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");
		if(toupper(getch())=='B')
		{
                                 printf("\n\nCorrect!!!");
                                 count++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is B.Netscape navigator");
		       getch();
		       goto score;
		       break;
		       }

        case 6:
		printf("\n\n\n144, 233, 377, 610, ____, 1597, 2584. What is the missing number?");
		printf("\n\nA.987 \t\tB.1110\n\nC.961\t\tD.NONE");
		if (toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!\n987. By definition, the first two Fibonacci numbers are 0 and 1, and each subsequent \nnumber is the sum of the previous two.");
                                 count++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A");
		       getch();
		       goto score;
		       break;
		       }

		case 7:
		printf("\n\n\nwhich of he following is a read only memory storage device ");
		printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");
		if(toupper(getch())=='D')
		{
                                 printf("\n\nCorrect!!!");
                                 count++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is D");
		       getch();
		       goto score;
		       break;
		       }
        case 8:
		printf("\n\n\nThe mystery number is between 60 and 150, a multiple of 7, and the sum of its digits is 10. What is the mystery number? ");
		printf("\n\nA.91 \t\tB.63 \n\nC.84\t\tD.None");
		if(toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!\n91 is the only choice given between 60 and 150, a multiple of 7 (13 x 7), and where \nthe sum of its digits (9 + 1) equals 10.");
                                 count++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A");
		       getch();
		       goto score;
		       break;
		       }
        case 9:
		printf("\n\n\nYou're 4th place right now in a race. What place will you be in when you pass the person in 3rd place? ");
		printf("\n\nA.1st\t\tB.2nd\n\nC.3rd\t\tD.4th");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!\nWhen you pass the person in 3rd place, you will take their position and become the new 3rd place.");
                                 count++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is C");
		       getch();
		       goto score;
		       break;
		       }
        case 10:
     	printf("\n\n\nWho is the founder of pixar animation?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 count++;
                                 getch();
                                 break;

                                 }
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.Steve jobs");
		       getch();
		       goto score;
		       break;
		       }

		}
  }


	score:
    if(count<9){
     printf("\n\n\t******** SORRY ,you didn't answer all the questions correctly  ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;}
    else{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
       printf("\n\t Your scores : %d",count);
       goto go;}


	go:
	puts("\n\n\t Press Y if you want to play again");
	puts("\n\t  Press N if you want to go main menu");
	if (toupper(getch())=='Y')
	{
		goto game;
    }
        else if(toupper(getch()=='N'))
	    {
	             system("cls");
		    menu();
        }
}

void help()
{
    system("cls");

    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... Quiz Game...........");
    printf("\n >> right answers otherwise you can't play the Game...........");
    printf("\n >> In this game you will be asked total 10 questions");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
	printf("\n\n\t*********************BEST OF LUCK*********************************");
	puts("\n\n\t Press any letter to go back to main menu or press N to exit ");

        if(toupper(getch()=='N'))
	    {
	         b=false;
             exit(1);}
}


