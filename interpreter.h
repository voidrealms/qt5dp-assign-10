#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <QString>
#include <QByteArray>

class Interpreter
{
public:
    static QString getBase64(const QString &data)
    {
        return data.toUtf8().toBase64();
    }

    static QString getPlain(const QString &data)
    {
        return QString(QByteArray::fromBase64(data.toUtf8()));
    }
};

#endif // INTERPRETER_H
