#include<GL/glut.h>
#include<math.h>

const float PI = 3.1415927;
float personM = -90;
float sun = -20;
float cloud = 50;
float speedPerson = 2.5;
float speedSun = 1;
float speedUp = 0.75;
float speedCloud = 1.7;
float angle;
float up = 0;
float leg1 = 0,leg2 = 0,Lmove1 = 1,Lmove2 = -1;  


void person(){
	
	//PERSON ON THE ROAD
	
	//HAT OF THE PERSON
	
	glBegin(GL_QUADS);
	glColor3f(0.5,0.2,0);
	glVertex2i(-15,70);
	glVertex2i(-20,60);
	glVertex2i(0,60);
	glVertex2i(-5,70);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1,1,1);
	glVertex2i(-25,60);
	glVertex2i(5,60);
	glEnd();
	
	//HEAD OF THE PERSON
	glBegin(GL_POLYGON);
    glColor3f(0.6,0,0);
	glVertex2i(-4,60);
	glVertex2i(-3,54);
	
	glVertex2i(-3,55);
	glVertex2i(-3.9,51.2);
	
	glVertex2i(-3.9,51.2);
	glVertex2i(-1,45);
	
	glVertex2i(-1,45);
	glVertex2i(-3,42);
	
	glVertex2i(-3,42);
	glVertex2i(-3,38);
	
	glVertex2i(-17,60);
	glVertex2i(-18,43);
	
//	glVertex2i(-18,45);
//	glVertex2i(-17,38);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.6,0,0);
	glVertex2i(-12,53);
	glVertex2i(-18.5,42);
	glVertex2i(-3.5,38);
	glEnd();
	
	//LEG OF THE PERSON
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.2,0);
	glVertex2i(-20+leg1,-100);
	glVertex2i(-19,-60);
	glVertex2i(-11,-60);
	glVertex2i(-10+leg1,-100);
	glEnd();
	
	//SECOND LEG
		glBegin(GL_POLYGON);
	glColor3f(0.5,0.2,0);
	glVertex2i(-10+leg2,-100);
	glVertex2i(-9,-60);
	glVertex2i(-1,-60);
	glVertex2i(0+leg2,-100);
	glEnd();
	
	//shoes of the person
	//first shoes
	glBegin(GL_POLYGON);
	glColor3f(0.3,0,0);
	glVertex2i(-18+leg1,-100);
	glVertex2i(-18+leg1,-110);
	glVertex2i(-7+leg1,-110);
	glVertex2i(-7+leg1,-100);
	glEnd();
	
	//second shoes
		glBegin(GL_POLYGON);
	glColor3f(0.3,0,0);
	glVertex2i(-8+leg2,-100);
	glVertex2i(-8+leg2,-110);
	glVertex2i(3+leg2,-110);
	glVertex2i(3+leg2,-100);
	glEnd();
	
	//THE JACKET OF THE PERSON
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.1,0);
	glVertex2i(-20,42);
	glVertex2i(-25,-70);
	glVertex2i(5,-70);
	glVertex2i(0,20);
	glVertex2i(-3,38);
	glEnd();
	
	
	
	//BENDING EFFECT  OF THR JACKET
		glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2i(-7,34);
	glVertex2i(0,20);
	glVertex2i(0,20);
	glVertex2i(-3,38);
	glEnd();
	
	//HAND OF THR PERSON
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2i(-15,20);
	glVertex2i(-13,-30);
	glVertex2i(-5,-30);
	glVertex2i(-7,20);
	//glutSwapBuffers();
	glEnd();
	
	glFlush();
}
void drawCloud(float x, float y, float radius) {
	
     glBegin(GL_POLYGON);
     for (int i = 0; i < 360; i++) {
     float degInRad = i * PI / 180;
     glVertex2f(x + cos(degInRad) * radius, y + sin(degInRad) * radius);
     }
     glEnd();
    glFlush();
    }

void enviroment(){
	
	//FLOOR OF THE ROAD
	glBegin(GL_POLYGON);
	glColor3f(0.36,0.25,0.20); //DarkBrown = color red 0.36 green 0.25 blue 0.20
	glVertex2i(-100,100);
	glVertex2i(-100,-210);
	glVertex2i(330,-210);
	glVertex2i(200,100);
	glEnd();
	
	//SHOP IN THE STREET
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.3,0);
	glVertex2i(-50,200);
    glVertex2i(-50,0);	
	glVertex2i(160,0);
	glVertex2i(160,200);
	glEnd();
	
	//ROOF OF THE SHOP
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glColor3f(0.1,0,0);
	glVertex2i(-50,250);
    glVertex2i(-80,200);	
	glVertex2i(190,200);
	glVertex2i(160,250);
	glEnd();
	
	//DOOR OF THE SHOP
	
	glBegin(GL_POLYGON);
