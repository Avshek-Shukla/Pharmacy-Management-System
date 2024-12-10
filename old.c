/* C-Programming Project
                                                                Pharmacy Management System 
                                                    Submmited To Department Of Electronics And Computer Engineering                                                  
Designed By:
1) Sittal Bhusal (040)
2) Abhishek Kumar Shukla (004)
3) Rachana Kandel (026)
4) Prachi Kumari Singh (022)  
Using Only Arrays...Due To Lack Of Knowledge On File Handling. But Project Can Be MAke Professional Using File HAndling. This Is Only A Sample Project/Mini Project On C But High Class 
Project Can BE Made USing C....*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//Declarations  a,b,c has been used To assign array value in different functions.
  char drugname[10][30]={"Pantoprazole","Vitamin C","Bandages","Multivitamin","Sinex(CLD)","Painkiller","Ciproflox","Azithromycin","Fluconazole","Metronidazole"};
  char dayname[32], drugtype[10]={'T','C','T','C','T','T','S','C','T','T'};
  int hours, minutes, seconds, day, month, year; //for date and time
  int drugid[10]={1,2,3,4,5,6,7,8,9,10}, stock[10]={100,200,600,1000,500,900,300,800,1200,1500};//order function
  float tprice[10],price[10]={6,10,15,25,3,5,80,40,50,20};
  int i, count, recnum[100], choice[10], quantity[10],date[10]={1021,221,520,621,1022,1220,321,622,820,321};
  char medicname[10][30],name[10][20];
  size_t n = sizeof(drugtype) / sizeof(char);
//Starts Coding
void gotoxy (int x, int y)
{
COORD coord = { 0 ,0 };
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
	system("cls");
char d[40] = "WELCOME TO PHARMACY MANAGEMENT SYSTEM ";
int Choice,j,m;
//time and date
time_t now;
time(&now);
struct tm *local = localtime(&now);
hours = local->tm_hour;      	// get hours since midnight (0-23)
 minutes = local->tm_min;     	// get minutes passed after the hour (0-59)
seconds = local->tm_sec;     	// get seconds passed after minute (0-59)
day = local->tm_mday;        	// get day of month (1 to 31)
month = local->tm_mon + 1;   	// get month of year (0 to 11)
year = local->tm_year + 1900;	// get year since 1900
  if (hours < 12){	// before midday
		gotoxy(1,1);
		printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
}
	else{	// after midday
		gotoxy(1,2);
		printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
}
	// print current date
	gotoxy(90,1);
	printf("Date is : %02d/%02d/%d\n", day, month, year);
    //prints day name
	struct tm *ts;
    size_t last;
    time_t timestamp = time(NULL);

    ts   = localtime(&timestamp);
    last = strftime(dayname, 32, "%A", ts);
    dayname[last] = '\0';
    gotoxy(47,1);
    printf("%s\n", dayname);
    
    
gotoxy(25,5);
for(j=0;j<52;j++)
{
Sleep(10);
printf("\x2a");
}
gotoxy(25,5);printf("\x2a");
Sleep(20);
gotoxy(25,6);printf("\x2a");
Sleep(20);
gotoxy(25,7);printf("\x2a");
Sleep(20);
gotoxy(25,8);printf("\x2a");
gotoxy(25,9);printf("\x2a");
Sleep(20);
gotoxy(25,10);printf("\x2a");
Sleep(20);
gotoxy(25,11);printf("\x2a");
Sleep(20);
gotoxy(25,12);printf("\x2a");
gotoxy(25,13);printf("\x2a");
Sleep(20);
gotoxy(25,14);printf("\x2a");
Sleep(20);
gotoxy(25,15);printf("\x2a");
Sleep(20);
gotoxy(25,16);printf("\x2a");
gotoxy(25,17);printf("\x2a");
Sleep(20);
gotoxy(25,18);printf("\x2a");

gotoxy(76,5);printf("\x2a");
Sleep(20);
gotoxy(76,6);printf("\x2a");
Sleep(20);
gotoxy(76,7);printf("\x2a");
Sleep(20);
gotoxy(76,8);printf("\x2a");
Sleep(20);
gotoxy(76,9);printf("\x2a");
gotoxy(76,9);printf("\x2a");
Sleep(20);
gotoxy(76,10);printf("\x2a");
Sleep(20);
gotoxy(76,11);printf("\x2a");
Sleep(20);
gotoxy(76,12);printf("\x2a");
Sleep(20);
gotoxy(76,13);printf("\x2a");
Sleep(20);
gotoxy(76,14);printf("\x2a");
Sleep(20);
gotoxy(76,15);printf("\x2a");
Sleep(20);
gotoxy(76,16);printf("\x2a");
Sleep(20);
gotoxy(76,17);printf("\x2a");
Sleep(20);
gotoxy(76,18);printf("\x2a");

gotoxy(25,18);
for(j=0;j<52;j++)
{
Sleep(10);
printf("\x2a");
}

gotoxy(25,9);
for(j=0;j<52;j++)
{
Sleep(10);
printf("\x2a");
}

gotoxy(26,7);
printf("\t ");
for(m=0;m<40;m++)
{
Sleep(30);
printf("%c",d[m]);
}
gotoxy(26,11);
printf("\t 1. Take new Medicine order ");
gotoxy(26,12);
printf("\t 2. Delete latest Medicine order");
gotoxy(26,13);
printf("\t 3. Print the Reciept and Make Payment");
gotoxy(26,14);
printf("\t 4. Exit");
char n;
Start:
gotoxy(27,20);
printf("Enter choice: ");
	switch(Choice=getche()){	
		  case '1':
		  	order();
		  	break;
		  		case '2':
		  			delorder();
		  			break;
		  			case '3':
		  				printbill();
		  				break;
		  				case '4':
		  					gotoxy(30,25);
		  			      printf("Thank You");
		  			      sleep(1);
		  			      exit(1);
		  			      break;
						 default:
						 	gotoxy(27,22);
						  	printf("Invalid Input");
						  	//printf("\a");
						  	Beep(750, 100);
						  	gotoxy(27,23);
						  	printf("Enter Valid Input");
						  	sleep(1);
						  	gotoxy(27,22);
						  	printf("                      ");
						  	gotoxy(27,23);
						  	printf("                     ");
						  	goto Start; 
		  			break;
}
getch();
}
//After Choice
order(){
	system("cls");      
	int j,b,tempquant;
	printf("\nAdd Order Details\n");
	printf("_____________________________________ \n\n");
    printf("*******************************************************************************************************************\n");
    printf("DRUGS ID\tDRUGS TYPE   \tDRUGS NAME\t     DRUGS PRICE(RS)\t Expiry Date(MM/YY)\tStocks Available\n");
    printf("*******************************************************************************************************************\n");   //TB Represents Tablet And CC Represents Capsule And Sy Represents Syrup
    for (j=0; j<=n-1; j++){
	printf("%d\t\t   %c    \t%s\t\tRS %.2f  \t    %02d/%02d  \t\t  %d\n",j+1,drugtype[j],drugname[j],price[j],date[j]/100,date[j]%100,stock[j]);  
    } 	
    //Selection Starts
    printf("\nType Order Number:  ");
    b=getche();
    if(isdigit(b)){
    if(recnum[b]!=0){
    	printf("\n\nReceipt Number Already Taken.");
    	printf("\n\nPress Any Key To Continue...");
		getch();
    	main();	
	}
	else{
    recnum[b]=b;
    printf("\nEnter Your Name:  ");
    scanf("%s",name[b]);
    repeat:
    printf("\nHow Many Medicines Do You Want To Order:  ");
    i=getche();
    int ti=i-48;
    if(isdigit(i)){
    if(ti>=10){
    	printf("\n\nOnly 10 Medicines Are Allowed To Order Once..");
    	printf("\nPress Any Key To Continue...");
    	getch();
    	main();
	}
	else{
		for(count=1; count<=ti; count++){
			r2:
		printf("\n\nEnter Drug ID (Ignore 0):  ");
		if(isdigit(getche())){
		printf("\b ");
		scanf("%d",&choice[count]);
		printf("Medicine Name:  %s",drugname[choice[count]-1]);
		strcpy(medicname[count],drugname[choice[count]-1]);
	    }
	    else {
	    	printf("\nWrong Input");
	    	Beep(750, 100);
	    	goto r2;
		}
		r3:
		printf("\nEnter Quantity:  ");
		if(isdigit(getche())){
			printf("\b ");
		scanf("%d",&quantity[count]);
		tempquant=quantity[count];
		tprice[b] =tprice[b] + tempquant*price[choice[count]-1];
		stock[choice[count]-1] = stock[choice[count]-1] - tempquant;
	}
	else {
	    	printf("\nWrong Input\n");
	    	Beep(750, 100);
	    	goto r3;
		}
    }
	}
    }
    else{
    	printf("\nWrong Input");
    	Beep(750, 100);
    	printf("\nEnter 'n' To Continue & Other Key To Exit:\t");
    	char z=getch();
    	if(z=='n'){
    		printf("\n");
    	goto repeat;	
		}
		else {
			recnum[b]=0;
		main();	
		}
	}
}
	printf("\n\nThe Amount You Need To Pay:  %.2f",tprice[b]);
	printf("\n\n===========================================================================");
    printf("\nOrder Taken Successfully\n");
    printf("===========================================================================\n");
    printf("Go to Reciept Menu to Pay The Bill. Receipt Number = %c",recnum[b]);
    printf("\n===========================================================================");
	printf("\n\n Press Any Key To Continue...");
	getch();
	main();
}
else{
	Beep(750, 100);
	order();
}
}
delorder(){
	int c;
	system("cls");
	printf("Enter Receipt Number:  ");
	c=getche();
    if(isdigit(c)){
	if(recnum[c]==0){
		printf("\n\nThere is no Such Record.");
		printf("\n\nPress Any Key To Continue...");
	    getch();
	    main();
	}
	else{
    recnum[c]=0;
	tprice[c]=0;	
    printf("\nDeleted Successfully");
    printf("\n\nPress Any Key To Continue...");
	    getch();
	    main();
	}
}
else{
	printf("\nWrong Input");
	Beep(750, 100);
	sleep(1);
	delorder();
}
}
printbill(){
	int a;
	system("cls");
	printf("Enter Receipt Number:  ");
	a=getche();
    if(isdigit(a)){
	if(recnum[a]==0){
		printf("\n\nThere is no Order to show\nSo The List is Empty\n\n\n");
		printf("\n\nPress Any Key To Continue...");
	    getch();
	    main();
	}	
	else{
		printf("===========================================================================\n");
	printf("\n\t\tHere is the Order list\n"); 
	printf("===========================================================================\n\n");
		printf("\nCustomer Name:  %s",name[a]);
		printf("\nTotal Bill Amount:  %.2f\n",tprice[a]);
				
		 printf("_____________________________________________________________________________\n");
			
		 printf("===============================================================================\n");
		 printf("|  Medicine Name    |  	Quantity     |    Total Price |\n");
		 printf("=======++==================++================++===============++===============\n");
		 for(count=1; count<=i; count++){
		 	printf("%s\t\t\t", medicname[count]);
		 	printf("%d\t\t\t",quantity[count]);
		 	printf("RS %d",price[count-1]);
		 	printf("\n");
		 }
		 	printf("\n_____________________________________________________________________________\n\n");
		 	printf("Press Any Key To Continue....");
		 	getch();
		 	printf("\n\nPayment Done....\nThank You.\n\n");
		 	recnum[a]= 0;
		 	tprice[a]=0;
		 	printf("Press Any Key To Continue....");
		 	getch();
		 	main();
		 	
	}
}
else{
	printf("\nWrong Input");
	Beep(750, 100);
	sleep(1);
	printbill();
}
}
