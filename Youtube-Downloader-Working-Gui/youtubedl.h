#ifndef YOUTUBEDL_H
#define YOUTUBEDL_H

#include <QtCore>
#include <QtGui>
#include <QLineEdit>


#include <QDialog>

namespace Ui {
class YoutubeDl;
}

class YoutubeDl : public QDialog
{
    Q_OBJECT

public:
    QProcess process;
    QString downloadLink;
    QString address = "C:\\Users\\Manash\\Documents\\Command"; // Change it at your will, this will be the current dir

    explicit YoutubeDl(QWidget *parent = 0);
    ~YoutubeDl();
public slots:
    void readyForOutput();


private slots:
    void on_link_textChanged(const QString &arg1);

    void on_download_clicked();

    void on_pushButton_clicked();

private:
    Ui::YoutubeDl *ui;
};

#endif // YOUTUBEDL_H