//	glColor3f(1,1,1);
	glVertex2i(-30,150);
    glVertex2i(-30,0);	
	glVertex2i(10,0);
	glVertex2i(10,150);
	glEnd();
	
	//HAND OF THE DOOR
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glVertex2i(-25,77);
    glVertex2i(-25,73);	
	glVertex2i(-15,73);
	glVertex2i(-15,77);
	glEnd();
	
	//HAND OF THE DOOR
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glVertex2i(-27,90);
    glVertex2i(-27,60);	
	glVertex2i(-22,60);
	glVertex2i(-22,90);
	glEnd();
	
    //WINDOW OF THE SHOP
	glBegin(GL_POLYGON);
	glColor3f(0,0.6,1);
	glVertex2i(70,170);
    glVertex2i(70,110);	
	glVertex2i(120,110);
	glVertex2i(120,170);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2i(70,170);
    glVertex2i(70,110);	
	glVertex2i(120,110);
	glVertex2i(120,170);
	glEnd();
	
	//WINDOW CROSS STRUCTURE OF THE SHOP
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2i(70,140);
    glVertex2i(120,140);	
	glVertex2i(95,180);
	glVertex2i(95,110);
	glEnd();
		
		//CHAIR BEGINS
	//The Left vertical metal
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(60,-30);
	glVertex2i(60,60);
	glVertex2i(65,60);
	glVertex2i(65,-30);
	glEnd();
	
	//The Left horizontal Wood Holder
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2i(60,-35);
	glVertex2i(50,-50);
	glVertex2i(62,-50);
	glVertex2i(65,-35);
	glEnd();
	
	//FRONT The Left horizontal Wood Holder
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(54,-55);
	glVertex2i(54,-65);
	glVertex2i(60,-65);
	glVertex2i(60,-55);
	glEnd();
	
	//SIDE The Left horizontal Wood Holder
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2i(60,-65);
	glVertex2i(63,-55);
	//glVertex2i(60,);
	//glVertex2i(60,45);
	glEnd();
	
	//FOOT OF The Left horizontal Wood Holder
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(57,-65);
	glVertex2i(57,-90);
	glVertex2i(63,-90);
	glVertex2i(63,-58);
	glEnd();
	
	//SIDE OF  The Left FOOT
	glBegin(GL_LINES);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(63,-90);
	glVertex2i(66,-80);
	glVertex2i(66,-80);
	glVertex2i(66,-57);
	glEnd();
	
	//The Right vertical metal
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(135,-30);
	glVertex2i(135,60);
	glVertex2i(140,60);
	glVertex2i(140,-30);
	glEnd();
	
	//The Right HORIZONTAL Wood Holder
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(135,-35);
	glVertex2i(140,-50);
	glVertex2i(150,-50);
	glVertex2i(140,-35);
	glEnd();
	
	//FRONT OF The Right HORIZONTAL Wood Holder
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(140,-55);
	glVertex2i(140,-65);
	glVertex2i(145,-65);
	glVertex2i(145,-55);
	glEnd();
	
	//SIDE OF The Right HORIZONTAL Wood Holder
	glBegin(GL_LINES);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(140,-65);
	glVertex2i(137,-55);
