#include <stdio.h>

struct TIME {
  int seconds;
  int minutes;
  int hours;
};

int rh[100], rm[100], rs[100], count = 0, flag, small = 0;

void differenceBetweenTimePeriod(struct TIME t1,
                                struct TIME t2,
                                struct TIME *diff);

int smallest(int arr[]);

int main() {
   struct TIME startTime, stopTime, diff;
   int hour[100],minute[100],second[100], i, size, rhi, rmi, rsi;

   printf("Enter the number of time inputs:");
   scanf("%d", &size);
   for(i=0; i<size; i++)
   {
       printf("Enter time (in HH:MM:SS) ");
       scanf("%02d:%02d:%02d",&hour[i],&minute[i],&second[i]);       
   }

   for(i=0; i<size; i++)
   {
       startTime.hours = hour[i];
       startTime.minutes = minute[i];
       startTime.seconds = second[i];
       for(int j=0; j<size; j++)
       {
           if(hour[i]>hour[j]){
               stopTime.hours = hour[j];
               stopTime.minutes = minute[j];
               stopTime.seconds = second[j];
               differenceBetweenTimePeriod(startTime, stopTime, &diff);
           }
       }
   }

    smallest(rh);
    if(flag>1)
        flag = 0;
        rhi = small;
        smallest(rm);
        rmi = small;
        if (flag>1)
            smallest(rs);
            rsi = small;

    printf("Shortest Difference is %d:%d:%d", rh[rhi], rm[rmi], rs[rsi]);
 
    return 0;  
}

int smallest(int arr[])
{
    int max = arr[0];
    flag = 0;
    for (int i = 1; i < count; i++)
    {
        if (arr[i] <= max)
        {
            small = i;
            max = arr[i];
            flag += 1;
        }
    }
    return max;
}

void differenceBetweenTimePeriod(struct TIME start,
                                struct TIME stop,
                                struct TIME *diff) {
  while (stop.seconds > start.seconds) {
     --start.minutes;
     start.seconds += 60;
  }
  diff->seconds = start.seconds - stop.seconds;
  while (stop.minutes > start.minutes) {
     --start.hours;
     start.minutes += 60;
  }
  diff->minutes = start.minutes - stop.minutes;
  diff->hours = start.hours - stop.hours;
  rh[count] = diff->hours;
  rm[count] = diff->minutes;
  rs[count] = diff->seconds;
  count += 1;
}