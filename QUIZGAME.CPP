#include<iostream.h>
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
class quiz
 {
 public :
 void set1();
 void ques1();
 void ques2();
 void ques3();
 void ques4();
 void ques5();
 void fifty1();
 void fifty2();
 void fifty3();
void fifty4();
void fifty5();
void closing();
}s1;
long int pts;
int t=0,flag=0;
char ans[1],w;
fstream f1;


void main()

{
clrscr();
int n;
char name[30],ch;
fstream f1;
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);
cout<<"\n\t\t\t\t THIS IS A QUIZ GAME\n\n\tCREATED BY \n\t\tLALIT SINGH\n\t\tASHISH NEGI\n\t\t\n\nPRESS ENTER TO PLAY";
getch();

menu:
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);
cout<<"\t\t\t\tMENU\n1.Play game\n2.View game data\n\nEnter your choice: ";
cin>>n;

if(n==2)
{
f1.open("Game.txtw",ios::in);
if(!f1)
{
cout<<"No Data\n\n\nPRESS ENTER";
getch();
goto menu;
}
else
{
f1.seekg(0);
while(!f1.eof())
{
f1.get(ch);
cout<<ch;
}
f1.close();
cout<<"\n\n\nPRESS ENTER";
getch();
goto menu;
}
}

else
{
cout<<"\n\nEnter the name:-";
gets(name);
cout<<"\n\n\n FIRST ANSWER THE ELIGIBLE QUESTION TO PLAY THE GAME";
f1.open("Game.txt",ios::out);
f1<<name<<"  ";
getch();
s1.set1();

label:
cout<<"\n\n\t\t\t\n\t\tQUIZ GAME IS CREATED BY THE STUDENTS OF HNBGU.\n\t\t\t\tPLEASE DONT COPY ";
getch();
}
}
//*************** END OF MAIN **********************
 void quiz::closing()
  {
   setbkcolor(BLACK);
   setcolor(YELLOW);
   settextstyle(7,HORIZ_DIR,4);
   outtextxy(160,180,"!!  THANK YOU   !!");
   outtextxy(120,280," Press any key to EXIT");
  }
 //******** SET 1
void quiz::set1()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);
cout<<"\n THIS IS YOUR ELIGIBILITY QUESTION. ";
cout<<"\n\nIn computer,what is 1 gigabyte?";
cout<<"\n\n\n(a)1024*2 bytes"<<"\n(b)1024*1024*1024 bytes";
cout<<"\n(c)1024*3 bytes"<<"\n(d)NONE OF THESE";
char rs[]="b";
cout<<"\nEnter your answer:- ";
cin>>ans;
t=strcmp(ans,rs);
if(t==0)
{
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"\nYOU HAVE QUALIFIED.";
cout<<"\n\n\n\t\t***********************************";
cout<<"\n\t\t**WELCOME TO THIS GRAND QUIZ SHOW**";
cout<<"\n\t\t***********************************";
cout<<"\n\n\n\nHERE YOU WILL BE ASKED A QUESTION & FOUR OPTIONS ";
cout<<"\nWILL BE THERE, IN WHICH THREE ARE WRONG AND ONLY ONE";
cout<<"\nIS CORRECT.YOU HAVE TO GIVE THE CORRECT ANSWER ";
cout<<"\nYOU HAVE A 50 - 50 HELP LINE IN WHICH THERE WILL BE ";
cout<<"\nONLY TWO OPTIONS OF WHICH ONLY ONE IS CORRECT. YOU";
cout<<"\nHAVE TO GIVE THE CORRECT ANSWER.ANY WRONG ANSWER MEANS YOU ";
cout<<"\nFINISH THE GAME THERE ONLY. ";
cout<<"\n******** YOU CAN TAKE ONLY THREE HELP LINES *********";
cout<<"\n\n\n\n\nPRESS ENTER TO START THE GAME ";
 getch();
 s1.ques1();
 }
 else
{
 cout<<"\aWRONG ANSWER !!!!\a";
 cout<<"\n\n\t\t BETTER LUCK NEXT TIME ";
 getch();
 }
 clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(BLACK);
 s1.closing();
}
	//************** QUESTION 1