//	glVertex2i(145,35);
//	glVertex2i(145,45);
	glEnd();
	
	
	//FOOT OF The Right HORIZONTAL Wood Holder
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(137,-58);
	glVertex2i(137,-90);
	glVertex2i(143,-90);
	glVertex2i(143,-65);
	glEnd();
	
	//SIDE OF The Right FOOT
	glBegin(GL_LINES);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(137,-90);
	glVertex2i(134,-80);
	glVertex2i(134,-80);
	glVertex2i(134,-58);
	glEnd();
	
	//The sitting Bar of the chair//BACK
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(20,-50);
	glVertex2i(40,-40);
	glVertex2i(155,-40);
	glVertex2i(175,-50);
	glEnd();
	
	//The sitting Bar of the chair//FRONT
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(45,-30);
	glVertex2i(55,-20);
	glVertex2i(145,-20);
	glVertex2i(155,-30);
	glEnd();
	
    //Front of the chair//BACK
	glBegin(GL_LINE_LOOP);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(45,-30);
	glVertex2i(45,-35);
	glVertex2i(155,-35);
	glVertex2i(155,-30);
	glEnd();
	
	
    //Front of the chair//FRONT
	glBegin(GL_LINE_LOOP);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(20,-50);
	glVertex2i(20,-55);
	glVertex2i(173,-55);
	glVertex2i(173,-50);
	glEnd();
	
	//Second Bar of the chair 
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(50,0);
	glVertex2i(50,30);
	glVertex2i(150,30);
	glVertex2i(150,0);
	glEnd();
	
	//First Bar of the chair 
	glBegin(GL_POLYGON);
	glColor3f(10.0,2.0,5.0);
	glVertex2i(50,50);
	glVertex2i(50,80);
	glVertex2i(150,80);
	glVertex2i(150,50);
	glEnd();
	//END OF THE CHAIR
	
	//THE GRASS
	glBegin(GL_POLYGON);
	glColor3f(0,1,0);
	glVertex2i(330,-130);
	glVertex2i(230,100);
	glVertex2i(400,100);
	glVertex2i(400,-130);
	glEnd();
	
	//HEIGHT OF THE GRASS
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2i(330,-130);
	glVertex2i(330,-150);
	glVertex2i(400,-150);
	glVertex2i(400,-130);
	glEnd();
	
	//SIDE OF THE GRASS
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2i(330,-130);
	glVertex2i(330,-150);
	glVertex2i(230,80);
	glVertex2i(230,100);
	glEnd();
	
	//THE BRIDGE
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex2i(208,80);
	glVertex2i(334,-220);
	glVertex2i(360,-220);
	glVertex2i(230,80);
	glEnd();
	
	//FILL
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex2i(325,-150);
	glVertex2i(330,-230);
	glVertex2i(400,-230);
	glVertex2i(400,-150);
	glEnd();
	
	//THE LIGHT BULB BEGINS
	glBegin(GL_POLYGON);
	glColor3f(0.858824  ,0.576471,0.439216); //color red 0.71 green 0.65 blue 0.26   color red 0.858824 green 0.576471 blue 0.439216
	glVertex2i(210,0);
	glVertex2i(210,-80);
	glVertex2i(230,-80);
	glVertex2i(230,0);
	glEnd();
	
		//THE  ARM OF LIGHT BULB
	glBegin(GL_POLYGON);
	glVertex2i(217,250);
	glVertex2i(217,0);
	glVertex2i(223,0);
	glVertex2i(223,250);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(217,250);
	glVertex2i(190,240);
	glVertex2i(195,240);
	glVertex2i(223,250);
	glEnd();
	
	
		//THE  BLUB HOLDER BOX
	glBegin(GL_POLYGON);
	glVertex2i(180,240);
	glVertex2i(170,220);
	glVertex2i(200,220);
	glVertex2i(190,240);
	
	glEnd();

	//END OF THE LIGHT BULB
	
	//THE ROAD FRONT OF WALKER ROAD
		
	//THE ROAD CORNER
	
	glBegin(GL_POLYGON);
	glColor3f(5,5,5);
	glVertex2i(-100,-230);
	glVertex2i(-100,-210);
	glVertex2i(330,-210);
	glVertex2i(330,-230);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex2i(-100,-230);
	glVertex2i(-100,-300);
	glVertex2i(430,-300);
	glVertex2i(400,-230);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(200,100);
	glVertex2i(160,100);
