

/* FILE / FOLDER PROTECTION SOFTWARE IN C

Developed by Pramin Budhathoki

Copyright :- 2021 */

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
COORD c;
void gotoxy(int a,int b);
void textcolor(int ForgC);
void main()

{

	int i,test;
	char ch,FN[200],HIDE[600]="attrib +h +s +r \"",SHOW[600]="attrib -h -s -r \"";
	char s[]={"# FILE / FOLDER PROTECTION SOFTWARE !"},x[]={"\""};
	start :
		gotoxy(14,5);
		textcolor(2);
		printf("_________________________________________________");
		gotoxy(14,6);
		printf("_________________________________________________");
		gotoxy(14,10);
		printf("_________________________________________________");
		gotoxy(18,8);
		textcolor(10);
		for(i=0;s[i]!='\0';i++)
		{	
			printf("%c",s[i]);
			Sleep(50);
		}	
		textcolor(2);
		gotoxy(22,12);
		printf(" 1 : HIDE A FILE / FOLDER ");
		gotoxy(22,14);
		printf(" 2 : SHOW A FILE / FOLDER ");
		gotoxy(22,16);
		printf(" 3 : Help ");
		gotoxy(10,24);
		printf("Designed and Developed By Pramin Budhathoki Copyright 2021 ");
		gotoxy(10,22);
		printf("Press Esc to stop the program ");
		gotoxy(16,18);
		printf(" ENTER YOUR CHOICE :->> ");
		ch=getch();
		if(ch==27)
		{	
				system("CLS");
				exit(0);
		}
		switch(ch)
		{

		case '1' :
			system("CLS");
			gotoxy(15,6);
			textcolor(2);
			printf("_________________________________________________");
			gotoxy(15,7);
			printf("_________________________________________________");
			gotoxy(15,12);
			printf("_________________________________________________");
			gotoxy(17,9);
			printf("Enter file / folder name with correct path !");
			gotoxy(17,11);
			printf(" $ : ");
			fflush(stdin);
			gets(FN);
			system("CLS");
			for(i=0;i<=10;i++){
				system("cd..");
			}
			strcat(HIDE,FN);
			strcat(HIDE,x);
			test= system(HIDE);
			system("CLS");
			if(test!=0)
			{
				gotoxy(19,9);
				sleep(200);
				printf("Unable to Hide file or folder !");
			}				
			else
			{			
				gotoxy(19,9);
				printf("Operation executed successfully !");
			}
			sleep(10);
			system("CLS");
			break;
		case '2' :
			system("cls");
			gotoxy(15,6);
			textcolor(2);
			printf("_________________________________________________");
			gotoxy(15,7);
			printf("_________________________________________________");
			gotoxy(15,12);
			printf("_________________________________________________");
			gotoxy(17,9);
			printf("Enter file / folder name with correct path !");
			gotoxy(17,11);
			printf(" $ : ");
			fflush(stdin);
			gets(FN);
			system("CLS");
			for(i=0;i<=10;i++){
				system("cd..");
			}
			strcat(SHOW,FN);
			strcat(SHOW,x);
			test= system(SHOW);
			system("CLS");
			if(test!=0)
			{
				gotoxy(19,9);
				printf("Unable to Show file or folder !");
			}		
			else
			{
				gotoxy(19,9);
				printf("Operation executed successfully !");
			}
			sleep(5);	
			system("CLS");		
			break;
		case '3' :
			system("CLS");
			gotoxy(9,6);
			textcolor(2);
			printf("____________________________________________________________");
			gotoxy(9,7);
			printf("____________________________________________________________");
			gotoxy(9,16);
			printf("____________________________________________________________");
			gotoxy(14,9);
			printf("ENTER FULL PATH OF FILE / FOLDER IN FOLLOWING FORMAT ");
			gotoxy(16,11);
			printf("Example :- If your file/folder present on E Drive ");
			gotoxy(24,13);
			printf("Then E:\\File Name or Folder name ");
			gotoxy(12,15);
			printf("Note :- Providing the Extension of File is compuslory !");
			sleep(5);
			system("CLS");
			break;
			
		default :
			system("cls");	
			gotoxy(19,9);
			printf("PLEASE INPUT CORRECT CHOICE !");
			sleep(5);
			system("cls");
			break;
}
goto start ;
}
void gotoxy(int a,int b){
	c.X = a;
    c.Y = b;
    SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void textcolor(int ForgC)
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
 
 /*  Name		 | Value
				 |
	Black        |   0
	Blue         |   1
	Green        |   2
	Cyan         |   3
	Red          |   4
	Magenta      |   5
	Brown        |   6
	Light Gray   |   7
	Dark Gray    |   8
	Light Blue   |   9
	Light Green  |   10
	Light Cyan   |   11
	Light Red    |   12
	Light Magenta|   13
	Yellow       |   14
	White        |   15		*/