void quiz::ques1()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);

cout<<"\nWhat do you mean by Hexadecimal in computer?";
cout<<"\n(a)With a base of 16"<<"\n(b)With a base of 6";
cout<<"\n(c)With a base of 8"<<"\n(d)NONE OF THESE";
char rs[]="a";
cout<<"\nDO YOU WANT 50/50 LIFELINE (Y/N):- ";
cin>>w;
 if(w=='Y'|| w=='y')
{
flag++;
s1.fifty1();
 }

cout<<"\n Please give your answer:- ";

cin>>ans;
t=strcmp(ans,rs);
if(t==0)
{
pts=1000;
cout<<"\n\t\t**************************************************";
cout<<"\t\t\t\tCONGRATULATIONS YOU HAVE WON.YOUR SCORE IS :- "<<pts;
cout<<"\n\t\t**************************************************";
f1<<"\n"<<pts;
f1.close();
cout<<"\nPRESS ANY KEY FOR THE NEXT QUESTION ";
getch();
s1.ques2();
}
else
{
cout<<"\aWRONG ANSWER !!!!\a";
cout<<"YOUR SCORE IS 1000";
getch();
clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(BLACK);
 s1.closing();
}
}
void quiz::fifty1()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);

cout<<"\nWhat do you mean by Hexadecimal in computer?";
cout<<"\n(a)With a base of 16"<<"\n(b)With a base of 6";
cout<<"\n";
}
 //******** QUESTION 2
void quiz::ques2()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);

cout<<"\nWho has written the book 'DIVINE LIFE?";
cout<<"\n(a)Charles Dickens"<<"\n(b)Dante Alighieri";
cout<<"\n(c)Swami Sivananda"<<"\n(d)Karl Marx";
char rs[]="c";
cout<<"\nDO YOU WANT 50/50 LIFELINE (Y/N):-";
cin>>w;

 if(w=='Y'||w=='y')
{
flag++;
s1.fifty2();
}

cout<<"\n Please give your answer:- ";

cin>>ans;

t=strcmp(ans,rs);
if(t==0)
{
pts=2000;
cout<<"\n\t\t**************************************************";
cout<<"\t\t\t\tCONGRATULATIONS YOU HAVE WON.YOUR SCORE IS :- "<<pts;
cout<<"\n\t\t**************************************************";
f1.open("Game.txt",ios::app);
f1<<"\n"<<pts;
f1.close();

cout<<"\nPRESS ANY KEY FOR THE NEXT QUESTION ";
getch();
s1.ques3();
}
else
{
cout<<"\aWRONG ANSWER !!!!\a";
cout<<"YOUR SCORE IS 2000";
getch();
clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(BLACK);
 s1.closing();
}
}
void quiz::fifty2()
 {
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);

cout<<"\nWho has written the book 'DIVINE LIFE?";
cout<<"\n(c)Swami Sivananda"<<"\n(d)Karl Marx";
cout<<"\n";
}
//******Question 3
void quiz::ques3()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);

cout<<"\nWho has written the book'ONE LIFE'?";
cout<<"\n(a)Christian Barnard"<<"\n(b)Wendell Wilkie";
cout<<"\n(c)William Wordsworth"<<"\n(d)Charles Darwin";
char rs[]="a";
cout<<"\nDO YOU WANT 50/50 LIFELINE(Y/N):-";
cin>>w;

if(w=='Y'||w=='y')
{
 flag++;
 s1.fifty3();
}

cout<<"\n Please give your answer:- ";

