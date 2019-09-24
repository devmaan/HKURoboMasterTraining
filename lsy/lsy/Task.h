#ifndef TASK_H
#define TASK_H
#include "Task.h"

double func(void);

typedef enum status
{
    SUCCESS, ERROR, DONE,
}status;

typedef struct session
{
    status sta;
    float *a;
}session;

#endif // TASK_H
//liu suying

