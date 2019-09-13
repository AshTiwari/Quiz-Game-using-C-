#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#define max 10

char *stackQ[max][256];
int stackAns[max];
int top=-1;


void pushAns(int a)
{
  top=top+1;
  stackAns[top]=a;
 }


void main()
{
	printf("A miniproject bought to you by\n Ashutosh Tiwari(48) and Shreyas Chikhlikar(50)\n");
	printf("A quizeria using STACK as the data structure to pop the first and most valued question at last.\n");

	int points=0,i,ans;
	char name;




	char stackQ[max][256]={"Final Question!!\n1)A\t2)B\t3)C\t4)D", "9th Question!!\n1)A\t2)B\t3)C\t4)D","8th Question!!\n1)A\t2)B\t3)C\t4)D","7th Question!!\n1)A\t2)B\t3)C\t4)D","6th Question!!\n1)A\t2)B\t3)C\t4)D","5th Question!!\n1)A\t2)B\t3)C\t4)D","4th Question!!\n1)A\t2)B\t3)C\t4)D","3rd Question!!\n1)A\t2)B\t3)C\t4)D","2nd Question!!\n1)A\t2)B\t3)C\t4)D","1st Question!!\n1)A\t2)B\t3)C\t4)D"};





	pushAns(4);				//push 10 ans.
	pushAns(1);
	pushAns(1);
	pushAns(1);
	pushAns(1);
	pushAns(1);
	pushAns(1);
	pushAns(1);
	pushAns(1);
	pushAns(1);



	printf("\nWelcome to Quizeria.\n");
	printf("Enter your name.  \n");
	name=scanf("%s",&name);
	printf("Welcome %s\n",name);


	for(i=9;i>=0;i--)
	{
		printf("\n\nThis question is for %d points\n",(10-i)*10);		delay(100);
		printf("%s\n",stackQ[i]);
		delay(100);
		printf("Enter your ans.\n");
		scanf("%d",&ans);
		delay(100);
		if(ans==stackAns[i])
		{
			points=points+(10-i)*10;
			printf("Congrats!!!\t You earn %d points\n",(10-i)*10);
		}

		else if(ans==0)
		{
			printf("You chose to quit\n");
			break;
		}

		else
		{
			points=points-50;
			printf("Sorry, the correct answer is %d. \n",stackAns[i]);
			break;
		}

	 }
		if(points==550)
		{
			printf("You are the winner of the quizeria with %d points!!!\n",points);
		}
		else
		{
			printf("You scored %d points!!!\n",points);
		}


	getch();

}