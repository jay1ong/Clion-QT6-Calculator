//
// Created by gxzc on 2023/9/22.
//

#ifndef CALCULATOR_BUTTON_H
#define CALCULATOR_BUTTON_H


#include <QToolButton>

//! [0]
class Button : public QToolButton
{
Q_OBJECT

public:
    explicit Button(const QString &text, QWidget *parent = nullptr);

    QSize sizeHint() const override;
};
//! [0]


#endif //CALCULATOR_BUTTON_H
