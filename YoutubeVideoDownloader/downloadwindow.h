#ifndef DOWNLOADWINDOW_H
#define DOWNLOADWINDOW_H

#include <QMainWindow>

namespace Ui {
class downloadWindow;
}

class downloadWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit downloadWindow(QWidget *parent = 0);
    ~downloadWindow();

private:
    Ui::downloadWindow *ui;
};

#endif // DOWNLOADWINDOW_H
