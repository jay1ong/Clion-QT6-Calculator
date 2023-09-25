//
// Created by gxzc on 2023/9/22.
//

#include "button.h"
//! [0]
Button::Button(const QString &text, QWidget *parent)
        : QToolButton(parent)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    setText(text);
}
//! [0]

//! [1]
QSize Button::sizeHint() const
//! [1] //! [2]
{
    QSize size = QToolButton::sizeHint();
    size.rheight() += 20;
    size.rwidth() = qMax(size.width(), size.height());
    return size;
}
//! [2]