#pragma once
#include <QLabel>

class MyQLabel :
	public QLabel
{
	Q_OBJECT
public:
	MyQLabel(QWidget* pParent = nullptr);

	
protected:
	void mouseReleaseEvent(QMouseEvent* ev) override;
};

