#ifndef RUNTHREAD_H
#define RUNTHREAD_H

#include <QThread>

namespace Hockey
{
class RunThread : public QThread{

public:

    RunThread();

protected:

    void run();

};
}

#endif // RUNTHREAD_H
