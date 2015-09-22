#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

int y=20,ie0=0,ie1=0,z0=0;
 FILE *fp;


void init_check(char a[])
{
 int i=0,x,xa,d=0,j=0;//i1,i2,i3;
 char b[10],*g,*h,*k,z[2],w[100],c;
 b[0]='\0';
 x=0;
 while((a[x]!=' ') && (a[x]!='(') && a[x]!=';')
 {
  b[d]=a[x];
  d++;
  x++;
 }
 b[d]='\0';
 if(strcmp(b,"int")==0)
 {
  xa=1;
 }

 else if(strcmp(b,"char")==0)
 {
  xa=2;
 }

 else if(strcmp(b,"float")==0)
 {
  xa=3;
 }

 else if(strcmp(b,"scanf")==0)
 {
  xa=4;
 }

 else if(strcmp(b,"printf")==0)
 {
  xa=5;
 }

 else if(strcmp(b,"for")==0)
 {
  xa=6;
 }

 else if(strcmp(b,"while")==0)
 {
  xa=7;
 }

 else if(strcmp(b,"if")==0)
 {
  xa=8;
 }

  /*else if(strcmp(b,"else")==0)
 {
  xa=10;
 }*/

 else if(strcmp(b,"}")==0)
 {
  xa=11;
 }
 else
 {
  xa=9;
 }

 switch(xa)
 {
  case 1:{
	  z[0]=a[4];
	  z[1]='\0';
	  outtextxy(200,y+10,"initialize");
	  outtextxy(290,y+10,z);
	  rectangle(200,y,300,y+30);
	  line(250,y+30,250,y+60);
	  y=y+60;
	  delay(400);
	  break;
	  }

  case 2: {
	  z[0]=a[5];
	  z[1]='\0';
	  outtextxy(200,y+10,"initialize");
	  outtextxy(290,y+10,z);
	  rectangle(200,y,300,y+30);
	  line(250,y+30,250,y+60);
	  y=y+60;
	  delay(400);
	  break;
	  }

  case 3: {
	  z[0]=a[6];
	  z[1]='\0';
	  outtextxy(200,y+10,"initialize");
	  outtextxy(290,y+10,z);
	  rectangle(200,y,300,y+30);
	  line(250,y+30,250,y+60);
	  y=y+60;
	  delay(400);
	  break;
	  }

   case 4:{
	   i=6;
	   do
	   {
	    i++;
	   }while(a[i]!='"');
	   i=i+2;
	   z[0]=a[i];
	   z[1]='\0';
	   if(a[i]=='&')
	   {
	    z[0]=a[i+1];
	   }
	   outtextxy(200,y+10,"input");
	   outtextxy(260,y+10,z);
	   line(200,y,300,y);
line(180,y+30,280,y+30);
line(200,y,180,y+30);
line(300,y,280,y+30);

	   line(250,y+30,250,y+60);
	   y=y+60;
	   delay(400);
	   break;
	  }


  case 5:{
	  i=7;
	  do
	  {
	   i++;
	  }while(a[i]!='"');
	  i=i+2;
	  z[0]=a[i];
	  z[1]='\0';
	  /*if(a[i]=='&')
	  {
	   z[0]=a[i]+1;
	  }*/
	  outtextxy(200,y+10,"print");
	  outtextxy(260,y+10,z);
	 line(200,y,300,y);
line(180,y+30,280,y+30);
line(200,y,180,y+30);
line(300,y,280,y+30);

	  line(250,y+30,250,y+60);
	  y=y+60;
	  delay(400);
	  break;
	  }

  case 6:{
	  //outtextxy(200,y+10,"for(");
	  /*for(i=3;i<strlen(a);i++)
	  {
	   if(a[i]!=')')
	   {
	    g[j]=a[i];
	    j++;
	    outtextxy(210+i,y+10,g);
	   }
	  }
	  g[j]='/0'; */
	  z0=y;
	  i=strlen(a);
	  //a[i-1]='\0';
	  outtextxy(210,y+10,a);
	  rectangle(200,y,400,y+30);
	  line(250,y+30,250,y+60);
	  y=y+60;
	  delay(400);
	  c=getc(fp);  c=getc(fp);
	  //do{c=getc(fp);}while(c!="{");
  i=0;
	   while(c!=EOF  && c!='}')
  {
  c=getc(fp);
  //i=0;
   while(c!='\n'&& c!=EOF && c!='}')
    {
     w[i]=c;
     c=getc(fp);
     i++;
   }
  w[i]='\0';
     if(y>480)
     {getch(); cleardevice();
      y=20;z0=20;}

  init_check(w);
  i=0;    }
  line(200,z0,150,z0);
  line(150,z0,150,y-30);
  line(150,y-30,250,y-30);
	  break;
	 }


   case 7: {
	  int z0=y;
	  i=strlen(a);
	  //a[i-1]='\0';
	  outtextxy(210,y+10,a);
	  rectangle(200,y,400,y+30);
	  line(250,y+30,250,y+60);
	  y=y+60;
	  delay(400);
	  c=getc(fp);  c=getc(fp);
	  //do{c=getc(fp);}while(c!="{");
  i=0;
	   while(c!=EOF  && c!='}')
  {
  c=getc(fp);
  //i=0;
   while(c!='\n'&& c!=EOF && c!='}')
    {
     w[i]=c;
     c=getc(fp);
     i++;
   }
  w[i]='\0';
     if(y>480)
     {getch(); cleardevice();
      y=20;z0=20;}
  init_check(w);
  i=0;    }
  line(200,z0,150,z0);
  line(150,z0,150,y-30);
  line(150,y-30,250,y-30);
	  break;
	 }



  case 8: {//if
    int ie0=y;
	  //i=strlen(a);
	  //a[i-1]='\0';
	  outtextxy(210,y+10,a);
	  line(190,y+15,250,y);
line(310,y+15,250,y);
line(190,y+15,250,y+30);
line(310,y+15,250,y+30);
	  line(250,y+30,250,y+60);
	  outtextxy(250,y+45,"Y");
	  y=y+60;
	  delay(400);
	  c=getc(fp);  c=getc(fp);
	  //do{c=getc(fp);}while(c!="{");
  i=0;
	   while(c!=EOF  && c!='}')
  {
  c=getc(fp);
  //i=0;
   while(c!='\n'&& c!=EOF && c!='}')
    {
     w[i]=c;
     c=getc(fp);
     i++;
   }
  w[i]='\0';
     if(y>480)
     {getch(); cleardevice();
      y=20;z0=20;}
  init_check(w);
  i=0;    }
  //ie1=y;
  line(200,ie0+15,150,ie0+15);
  line(150,ie0+15,150,y+15);
  line(150,y+15,200,y+15);
  setcolor(0);
  line(250,y-30,250,y);
  setcolor(15);
  outtextxy(150,ie0+20,"N");
  fscanf(fp,"%s",w);
  c=getc(fp);  c=getc(fp);
 i=0;
	   while(c!=EOF  && c!='}')
  {
  c=getc(fp);
  //i=0;
   while(c!='\n'&& c!=EOF && c!='}')
    {
     w[i]=c;
     c=getc(fp);
     i++;
   }
  w[i]='\0';
     if(y>480)
     {getch(); cleardevice();
      y=20;z0=20;}
  init_check(w);
  i=0;    }
  line(300,ie0+60,350,ie0+60);
  line(350,ie0+60,350,y+15);
  line(350,y+15,300,y+15);
	  break;
	 }
/*
  case 10: {//else
	  c=getc(fp);  c=getc(fp);
	  //do{c=getc(fp);}while(c!="{");
  i=0;
	   while(c!=EOF  && c!='}')
  {
  c=getc(fp);
  //i=0;
   while(c!='\n'&& c!=EOF && c!='}')
    {
     w[i]=c;
     c=getc(fp);
     i++;
   }
  w[i]='\0';
     if(y>480)
     {getch(); cleardevice();
      y=20;z0=20;}
  init_check(w);
  i=0;    }
  ie1=y;
  line(350,ie0+60,350,ie1+60);
  line(300,ie0+60,300,ie0+60);
  line(350,ie1+60,300,ie1+60);
  //outtextxy(150,ie0+20,"N");
	  break;
	 }
*/

  case 9:{ if(strlen(a)>4)
  {
	  outtextxy(200,y+10,a);
	  rectangle(200,y,300,y+30);
	  line(250,y+30,250,y+60);
	  y=y+60;
	  delay(400);  }
	  break;
	 }
     /*
  case 11:{
	   ellipse(250,y+10,0,360,50,10);
	   outtextxy(230,y+10,"end");
	   delay(400);
	   break;
	  }   */

 }
}


