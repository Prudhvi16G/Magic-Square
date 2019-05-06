#include<stdio.h>
#include<conio.h>
#include<string.h>
struct details
{
int age;
char name[20];
};
void main()
{
int i,a,c,date,month,year,age,x,s,d,p,t;
char name,adult,child;
struct details st[10];
clrscr();
printf("\n \t----------------------------------------------------------");
printf("\n \t \t  \t      INDIAN RAILWAY  ");
printf("\n \t----------------------------------------------------------");
printf("");
printf("\nEnter date of journey(DD/MM/YY)\n");
scanf("\n%d %d %d",&date,&month,&year);
clrscr();
printf("\nchoose your boarding point \n");
printf("1.HYDERABAD \t 2.WARANGAL \t 3.THIRUPATHI \t \n");
scanf("%d",&p);
clrscr();

switch(p)
  {
case 1:printf("Trains  avialable from HYDERABAD\n");
       printf("\n \n 1.Rajadani express:\n \t train no:42822767 \n \t From Hyderabad To Warangal\n  ");
       printf("2.Venkatadri express:\n \t train no:3456789 \n \t From Hyderabad To Tirupathi\n ");
       printf("3.Chennai express:\n \t train no:5263485 \n \t From Hyderabad To Chennai\n ");
       printf("choose your train:");
       scanf("%d",&t);
       switch(t)
       {
       case 1:printf("\n \t \t \t Rajadani express \n No of seats available in \t Sleeper coach :85 \t AC coach:39\n ");break;
       case 2:printf("\n \t \t \t Venkatdri express \n No of seats available in \t Sleeper coach :79 \t AC coach:29\n" );break;
       case 3:printf("\n \t \t \t Chennai express \n No of seats available in \t Sleeper coach :13 \t AC coach:24\n");break;
       }
       break;

case 2:printf("Trains  avialable from WARANGAL\n");
       printf("1.Intercity express:\n \t train no:5263149 \n \t Warangal to Hyderabad\n " );
       printf("2.Lachmi express:\n \t train no:8965323 \n \t Warangal to Nizamabad\n  ");
       printf("3.Krishna express:\n \t train no:5426389 \n \t Warangal to Karimnagar\n ");
       printf("choose your train:");
       scanf("%d",&t);
       switch(t)
       {
       case 1:printf("\n \t \t \t Intercity \n No of seats available in \t Sleeper coach :78 \t AC coach:39\n");break;
       case 2:printf("\n \t \t \t Lachmi express \n No of seats available in \t Sleeper coach :85 \t AC coach:39\n");break;
       case 3:printf("\n \t \t \t krishna express \n No of seats available in \t Sleeper coach :52 \t AC coach:21\n");break;
       }
       break;

case 3:printf("Trains  avialable from TIRUPATHI\n");
       printf("1.ajanta express:\n \t train no:5632145 \n \t Tirupathi to Secunderabad\n");
       printf("2.godavari express:\n \t train no:9874563 \n \t Tirupathi to Zaheerabad\n");
       printf("3.kachiguda express:\n \t train no:8745632 \n \t Tirupathi to Ongole\n");
       printf("choose your train:");
       scanf("%d",&t);
       switch(t)
       {
       case 1:printf("\n \t \t \t Ajantha express \n No of seats available in \t Sleeper coach :82 \t AC coach:36\n");break;
       case 2:printf("\n \t \t \t Godavari express \n No of seats available in \t Sleeper coach :75 \t AC coach:26\n");break;
       case 3:printf("\n \t \t \t Kachiguda express \n No of seats available in \t Sleeper coach :65 \t AC coach:31\n");break;
       }
       break;
}
 if(p<=3)
  {
      if(t<=3)
	{
	 printf("\n \nType of ticket : \n \t 1)sleeper class  \n \t 2)AC coach\n");
	 scanf("%d",&d);
	 clrscr();
	   if(d==1)
	     {
	      printf("\t \t \t \t sleeper class\n");
	      printf("Enter no of tickets");
	      scanf("%d",&s);
	      printf("cost of each ticket:300");
	      x=(s*300);
	      printf("\ntotal cost of tickets:%d",x);
	      }
	   else if(d==2)
	     {
	      printf("\t \t \t \t  AC coach\n");
	      printf("Enter no of tickets");
	      scanf("%d",&s);
	      printf("cost of each ticket:600");
	      x=(s*600);
	      printf("\ntotal cost of tickets:%d",x);
	     }
	   else

	     {
	      printf("\t \t !!Please select either sleeper class or ac coach!!");
	     }
	   if(d==1||d==2)
	   {

	      printf("\n \n \t \t Enter the details of passengers");
	      for(i=0;i<s;i++)
	       {
		printf("\n Name:");
		scanf("%s",&st[i].name);
		printf(" Age:");
		scanf("%d",&st[i].age);
	       }
	     clrscr();
	     printf("\n \t----------------------------------------------------------");
	     printf("\n \t \t \t         TICKET");
	     printf("\n \t----------------------------------------------------------");
	     printf("\n  Date: %d/%d/%d",date,month,year);
	     printf("\n  Boarding point:");
	     if(p==1)
	      {
		printf("Hyderabad");
		printf("\t    Train:");
	       if(t==1)
		{
		 printf("Rajadani express\n  Train no:42822767 \t \t  From: Hyderabad To: Warangal\n ");
		}
	       if(t==2)
		{
		 printf("Venkatadri express\n  Train no:3456789 \t \t  From Hyderabad To: Tirupathi\n ");
		}
	       if(t==3)
		{
		 printf("Chennai express\n  Train no:5263485 \t \t  From: Hyderabad To: Chennai\n ");
		}
	      }
	     if(p==2)
	      {
		printf("Warangal");
		printf("\t Train:");
	       if(t==1)
	       {
		printf("Intercity express\n  Train no:5263149 \t \t  From: Warangal To: Hyderabad\n " );
	       }
	       if(t==2)
	       {
		printf("Lachmi express\n  Train no:8965323 \t \t  From: Warangal To: Nizamabad\n  ");
	       }
	       if(t==3)
	       {
		printf("Krishna express\n  Train no:5426389 \t \t  From: Warangal To: Karimnagar\n ");
	       }
	      }
	     if(p==3)
	     {
		printf("Thirupathi");
		printf("\t Train:");
	       if(t==1)
	       {
		printf("Ajanta express\n  Train no:5632145 \t \t  From: Tirupathi To: Secunderabad\n");
	       }
	       if(t==2)
	       {
		printf("Godavari express\n  Train no:9874563 \t \t  From: Tirupathi To: Zaheerabad\n");
	       }
	       if(t==3)
	       {
		printf("Kachiguda express\n  Train no:8745632 \t \t  From: Tirupathi To: Ongole\n");
	       }
	     }
	     printf(" Total fair: %d",x);
	     printf("\n \n \t \tDetails of the passengers");
	     printf("\n Sl.no \t   Name  \t Age");
	     for(i=0;i<s;i++)
	     {
	       printf("\n  %d \t  %s      \t %d ",i+1,st[i].name,st[i].age);
	       }
	       printf("\n\n \n \n \n   \t \t \t #!!Happy Journey !!#");
	}   }
  else
      {
       printf("\t \t !!please select a train listed above!!");
       }
}
else
 {
  printf("\t \t !!Please select a given boarding point!!");
 }
getch();
}