cin>>ans;
t=strcmp(ans,rs);
 if(t==0) {
pts=3000;
cout<<"\n\t\t**************************************************";
cout<<"\t\t\t\tCONGRATULATIONS YOU HAVE WON.YOUR SCORE IS :- "<<pts;
cout<<"\n\t\t**************************************************";
cout<<"\nPRESS ANY KEY FOR THE NEXT QUESTION ";

f1.open("Game.txt",ios::app);
f1<<"\n"<<pts;
f1.close();

getch();
s1.ques4();
}
else
{
cout<<"\aWRONG ANSWER !!!!\a";
cout<<"YOUR SCORE IS 3000";
getch();
clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(BLACK);
 s1.closing();
}
}
void quiz::fifty3()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);

cout<<"\nWho has written the book'ONE LIFE'?";
 cout<<"\n(a)Christian Barnard"<<"\n(c)William Wordsworth";
}


//**********Question 4
void quiz::ques4()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);

cout<<"\nWhich game is associate with 'YONEX CUP'?";
cout<<"\n(a)Golf"<<"\n(b)Baseball";
cout<<"\n(c)Yatch Racing"<<"\n(d)Badminton";
char rs[]="d";
if(flag<3)
{
flag++;
cout<<"\nDO YOU WANT 50/50 LIFELINE(Y/N):-";
cin>>w;

if(w=='Y'||w=='y')
{
flag++;
s1.fifty4();
}
}

cout<<"\n Please give your answer:- ";

cin>>ans;
t=strcmp(ans,rs);
 if(t==0)
{
pts=5000;
cout<<"\n\t\t**************************************************";
cout<<"\t\t\t\tCONGRATULATIONS YOU HAVE WON.YOUR SCORE IS :- "<<pts;
cout<<"\n\t\t**************************************************";
cout<<"\nPRESS ANY KEY FOR THE NEXT QUESTION ";

f1.open("Game.txt",ios::app);
f1<<"\n"<<pts;
f1.close();

getch();
s1.ques5();
 }
 else
{
cout<<"\aWRONG ANSWER !!!!\a";
cout<<"YOUR SCORE IS 5000";
getch();
clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(BLACK);
 s1.closing();
}
}
void quiz::fifty4()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);

cout<<"\nWhich game is associate with 'YONEX CUP'?";
cout<<"\n(a)Golf"<<"\n(d)Badminton";
cout<<"\n";
}
//Question 5
void quiz::ques5()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);

cout<<"\nWho invented 'MECHANICAL CLOCK'?";
cout<<"\n(a)C.Hugyens\t\n(b)Samuel Colt";
cout<<"\n(c)Hsing and Ling-Tsan\n(d)Wilhelm Roentgen";
char rs[]="c";
if(flag<3)
{
cout<<"\nDO YOU WANT 50/50 LIFELINE(Y/N):-";
cin>>w;

if(w=='Y'||w=='y')
{
flag++;
s1.fifty5();
}
}

cout<<"\n Please give your answer:- ";

cin>>ans;
t=strcmp(ans,rs);
if(t==0)
{
pts=10000;
cout<<"\n\t\t**************************************************";
cout<<"\t\t\t\tCONGRATULATIONS YOU HAVE WON.YOUR SCORE IS :- "<<pts;
cout<<"\n\t\t**************************************************";

f1.open("Game.txt",ios::app);
f1<<"\n"<<pts;
f1.close();
getch();
clrscr();
cout<<"\n\t\t\t**********************************************";
cout<<"\n\t\t\tCONGRATULATIONS YOU HAVE COMPLETED THE FULL SET ";
cout<<"\n\t\t\t**********************************************";
}
else
{
cout<<"\aWRONG ANSWER !!!!\a";
cout<<"YOUR SCORE IS 10000";
getch();
clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(BLACK);
 s1.closing();
}
}
void quiz::fifty5()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);

cout<<"\nWho invented 'MECHANICAL CLOCK'?";
cout<<"\n\t(b)Samuel Colt\n(c)Hsing and Ling-Tsan";
cout<<"\n";
}
