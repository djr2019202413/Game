#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class Myobject : public QObject
{
    Q_OBJECT
public:
    explicit Myobject(QObject *parent = nullptr);

signals:

public slots:
};

#endif // MYOBJECT_H