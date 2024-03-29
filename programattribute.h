#ifndef PROGRAMATTRIBUTE_H
#define PROGRAMATTRIBUTE_H

#include <QWidget>
#include <QStyleOption>
#include <QPainter>
#include <QLabel>
#include <QHBoxLayout>


class VideoItem : public QWidget
{
    Q_OBJECT

public:
    explicit VideoItem(QWidget *parent = nullptr);
    ~VideoItem();
    void paintEvent(QPaintEvent *);

    void setItemName(QString);

private:
    QLabel *videoName;
    QLabel *stop_unselected;
    QLabel *cycle_unselected;
    QLabel *order_unselected;

    QHBoxLayout *hBoxLayout;

    QWidget *m_parent;

signals:

public slots:
};

class ProgramAttribute : public QWidget
{
    Q_OBJECT

public:
    explicit ProgramAttribute(QWidget *parent = nullptr);
    ~ProgramAttribute();
    void paintEvent(QPaintEvent *);

private:
    QLabel *videoName;
    VideoItem *videoItem;

signals:

public slots:
};

#endif // PROGRAMATTRIBUTE_H
