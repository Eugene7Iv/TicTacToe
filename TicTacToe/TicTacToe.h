#pragma once

#include <QtWidgets/QWidget>
#include "TicTacToeGame.h"
#include "ui_TicTacToe.h"

class TicTacToe : public QWidget
{
    Q_OBJECT

public:
    TicTacToe(QWidget *parent = Q_NULLPTR);

protected:
	void mouseReleaseEvent(QMouseEvent* ev) override;

	void update(QLabel* label);

private:
	TicTacToeGame m_game;
    Ui::TicTacToeClass ui;
};
