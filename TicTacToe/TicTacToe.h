#pragma once

#include <QtWidgets/QWidget>
#include "ui_TicTacToe.h"

class TicTacToe : public QWidget
{
    Q_OBJECT

public:
    TicTacToe(QWidget *parent = Q_NULLPTR);

private:
    Ui::TicTacToeClass ui;
};
