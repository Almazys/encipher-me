#ifndef PROGRESSION_H
#define PROGRESSION_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class Progression;
}

class Progression : public QDialog
{
    Q_OBJECT

public:
    explicit Progression(QString text, QWidget *parent = 0);
    ~Progression();

    void setTotalNumberOfFiles(int value);
    void setCurrentNumberOfFiles(int value);
    void showCurrentProgression(bool toggle);

public slots:
    void on_buttonBox_clicked(QAbstractButton *button);
    void setCurrentProgression(int value);
    void setLabelText(QString step);

signals:
    void canceled();

private:
    Ui::Progression *ui;
};

#endif // PROGRESSION_H
