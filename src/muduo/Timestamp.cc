#include "Timestamp.h"
#include <iostream>

#include <time.h>
using namespace std;

Timestamp::Timestamp()
:microSecondsSInceEpoch_(0)
{
}

Timestamp::Timestamp(time_t nowtime)
:microSecondsSInceEpoch_ (nowtime)
{

}

Timestamp Timestamp::now()
{
    // time_t ti = time(NULL);
    return Timestamp(time(NULL));
}

string Timestamp::toString() const
{
    // time_t time1 = time(NULL);
    char buf[128] = {0};
    // tm *tm_time = localtime(&time1);
    // std::cout << "###################" << microSecondsSInceEpoch_ << std::endl;
    tm *tm_time = localtime(&microSecondsSInceEpoch_);
    // std::cout << "###################" << buf << std::endl;
    snprintf(buf, 128, "%4d/%02d/%02d %02d:%02d:%02d",
             tm_time->tm_year + 1900,
             tm_time->tm_mon + 1,
             tm_time->tm_mday,
             tm_time->tm_hour,
             tm_time->tm_min,
             tm_time->tm_sec);
            //  std::cout << "###################" << buf << std::endl;
            return buf;
}
