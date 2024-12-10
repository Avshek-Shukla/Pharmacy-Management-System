#include<stdio.h>
#include<conio.h>
  char drugname[10][30];
  char drugtype[10];
  int drugid[10],stock[10];//order function
  float price[10];
  int i,date[10];
  int main(){
   FILE *fptr;
   fptr = fopen("DrugDetails","r");
   for(i=0; i<=100; i++){
			fscanf(fptr,"%d",&stock[i]);
			printf("%d\t",stock[i]);
		}
   getch();
}
