#include "algoritm.h"
#include <QFile>



Algoritm::Algoritm(QObject *parent) : QObject(parent)
{

}

QString Algoritm::work_with(QByteArray *data)
{


        qDebug() <<"Data: \n"<< data; // Выводим данные в консоль, предварительно создав строку из полученных данных



    return "1";
}



simbolCount::simbolCount(QObject *parent)
{

}

QString simbolCount::work_with(QByteArray *data)
{

   return  "simbolCount";
}

wordLength::wordLength(QObject *parent)
{

}

QString wordLength::work_with(QByteArray *data)
{
     return  "wordLength";
}
