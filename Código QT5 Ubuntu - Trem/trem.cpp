#include "trem.h"
#include <QtCore>


Trem::Trem(int ID, int x, int y, int speed){
    this->ID = ID;
    this->x = x;
    this->y = y;
    this->speed = speed;
}

void Trem::setSpeed(int value){
    speed = value;
}
void Trem::setX(int value){
    x = value;
}
void Trem::setY(int value){
    y = value;
}


void Trem::run(){
    while(true){
        if(speed > 0){
            switch(ID){
            case 1:
                if(y == 30 && x == 310){
                    emit joinRail(ID,0);
                }
                else if(y == 150 && x == 310){
                    emit outRail(0);
                    x-=10;
                }
                else if(y == 130 && x == 330){
                    emit joinRail(ID,2);
                }
                else if(y == 150 && x == 190){
                    emit outRail(2);
                    x-=10;
                }
                else if (y == 30 && x <330)
                    x+=10;
                else if (x == 330 && y < 150)
                    y+=10;
                else if (x > 60 && y == 150)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x, y, speed);
                break;

            case 2:
                if(y == 150 && x == 350){
                    emit joinRail(ID,0);
                }
                else if(y == 30 && x == 350){
                    emit outRail(0);
                    x+=10;
                }
                else if(y == 30 && x == 580){
                    emit joinRail(ID,1);
                }
                else if(y == 150 && x == 590){
                    emit outRail(1);
                    x-=10;
                }
                else if(y == 120 && x == 600){
                    emit joinRail(ID,4);
                }
                else if(y == 150 && x == 450){
                    emit outRail(4);
                    x-=10;
                }
                else if(y == 150 && x == 490){
                    emit joinRail(ID,3);
                }
                else if(y == 150 && x == 330){
                    emit outRail(3);
                    y-=10;
                }
                else if (y == 30 && x <600)
                    x+=10;
                else if (x == 600 && y < 150)
                    y+=10;
                else if (x > 330 && y == 150)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y, speed);
                break;


            case 3:
                if(y == 30 && x == 620){
                    emit outRail(1);
                    x+=10;
                }
                else if(y == 150 && x == 620){
                    emit joinRail(ID,1);
                }
                else if(y == 150 && x == 600){
                    emit outRail(5);
                    y-=10;
                }
                else if(y == 150 && x == 770){
                    emit joinRail(ID,5);
                }
                else if (y == 30 && x <870)
                    x+=10;
                else if (x == 870 && y < 150)
                    y+=10;
                else if (x > 600 && y == 150)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y, speed);
                break;
            case 4: //Trem 4
                if(y == 150 && x == 445){
                    emit joinRail(ID,6);
                }
                else if(y == 270 && x == 465){
                    emit outRail(6);
                    x-=10;
                }
                else if(y == 170 && x == 195){
                    emit joinRail(ID,2);
                }
                else if(y == 150 && x == 335){
                    emit outRail(2);
                    x+=10;
                }
                else if(y == 150 && x == 305){
                    emit joinRail(ID,3);
                }
                else if(y == 150 && x == 465){
                    emit outRail(3);
                    y+=10;
                }
                else if (y == 150 && x <465)
                    x+=10;
                else if (x == 465 && y < 270)
                    y+=10;
                else if (x > 195 && y == 270)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y, speed);
                break;


            case 5:
                if(y == 270 && x == 485){
                    emit joinRail(ID,6);
                }
                else if(y == 150 && x == 465){
                    emit outRail(6);
                    x+=10;
                }
                else if(y == 170 && x == 465){
                    emit joinRail(ID,4);
                }
                else if(y == 150 && x == 615){
                    emit outRail(4);
                    x+=10;
                }
                else if(y == 150 && x == 565){
                    emit joinRail(ID,5);
                }
                else if(y == 160 && x == 735){
                    emit outRail(5);
                    y+=10;
                }
                else if (y == 150 && x <735)
                    x+=10;
                else if (x == 735 && y < 270)
                    y+=10;
                else if (x > 465 && y == 270)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y, speed);
                break;
            default:
                break;
            }


            msleep(200-speed);
        }
    }
}
