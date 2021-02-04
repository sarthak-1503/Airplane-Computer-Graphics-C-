#include<bits/stdc++.h>
#include<graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;

void main_central_body(int,int);
void biggest_wing(int,int);
void down_back_side(int,int);
void vertical_wing(int,int);
void small_wings(int,int);
void glass_and_door(int,int);
void drawPlane();

int main()
{
    string s;
    cout<<"Should the airplane take-off?\n";
    cin>>s;

    if(s=="Yes" || s=="yes")
    {
        initwindow(1800,1800,"The Moving Airplane",50,50,false,true);
        drawPlane();
    }
    else
    {
        cout<<"\nAirplane can't be started to take-off";
    }

    return 0;
}

void main_central_body(int i,int j)
{
    line(145+i,220-j+240,475+i,175-j+240);
    arc(470+i, 205-j+240, 20, 90, 30);
    ellipse(500+i,210-j+240,270,95,15,15);
    line(200+i,260-j+240,265+i,250-j+240);
    line(350+i,240-j+240,500+i,225-j+240);
    line(350+i,240-j+240,200+i,375-j+240);
    line(200+i,375-j+240,175+i,380-j+240);
}

void biggest_wing(int i,int j)
{
    line(175+i,380-j+240,270+i,270-j+240);
    line(270+i,270-j+240,270+i,260-j+240);
    line(270+i,260-j+240,260+i,240-j+240);
    line(260+i,240-j+240,340+i,230-j+240);
    line(340+i,230-j+240,350+i,240-j+240);
    line(340+i,230-j+240,195+i,375-j+240);
}

void down_back_side(int i,int j)
{
    line(200+i,260-j+240,100+i,250-j+240);
    line(100+i,250-j+240,100+i,230-j+240);
    line(100+i,230-j+240,110+i,220-j+240);
}

void vertical_wing(int i,int j)
{
    line(110+i,225-j+240,90+i,150-j+240);
    line(90+i,150-j+240,110+i,150-j+240);
    line(110+i,150-j+240,150+i,250-j+240);
    line(150+i,225-j+240,110+i,225-j+240);
    line(95+i,170-j+240,105+i,170-j+240);
}

void small_wings(int i,int j)
{
    line(105+i,245-j+240,60+i,275-j+240);
    line(60+i,275-j+240,75+i,275-j+240);
    line(75+i,275-j+240,150+i,245-j+240);
    line(150+i,245-j+240,105+i,245-j+240);
    line(115+i,245-j+240,65+i,275-j+240);
    setcolor(14);
}

void glass_and_door(int i,int j)
{
    int poly[30];
    rectangle(400+i,205-j+240,410+i,230-j+240);
    poly[0]=487+i;
    poly[1]=180-j+240;
    poly[2]=470+i;
    poly[3]=180-j+240;
    poly[4]=475+i;
    poly[5]=190-j+240;
    poly[6]=495+i;
    poly[7]=190-j+240;
    drawpoly(4,poly);
}

void drawPlane()
{
    int i=0,j=0,k=7,c=0,p=0,store;


    while(i<10000 && j<10000)
    {
        outtextxy(200,40,"Rohit Tomar (2K18/CO/303)");
        outtextxy(200,70,"Sarthak Arora (2K18/CO/325)");

        // main central body of the airplane
        main_central_body(i,j);

        //Biggest wing at the middle of the body of the airplane
        biggest_wing(i,j);

        // downward backside of the airplane
        down_back_side(i,j);


        // backward part with vertical wing part of the airplane
        vertical_wing(i,j);

        // backward small horizontal wing part of the airplane
        small_wings(i,j);

        //front glass part and airplane door part
        glass_and_door(i,j);

        //ground
        line(0,550,10000,550);


        if(c<14)
        {
            k=0;
        }
        else
        {
            if(c==14)
                k=9;
        }

        j+=k;
        i+=6;
        c++;
        if(c>14 && j%10 == 0 && j>=-30)
            k -- ;

        if(c>14 && j<-30)
            k=0;

        store = k;

        if(j==0)
        {
            if(p<140)
            {
                k=0;
            }
            else
            {
                k=store;
            }
            p++;
        }

        if(j>=-50)
        {
            delay(100);
        }
        else
        {
            delay(130);
        }
        cleardevice();

    }
    getch();
}