void main()
{

 int i=0,j=0;//,k=0;
 int l=0;
 char c;
 char *a,*b,*d,*ptr,fx[100];
 printf("\n\nPlease input file name : ");
 gets(fx);
 l=strlen(fx);
 fx[l]='\0';

 /* request auto detection */
 int gdriver = DETECT, gmode, errorcode;
 //int left, top, right, bottom;

 /* initialize graphics and local variables */
 initgraph(&gdriver, &gmode, "");

 /* read result of initialization */
 errorcode = graphresult();
 if (errorcode != grOk)  /* an error occurred */
 {
  printf("Graphics error: %s\n", grapherrormsg(errorcode));
  printf("Press any key to halt:");
  getch();
  exit(1); /* terminate with an error code */
 }
 
  fp=fopen(fx,"r");

 if(fp==NULL)
 {
  printf("\n No Such file exists. \n\r");
 }

 else
 {
  d[0]=getc(fp);
  ptr=strstr(d,"void main()");
  j++;
  while(ptr==NULL)
  {
   c=getc(fp);
   d[j]=c;
   ptr=strstr(d,"void main()");
   j++;
  }
  ellipse(250,y,0,360,50,10);
  outtextxy(230,y,"START");
  line(250,y+10,250,y+50);
  y=y+50;
  delay(400);
  c=getc(fp);
  c=getc(fp);
  c=getc(fp);
 fscanf(fp,"%s",a);
 c=getc(fp);
 c=getc(fp);
 c=getc(fp);


  while(c!=EOF)
  {
  c=getc(fp);
   while(c!='\n'&& c!=EOF && c!='}')
   {/*
    if(c=='{')
    {
     while(c!='}')
     {
      b[i]=getc(fp);
      i++;
     }
     }     outtextxy(200,y+10,b);
     }
     b[i]='\0';
     rectangle(200,y,300,y+40);
     line(250,y+30,250,y+60);
     y=y+60;
     delay(400);
    }
    else*/
    {
     if(y>480)
     {getch(); cleardevice();
      y=20;z0=20;}
     a[i]=c;
     c=getc(fp);
     i++;
    }



   }
  a[i]='\0';
  init_check(a);
  i=0;
 // a=NULL;

  }
  /*
   else if((c=='('))
   {
    while(c!=')')
    {
     b[j]=c;
     c=getc(fp);
     j++;
    }
   }

   else
   {
    if(c==' ')
    {
     while(c!=';')
     {
      c=getc(fp);
      d[k]=c;
      k++;
     }
    }
   }*/
  }
	   ellipse(250,y+10,0,360,50,10);
	   outtextxy(230,y+10,"end");
	   delay(400);

 getch();
 closegraph();
}

