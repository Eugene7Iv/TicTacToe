#include "TicTacToe.h"
#include <QMouseEvent>

TicTacToe::TicTacToe(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

void TicTacToe::mouseReleaseEvent(QMouseEvent * ev)
{
	QLabel* label = dynamic_cast<QLabel*>(childAt(ev->pos()));
	if (!label)
		return;
	update(label);
}

void TicTacToe::update(QLabel * label)
{
	int indx = ui.gridLayout_2->indexOf(label);
	int row, col, rowSpan, colSpan;
	ui.gridLayout_2->getItemPosition(indx, &row, &col, &rowSpan, &colSpan);
	if (m_game.isCellEmpty(row, col))
	{
		m_game.step(row, col);
		m_game.changeSymbol();
	}

	if (m_game.isCellSymbolCross(row, col))
		label->setPixmap(QPixmap(":/TicTacToe/bVaider.png"));
	else if(m_game.isCellSymbolZero(row, col))
		label->setPixmap(QPixmap(":/TicTacToe/wVaider.png"));
}
