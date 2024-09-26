#ifndef OPTSCHEDTARGET_H
#define OPTSCHEDTARGET_H

class OptSchedTarget {
public:
    virtual ~OptSchedTarget() = default;
    virtual void execute() = 0;
};
#endif // OPTSCHEDTARGET_H
