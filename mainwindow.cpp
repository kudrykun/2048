#include "mainwindow.h"
#include <QGridLayout>
#include <QWidget>
#include <QFontDatabase>
#include "roundedrect.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //adding new font in app
    QFontDatabase::addApplicationFont ( ":/clear-sans/ClearSans-Bold.ttf");

    gameScene = new GameScene(this);
    QGridLayout *layout = new QGridLayout();
    view = new QGraphicsView(gameScene);
    layout->addWidget(view);

    QWidget *widget = new QWidget;
    widget->setLayout(layout);

    setCentralWidget(widget);
    setWindowTitle("2048");
}

MainWindow::~MainWindow()
{

}