//	glVertex2i(400,-210);
//	glVertex2i(400,-230);
	glEnd();
	
	//THE GRADEN BEGINS
	
	
	//TREE 1
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f);
	glVertex2i(340,130);
	glVertex2i(320,90);
	glVertex2i(360,90);
	
	glVertex2i(340,100);
	glVertex2i(320,60);
	glVertex2i(360,60);
	
	glVertex2i(340,70);
	glVertex2i(320,30);
	glVertex2i(360,30);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.4,0,0);
	glVertex2i(335,30);
	glVertex2i(335,0);
	glVertex2i(345,0);
	glVertex2i(345,30);
	glEnd();
	
	//TREE 2
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f);
	glVertex2i(370,150);
	glVertex2i(350,110);
	glVertex2i(390,110);
	
	glVertex2i(370,120);
	glVertex2i(350,80);
	glVertex2i(390,80);
	
	glVertex2i(370,90);
	glVertex2i(350,50);
	glVertex2i(390,50);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.1,0,0);
	glVertex2i(365,50);
	glVertex2i(365,20);
	glVertex2i(375,20);
	glVertex2i(375,50);
	glEnd();
	
	//TREE 3
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f);
	glVertex2i(370,150);
	glVertex2i(350,110);
	glVertex2i(390,110);
	
	glVertex2i(370,120);
	glVertex2i(350,80);
	glVertex2i(390,80);
	
	glVertex2i(370,90);
	glVertex2i(350,50);
	glVertex2i(390,50);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.1,0,0);
	glVertex2i(365,50);
	glVertex2i(365,20);
	glVertex2i(375,20);
	glVertex2i(375,50);
	glEnd();

    //TREE 4
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f);
	glVertex2i(320,150);
	glVertex2i(300,110);
	glVertex2i(340,110);
	
	glVertex2i(320,120);
	glVertex2i(300,80);
	glVertex2i(340,80);
	
	glVertex2i(320,90);
	glVertex2i(300,50);
	glVertex2i(340,50);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.1,0,0);
	glVertex2i(315,50);
	glVertex2i(315,20);
	glVertex2i(325,20);
	glVertex2i(325,50);
	glEnd();

	glFlush();
    
}
void painter(){
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50.0,400.0,-300.0,400.0);
   
    //Sun is draw here
    
    glColor3f(0.8,0.498039,0.196078);//color red 0.8 green 0.498039 blue 0.196078
    drawCloud(100+sun,200+up,25);
    
      glColor3f(1,1,1);
    drawCloud(230+sun,320,20);
    drawCloud(240+sun,300,20);
    drawCloud(210+sun,320,20);
    drawCloud(225+sun,300,20);
    drawCloud(225+sun,330,20);
     if(sun < -10){
      	glClearColor(0,0,0,0);
      }
      if(sun > 10){
      	glClearColor(0.196078 ,0.1,0.8,0);
      }
      if(sun > 30){
      	glClearColor(0.196 ,0.1,0.99,0);
      }
      if(sun > 60){
      	glClearColor(0.196078 ,0.6,0.8,0);//sky blue
      }
      if(sun > 250){
      	glClearColor(0.196 ,0.1,0.99,0);
      }
      if(sun > 300){
      	glClearColor(0.196078 ,0.1,0.8,0);
      }
      
     
	enviroment();
	if(sun > 350){
      	glClearColor(0,0,0,0);
      		//THE  LIGHT EFFECT
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2i(175,220);
	glColor3f(0,0,0);
	glVertex2i(160,170);
	glVertex2i(215,170);
	glColor3f(1,1,1);
	glVertex2i(195,220);
	glEnd();
      }
    glTranslatef(personM,0,0);
    glRotatef(angle,0,1,0);
    person();

	glutSwapBuffers();
}

void timer(int){
	
	personM += speedPerson;
	sun += speedSun;
	up += speedUp;
	cloud += speedCloud;
	leg1 += Lmove1;
	leg2 += Lmove2;
	
	//person
	if(personM > 250){
		speedPerson = -2;
	    angle = 180;
	}
	if(personM < -90){
		speedPerson = 2;
		angle = 0;
	}
	//sun
	if(up > 200){
		speedUp = -0.75;
	}

	if(sun > 550){
		sun = -30;
		up = 0;
		speedUp = 0.75;
	}
	//cloud
	if(cloud > 200){
		cloud = 10;
	}
//	person's leg
	if(leg1 > 10){
		Lmove1 = -1;
	}
	if(leg2 < -10){
		Lmove2 = 1;
	}
	if(leg1 < -5){
		Lmove1 = 1;
	}
	if(leg2 > 5){
		Lmove2 = -1;
	}
	glutPostRedisplay();
	glutTimerFunc(1000/30, timer, 0);
}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(1500,1200);
	glutInitWindowPosition(0,0);
	glutCreateWindow("CORNER OF STREET");
	glutDisplayFunc(painter);
	glutTimerFunc(0, timer, 0);
	
	glutMainLoop();
	
	return 0;
}
