#include <iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<cmath>

using namespace std;
const double PI = 3.14159265;
int i;

class cycle
{
	
	public:
		void body();
};

void cycle::body()
		{
		 int i=0;
	     for(i=0;i<1300;i++)
		  { 
		    for (int j = 0; j < 30; j++)
        {
            int x = rand() % getmaxx(); // Random x-coordinate for raindrop
            int y = rand() % getmaxy(); // Random y-coordinate for raindrop
            line(x, y, x, y + 10);       // Draw raindrop
        }
		    // For cycle
		    setcolor(WHITE);
		 	line(50+i,555,100+i,555);
        	line(75+i,525,125+i,525);
        	line(50+i,555,75+i,525);
         	line(100+i,555,125+i,525);
         	line(150+i,555,100+i,495);
         	line(75+i,525,75+i,520);
        	line(70+i,520,80+i,520);
        	line(80+i,495,100+i,495);
        	
        	// For cycle Wheels
        	circle(150+i,555,30);
           	circle(50+i,555,30);
	
           	setcolor(RED);
           	circle(150+i,555,27);
           	circle(50+i,555,27);
           	
           	//For Roads and Road lines
           	setcolor(WHITE);
        	line(0,536,getmaxx(),536);
        	line(0,650,getmaxx(),650);
           	line(0,538,getmaxx(),538);
	        line(0,652,getmaxx(),652);
	       	rectangle(0,590,50,596);
           	rectangle(100,590,150,596);
        	rectangle(200,590,250,596);
        	rectangle(300,590,350,596);
        	rectangle(400,590,450,596);
         	rectangle(500,590,550,596);
        	rectangle(600,590,650,596);
        	rectangle(700,590,750,596);
         	rectangle(800,590,850,596);
        	rectangle(900,590,950,596);
         	rectangle(1000,590,1050,596);
        	rectangle(1100,590,1150,596);
            rectangle(1200,590,1250,596);
             
 


	line(135,355,135,395);



	rectangle(100,290,140,320);

	
	line(40,450,430,450);



	//Right ---------

	rectangle(200,330,430,450);

	rectangle(230,444,295,450);

	rectangle(235,355,290,444);

	circle(244,399,3);



	rectangle(340,348,410,400);

	rectangle(345,353,405,395);

	line(375,353,375,395);



	line(130,249,426,249);

	line(430,330,445,330);

	line(445,330,426,249);



	rectangle(350,235,380,249);

	rectangle(346,230,384,235);

	//Left-----------

	line(200,310,200,450);
	
	//Start Line
	line(40,310,40,450);



	line(30,316,120,250);

	line(210,316,120,250);



	line(30,307,120,241);

	line(210,307,120,241);



	line(30,307,30,316);

	line(210,307,210,316);



	rectangle(70,350,170,400);

	rectangle(75,355,165,395);



	line(105,355,105,395);

	line(135,355,135,395);





	line(120,290,120,320);

	line(100,305,140,305);
      
        	delay(10);
        	cleardevice();
        }
	}



int main()
{
	
	
	int gm,i,a;
	
	
	initwindow(1300,750);


	cycle c;
	c.body();
	
	getch();
	closegraph();
	return 0;
	
}
