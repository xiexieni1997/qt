#include <QApplication>

#include <QWidget>

#include <QPushButton>

#include <iostream>

class MyWidget : public QWidget {
public:
    MyWidget(QWidget *parent = nullptr) : QWidget(parent) {
        button = new QPushButton(" 点击我!!!!!", this);
        connect(button, &QPushButton::clicked, this, &MyWidget::on_button_clicked);
    }

protected:
    void on_button_clicked() {
        std::cout << " test success" << std::endl;
    }

private:
    QPushButton *button;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MyWidget widget;
    widget.show();
    return app.exec();
}
