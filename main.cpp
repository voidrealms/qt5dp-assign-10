#include <QCoreApplication>

/*

  What
  Interpreter pattern

  Description
  Convert Data between systems

  Why
  Things are often incompatible

  Example
  Make an Interpreter between PlainText and Base64

  Example seems a bit trivial but you would be suprized how often you have to make some type of data adapter
 */


#include <QDebug>
#include "interpreter.h"

//Old System takes plain text
void OldSystem(QString data)
{
    qInfo() << data;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString input = Interpreter::getBase64(QString("Hello from the new system"));


    qInfo() << input;
    OldSystem(Interpreter::getPlain(input));

    return a.exec();
}
