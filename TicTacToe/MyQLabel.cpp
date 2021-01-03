#include "MyQLabel.h"
#include <QMouseEvent>


MyQLabel::MyQLabel(QWidget* pParent) : QLabel(pParent)
{

}

void MyQLabel::mouseReleaseEvent(QMouseEvent* ev)
{
	setPixmap(QPixmap(":/TicTacToe/bVaider.png"));

	__super::mouseReleaseEvent(ev);
}
