#ifndef INDEX_H
#define INDEX_H

#include <QMainWindow>
#include "ui_index.h"


namespace Ui {
class index;
}

class index : public QMainWindow
{
    Q_OBJECT

public:
    explicit index(QWidget *parent = 0);
    ~index();

private:
    Ui::index *ui;

	private slots:
	void on_loginBtn_clicked();

};

#endif // INDEX_H
