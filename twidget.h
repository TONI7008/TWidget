#ifndef TWIDGET_H
#define TWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QTimer>
#include <QPainter>
#include <QPainterPath>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QFile>
#include <QShowEvent>

class TWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TWidget(QWidget *parent = nullptr);
    ~TWidget();
    void setEnableBackground(bool);
    void setBackgroundImage(QString);
    void setBorderRadius(short);
    short borderRadius();

    void pressNext();
    void pressPrev();
protected:
    void resizeEvent(QResizeEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent* event) override;
    void hideEvent(QHideEvent *event) override;
    void moveEvent(QMoveEvent *event) override;
    void showEvent(QShowEvent *event) override;
    void focusInEvent(QFocusEvent *event) override;
    void focusOutEvent(QFocusEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
signals:
    void Clicked(const QPoint& pos);
    void rightClicked(const QPoint& pos);
    void doubleClicked(const QPoint& pos);
    void ctrlSelected();

    void resizing();
    void resizingDone();

    void isHiden();
    void isMoving();
    void isShown();
    void previousPressed();
    void nextPressed();
    void focusIn();
    void focusOut();
    void debugPressed();

private:
    QTimer* timer;
    QTimer* resizingTimer;
    bool isDoubleClick=false;
    bool enableBackground;
    QPoint m_clickPos;
    short m_bRadius=0;
    QPixmap backgroundImage=QPixmap(":/Icons/fullblurbluesky.png");

};

#endif // TWIDGET_H
