#include <sys/time.h>
#include <unistd.h>
#include <cstdio>

class TimerClass {
  timeval timestamp;
public:
  TimerClass() {
    gettimeofday(&timestamp, NULL);
  }

  ~TimerClass() {
    timeval end_time;
    gettimeofday(&end_time, NULL);
    printf("Elapsed time: %ld\n", end_time.tv_usec - timestamp.tv_usec);
  }
};

int main() {
  TimerClass timer{};
}