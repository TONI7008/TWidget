#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : TWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(this,&TWidget::resizing,this,[this]{
        ui->statutLabel->setText("widget is resizing....");
    });
    connect(this,&TWidget::isMoving,this,[this]{
        ui->statutLabel->setText("widget is moving....");
    });
    connect(this,&TWidget::Clicked,this,[this]{
        ui->statutLabel->setText("widget is clicked....");
    });
    connect(this,&TWidget::rightClicked,this,[this]{
        ui->statutLabel->setText("widget is rightclicked....");
    });
    connect(this,&TWidget::doubleClicked,this,[this]{
        ui->statutLabel->setText("widget is doubleclicked....");
    });
    connect(this,&TWidget::previousPressed,this,[this]{
        ui->statutLabel->setText("widget previous is pressed....");
    });
    connect(this,&TWidget::nextPressed,this,[this]{
        ui->statutLabel->setText("widget next is pressed....");
    });
    connect(this,&TWidget::debugPressed,this,[this]{
        ui->statutLabel->setText("widget is debugpressed....");
    });
}

Widget::~Widget()
{
    delete ui;
}
