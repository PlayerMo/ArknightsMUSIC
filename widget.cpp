#include "widget.h"
#include "./ui_widget.h"
#include<Qprocess>
#include<QPushButton>
#include<QMediaPlayer>
#include<QMovie>
#include<QAudio>
#include<QAudioOutput>
#include<QDebug>
#include<QString>
#include<QMessageBox>
#include<QIcon>
short check=0;

QMediaPlayer *startSound;
QAudioOutput *op;
QMessageBox *mytext;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
//

    startSound=new QMediaPlayer(this);
    op=new QAudioOutput(this);
    // QIcon *ico=new QIcon();
    //ico->addFile(QIcon("./1531207541719926.ico") );
    setWindowIcon(QIcon("./1.ico"));
    setWindowTitle("明日方舟音乐播放器");
    //setAutoFillBackground(1);
    ui->play->setText("暂停");
    mytext=new QMessageBox(this);


     //创建一个音乐播放器
    /*
     * QMediaPlayer *startSound;
    //connect(startSound,SIGNAL(positionChanged(qint64)),this,SLOT(postitionChanged(qint64)));
    QAudioOutput *op;
    startSound->setSource(QUrl::fromLocalFile("./music/生命流.mp3"));


    startSound->setAudioOutput(op);  //音量

    op->setVolume(50);

  //  QMovie *movie = new QMovie("视频+图片+音频/灰と境界 完成版.mp4");


   // movie->start();
   // QMediaPlayer *player = new QMediaPlayer;
   // player->setMedia(QUrl::fromLocalFile("path/to/your/media/file"));

*/
  /*  QMediaPlayer *startSound=new QMediaPlayer(this);
    QAudioOutput *op=new QAudioOutput(this);

    startSound->setSource(QUrl::fromLocalFile("./music/生命流.mp3"));


    startSound->setAudioOutput(op);  //音量

    op->setVolume(50);
    //check=0;
    */

    qDebug()<<"SHA";

    startSound->setAudioOutput(op);  //音量



    startSound->setLoops(-1);
    connect(ui->xunyin,SIGNAL(clicked()),this,SLOT(xunyin_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(push_button2_clicked()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(push_button_clicked()));
    connect(ui->auto_solution,SIGNAL(clicked()),this,SLOT(auto_solution_clicked()));
    connect(ui->day,SIGNAL(clicked()),this,SLOT(day_clicked()));
    connect(ui->night,SIGNAL(clicked()),this,SLOT(night_clicked()));
    connect(ui->shengcheng,SIGNAL(clicked()),this,SLOT(shengcheng_clicked()));
    connect(ui->play, SIGNAL(clicked() ) ,this,SLOT(play_clicked() ) );
    connect(ui->city, SIGNAL(clicked() ) ,this,SLOT(city_clicked()));
    connect(ui->life,SIGNAL(clicked()),this,SLOT(on_life_clicked()));
    connect(ui->times,&QDoubleSpinBox::valueChanged,this,&Widget::on_times_valueChanged);
    connect(ui->newhope,SIGNAL(clicked()),this,SLOT(on_newhope_clicked()));
    connect(ui->as_i_see,SIGNAL(clicked()),this,SLOT(as_i_see_clicked()));
    connect(ui->yinhangmp3,SIGNAL(clicked()),this,SLOT(yinhangmp3_clicked()));
    connect(ui->dial,&QDial::sliderMoved,this,&Widget::on_dial_valueChanged);
    connect(ui->haiyuan,SIGNAL(clicked()),this,SLOT(haiyuan_clicked()));
    connect(ui->qingdian,SIGNAL(clicked()),this,SLOT(qingdian_clicked()));
    connect(ui->winter,SIGNAL(clicked()),this,SLOT(winter_clicked()));
    connect(ui->wild,SIGNAL(clicked()),this,SLOT(wild_clicked()));
    connect(ui->ruins,SIGNAL(clicked()),this,SLOT(ruins_clicked()));
    connect(ui->haiyuan_past,SIGNAL(clicked()),this,SLOT(haiyuan_past_clicked()));
    /*if(check==1){
        startSound->pause();

        check=0;
    }
    else if(check==2){
        startSound->play();
        check=0;
    }
    */

    /*if(check){
        startSound->play();
    }
*/




}

Widget::~Widget()
{

    delete ui;
}


void Widget::play_clicked()
{
    if(ui->play->text()=="暂停") {

           startSound->pause();

           ui->play->setText("播放");

          // check=1;

    }

    else{
           startSound->play();
           ui->play->setText("暂停");
           //check=2;

       }
}

void Widget::on_life_clicked()
{

    startSound->setSource(QUrl::fromLocalFile("./music/生命流.mp3"));



    startSound->play();
    op->setVolume(50);

}


void Widget::on_times_valueChanged(double arg1)
{
    startSound->setPlaybackRate(arg1);

}


void Widget::on_dial_valueChanged(int value)
{


    startSound->pause();


    startSound->setAudioOutput(op);
    startSound->play();
    op->setVolume(value);
}



void Widget::on_newhope_clicked()
{
    startSound->setSource(QUrl::fromLocalFile("./music/newhope1.mp3"));



    startSound->play();
    op->setVolume(50);
}

void Widget::as_i_see_clicked(){

    startSound->setSource(QUrl::fromLocalFile("./music/as_i_see.mp3"));

    startSound->play();
    op->setVolume(50);

}


void Widget::haiyuan_past_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/Mizuki.mp3"));

    startSound->play();
    op->setVolume(50);
}

