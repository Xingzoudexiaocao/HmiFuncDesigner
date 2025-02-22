#ifndef QQINDICATIONLAMPHOST_H
#define QQINDICATIONLAMPHOST_H

#include "qframehost.h"

class QIndicationLampHost : public QFrameHost
{
    Q_OBJECT
public:
    Q_INVOKABLE QIndicationLampHost(QAbstractHost *parent = 0);

    static QString getShowName();
    static QString getShowIcon();
    static QString getShowGroup();

protected:
    void initProperty();

protected:
    void createObject();

};

#endif // QQINDICATIONLAMPHOST_H
