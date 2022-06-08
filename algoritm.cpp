#include "algoritm.h"
#include <QFile>



Algoritm::Algoritm(QObject *parent) : QObject(parent)
{

}

QString Algoritm::work_with(QString filename)
{


    QFile file(filename); // создаем объект класса QFile

    QByteArray data; // Создаем объект класса QByteArray, куда мы будем считывать данные

    if (!file.open(QIODevice::ReadOnly)){ // Проверяем, возможно ли открыть наш файл для чтения
        qDebug()<<"file not open";
        return ""; // если это сделать невозможно, то завершаем функцию
    }

    data = file.readAll(); //считываем все данные с файла в объект data

    qDebug() <<"Data: \n"<< QString(data); // Выводим данные в консоль, предварительно создав строку из полученных данных



    return "1";
}



simbolCount::simbolCount(QObject *parent)
{

}

QString simbolCount::work_with(QString filename)
{
   return  "simbolCount";
}

wordLength::wordLength(QObject *parent)
{

}

QString wordLength::work_with(QString filename)
{
     return  "wordLength";
}