void Widget::yinhangmp3_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/引航者试炼.mp3"));

    startSound->play();
    op->setVolume(50);
}

void Widget::shengcheng_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/圣城日常.mp3"));

    startSound->play();
    op->setVolume(50);
}

void Widget::day_clicked(){

    startSound->setSource(QUrl::fromLocalFile("./music/VOLCANODay.mp3"));

    startSound->play();
    op->setVolume(50);
}

void Widget::night_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/VOLCANONight.mp3"));

    startSound->play();
    op->setVolume(50);
}


void Widget::auto_solution_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/autosolution.m4a"));

    startSound->play();
    op->setVolume(50);

}


void Widget::wild_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/林野.mp3"));

    startSound->play();
    op->setVolume(50);

}

void Widget::winter_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/严冬.mp3"));

    startSound->play();
    op->setVolume(50);

}

void Widget::ruins_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/残垣.mp3"));

    startSound->play();
    op->setVolume(50);

}

void Widget::haiyuan_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/haiyuan.mp3"));

    startSound->play();
    op->setVolume(50);

}

void Widget::qingdian_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/庆典.mp3"));

    startSound->play();
    op->setVolume(50);

}

void Widget::city_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/city.mp3"));
    startSound->play();
    op->setVolume(50);
}

void Widget::push_button_clicked(){
    mytext->setText("音乐来源于明日方舟；"
                    "\n 循环版来自于 林示レイシ  1n5822   M18Hellcat "
                    "\n 程序作者PlayerMo(Player_Mo)"
                    "\n"
                    "\n"
                    "\n"
                    "\n 私货：求推荐教NOIP算法（信息学竞赛）的老师，一对一，价格可谈（校内没有qwq）"
                    "\n b站账号Player_Mo");
    mytext->exec();
}

void Widget::push_button2_clicked(){
    mytext->setText("1.145\n"
                    "   用Qt重做\n"
                    "   增添了倍速功能以及歌曲。\n"
                    "   寻隐没找到循环版。。。。。。\n"
                    "0.001\n"
                    "   用Easy-X做的\n"
                    ""
                    );
    mytext->exec();
}
void Widget::xunyin_clicked(){
    startSound->setSource(QUrl::fromLocalFile("./music/寻隐.mp3"));
    startSound->play();
    op->setVolume(50);
}
