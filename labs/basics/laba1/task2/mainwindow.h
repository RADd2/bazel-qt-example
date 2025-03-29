#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/qlistwidget.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void ChangeTab(int count);
    void ChangeListWidget(int count);

private:
    Ui::MainWindow *ui;
    QTabWidget* tab;
    QListWidget* list_widget;
};
#endif // MAINWINDOW_H
