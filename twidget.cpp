#include "twidget.h"

TWidget::TWidget(QWidget *parent)
    : QWidget(parent), isDoubleClick(false), enableBackground(false) {
    timer = new QTimer(this);
    timer->setSingleShot(true);

    connect(timer, &QTimer::timeout, this, [this] {
        if (!isDoubleClick) {
            emit Clicked(m_clickPos);
        }
    });

    resizingTimer = new QTimer(this);
    resizingTimer->setSingleShot(true);
    connect(resizingTimer, &QTimer::timeout, this, [this] {
        emit resizingDone();
    });

    connect(this, &TWidget::resizing, this, [this] {
        resizingTimer->start(500);
    });
}

TWidget::~TWidget() {
    delete timer;
    delete resizingTimer;
}

void TWidget::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::RightButton) {
        emit rightClicked(event->pos());
        return;
    }
    if (event->button() == Qt::LeftButton) {
        if (event->modifiers() & Qt::ControlModifier) {
            emit ctrlSelected();
        } else {
            m_clickPos = event->pos();
            isDoubleClick = false;  // Reset here to ensure next click is registered
            if (!timer->isActive()) {
                timer->start(175);
            }
        }
    }
    if (event->button() == Qt::XButton1) {
        emit previousPressed();
    } else if (event->button() == Qt::XButton2) {
        emit nextPressed();
    }
}

void TWidget::mouseDoubleClickEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        isDoubleClick = true;
        timer->stop();
        emit doubleClicked(event->pos());
    }
}


void TWidget::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);

    QPainter painter(this);
    if (!painter.isActive()) {
        return;
    }

    // Activate antianaliasing for smoothness
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform, true); // Pour les transformations d'images plus douces

    // setup rounded corner
    QPainterPath path;
    path.addRoundedRect(rect(), m_bRadius, m_bRadius);
    painter.setClipPath(path);

    // Draw all
    if (enableBackground) {
        painter.drawPixmap(0, 0, width(), height(), backgroundImage);
    }
}



void TWidget::moveEvent(QMoveEvent *event) {
    QWidget::moveEvent(event);
    emit isMoving();
}

void TWidget::showEvent(QShowEvent *event) {
    QWidget::showEvent(event);
    emit isShown();
}

void TWidget::hideEvent(QHideEvent *event) {
    QWidget::hideEvent(event);
    emit isHiden();
}

// Override focus events to emit signals
void TWidget::focusInEvent(QFocusEvent *event) {
    QWidget::focusInEvent(event);
    emit focusIn();
}

void TWidget::focusOutEvent(QFocusEvent *event) {
    QWidget::focusOutEvent(event);  // Call the base class implementation
    emit focusOut();  // Emit focus out signal
}


bool expectingT=false;
void TWidget::keyPressEvent(QKeyEvent *event)
{
    // Check if Ctrl+Shift are held down
    if (event->modifiers() & Qt::ControlModifier && event->modifiers() & Qt::ShiftModifier)
    {
        // If 'T' is pressed, set the flag expecting C
        if (event->key() == Qt::Key_T && !expectingT)
        {
            expectingT = true; // Now expecting C after T
            return;  // Wait for the next key
        }
        if (event->key() == Qt::Key_C && expectingT)
        {
            emit debugPressed();
            expectingT = false;
            return;
        }
    }
    if (event->key() != Qt::Key_T && event->key() != Qt::Key_C)
    {
        expectingT = false;
    }

    QWidget::keyPressEvent(event);
}

void TWidget::pressPrev(){
    emit previousPressed();
}
void TWidget::pressNext(){
    emit nextPressed();
}
void TWidget::setEnableBackground(bool set) {
    if (enableBackground != set) {
        enableBackground = set;
        update();
    }
}

void TWidget::setBackgroundImage(QString image) {
    QFile image_file(image);
    if (!image_file.exists()) return;
    backgroundImage = QPixmap(image);
    update();  // Schedule a paint event
}


void TWidget::setBorderRadius(short r)
{
    m_bRadius=r;
    repaint();
}

short TWidget::borderRadius()
{
    return m_bRadius;
}

void TWidget::resizeEvent(QResizeEvent *event) {
    QWidget::resizeEvent(event);
    emit resizing();
}
