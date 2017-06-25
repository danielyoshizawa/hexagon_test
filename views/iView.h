#ifndef HEXAGON_IVIEW_H
#define HEXAGON_IVIEW_H

class iView
{
public:
    virtual ~iView() {};
    virtual void initialize() = 0;
    virtual void configure() = 0;
};

#endif //HEXAGON_IVIEW_H
