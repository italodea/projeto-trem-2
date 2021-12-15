#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>



#define FREE 1
#define BUSY 0

sem_t mutex;

int   railState[7];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int i;
    ui->setupUi(this);

    trem1 = new Trem(1,60,90, ui->horizontalSlider->value());
    trem2 = new Trem(2,460,30, ui->horizontalSlider_2->value());
    trem3 = new Trem(3,870,90, ui->horizontalSlider_3->value());
    trem4 = new Trem(4,335,270, ui->horizontalSlider_4->value());
    trem5 = new Trem(5,605,270, ui->horizontalSlider_5->value());

    connect(trem1,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem2,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem3,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem4,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem5,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));

    connect(trem1,SIGNAL(joinRail(int,int)),SLOT(joinRail(int,int)));
    connect(trem2,SIGNAL(joinRail(int,int)),SLOT(joinRail(int,int)));
    connect(trem3,SIGNAL(joinRail(int,int)),SLOT(joinRail(int,int)));
    connect(trem4,SIGNAL(joinRail(int,int)),SLOT(joinRail(int,int)));
    connect(trem5,SIGNAL(joinRail(int,int)),SLOT(joinRail(int,int)));

    connect(trem1,SIGNAL(outRail(int)),SLOT(outRail(int)));
    connect(trem2,SIGNAL(outRail(int)),SLOT(outRail(int)));
    connect(trem3,SIGNAL(outRail(int)),SLOT(outRail(int)));
    connect(trem4,SIGNAL(outRail(int)),SLOT(outRail(int)));
    connect(trem5,SIGNAL(outRail(int)),SLOT(outRail(int)));

    sem_init(&mutex, 0, 1);
    for(i= 0; i < 7 ;i++ ){
        railState[i] = FREE;
    }


    trem1->start();
    trem2->start();
    trem3->start();
    trem4->start();
    trem5->start();

}


void MainWindow::updateInterface(int id, int x, int y){
    switch(id){
    case 1:
        ui->label_trem1->setGeometry(x,y,21,17);
        break;
    case 2:
        ui->label_trem2->setGeometry(x,y,21,17);
        break;
    case 3:
        ui->label_trem3->setGeometry(x,y,21,17);
        break;
    case 4:
        ui->label_trem4->setGeometry(x,y,21,17);
        break;
    case 5:
        ui->label_trem5->setGeometry(x,y,21,17);
        break;
    default:
        break;
    }
}







void MainWindow::joinRail(int id, int rail){
    sem_wait(&mutex);
    if(id == 1){
        if(rail == 0){
            if(railState[0] == FREE && !(railState[5] == BUSY && railState[1] == BUSY && railState[2] == BUSY && railState[6] == BUSY) && !(railState[2] == BUSY && railState[4] == BUSY && railState[6] == BUSY) && (railState[2] == FREE || railState[3] == FREE)){
                railState[0] = BUSY;
                trem1->setX(ui->label_trem1->x()+10);
            }
        }
        else if(rail == 2){
            if(railState[2] == FREE){
                railState[2] = BUSY;
                trem1->setY(ui->label_trem1->y()+10);
            }
        }
    }
    else if(id == 2){
        if(rail == 0){
            if(railState[0] == FREE){
                railState[0] = BUSY;
                trem2->setX(ui->label_trem2->x()-10);
            }
        }
        else if(rail == 1){
            if(railState[1] == FREE && !(railState[0] == BUSY && railState[5] == BUSY && railState[2] == BUSY && railState[6] == BUSY) && !(railState[3] == BUSY && railState[5] == BUSY && railState[6] == BUSY) && (railState[4] == FREE || railState[5] == FREE)){
                railState[1] = BUSY;
                trem2->setX(ui->label_trem2->x()+10);
            }
        }
        else if(rail == 4){
            if(railState[4] == FREE && !(railState[0] == BUSY && railState[2] == BUSY && railState[6] == BUSY) && (railState[3] == FREE || railState[6] == FREE)){
                railState[4] = BUSY;
                trem2->setY(ui->label_trem2->y()+10);
            }
        }
        else if(rail == 3){
            if(railState[3] == FREE && (railState[0] == FREE || railState[2] == FREE)){
                railState[3] = BUSY;
                trem2->setX(ui->label_trem2->x()-10);
            }
        }
    }
    if(id == 3){
        if(rail == 5){
            if(railState[5] == FREE && !(railState[0] == BUSY && railState[1] == BUSY && railState[2] == BUSY && railState[6] == BUSY) && !(railState[1] == BUSY && railState[3] == BUSY && railState[6] == BUSY) && (railState[1] == FREE || railState[4] == FREE)){
                railState[5] = BUSY;
                trem3->setX(ui->label_trem3->x()-10);
            }
        }
        else if(rail == 1){
            if(railState[1] == FREE){
                railState[1] = BUSY;
                trem3->setX(ui->label_trem3->x()-10);
            }
        }
    }
    if(id == 4){
        if(rail == 2){
            if(railState[2] == FREE && !(railState[0] == BUSY && railState[1] == BUSY && railState[5] == BUSY && railState[6] == BUSY) && !(railState[0] == BUSY && railState[4] == BUSY && railState[6] == BUSY) && (railState[0] == FREE || railState[3] == FREE)){
                railState[2] = BUSY;
                trem4->setY(ui->label_trem4->y()-10);
            }
        }
        else if(rail == 3){
            if(railState[3] == FREE && !(railState[1] == BUSY && railState[5] == BUSY && railState[6] == BUSY) && (railState[4] == FREE || railState[6] == FREE)){
                railState[3] = BUSY;
                trem4->setX(ui->label_trem4->x()+10);
            }
        }
        else if(rail == 6){
            if(railState[6] == FREE){
                railState[6] = BUSY;
                trem4->setX(ui->label_trem4->x()+10);
            }
        }
    }
    if(id == 5){
        if(rail == 4){
            if(railState[4] == FREE && (railState[1] == FREE || railState[5] == FREE)){
                railState[4] = BUSY;
                trem5->setY(ui->label_trem5->y()-10);
            }
        }
        else if(rail == 5){
            if(railState[5] == FREE){
                railState[5] = BUSY;
                trem5->setX(ui->label_trem5->x()+10);
            }
        }
        else if(rail == 6){
            if(railState[6] == FREE && !(railState[0] == BUSY && railState[1] == BUSY && railState[2] == BUSY && railState[5] == BUSY) && !(railState[1] == BUSY && railState[3] == BUSY && railState[5] == BUSY) && !(railState[0] == BUSY && railState[2] == BUSY && railState[4] == BUSY) && (railState[3] == FREE || railState[4] == FREE)){
                railState[6] = BUSY;
                trem5->setX(ui->label_trem5->x()-10);
            }
        }
    }
    sem_post(&mutex);
}



void MainWindow::outRail(int rail){
    sem_wait(&mutex);
    railState[rail] = FREE;
    sem_post(&mutex);
}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    trem1->setSpeed(value);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    trem2->setSpeed(value);
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    trem3->setSpeed(value);
}

void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    trem4->setSpeed(value);
}

void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{
    trem5->setSpeed(value);
}
