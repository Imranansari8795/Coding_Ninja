#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define NUM_PROCESSES 8

typedef struct
{
    // Define a struct to hold process information
    int pid;             // process ID
    int arrival_time;    // process arrival time
    int burst_time;      // process burst time
    int completion_time; // completion time,
    int turnaround_time; // turnaround time
    int waiting_time;    // waiting time
} process_t;

// fuction of processes to swap each other
void swap(process_t *p1, process_t *p2)
{
    process_t temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int i, j, total_time = 0;
    int NUM_PROCESSES;
    printf("Enter the no of proesses:");
    scanf("%d",&NUM_PROCESSES);
    float avg_wait_time = 0, avg_turnaround_time = 0;
    process_t processes[NUM_PROCESSES];

    // select random time
    srand(time(NULL));
    for (i = 0; i < NUM_PROCESSES; i++)
    {
        processes[i].pid = i + 1;
        processes[i].arrival_time = rand() % 10;
        processes[i].burst_time = rand() % 20;
        processes[i].completion_time = 0;
        processes[i].turnaround_time = 0;
        processes[i].waiting_time = 0;
        total_time += processes[i].burst_time;
    }

    for (i = 0; i < NUM_PROCESSES - 1; i++)
    {
        for (j = i + 1; j < NUM_PROCESSES; j++)
        {
            if (processes[i].burst_time > processes[j].burst_time)
            {
                swap(&processes[i], &processes[j]);
            }
        }
    }

    printf("PID\tArrival Time\tBurst Time\tCompletion Time\t\tTurnaround Time\t\tWaiting Time\n");
    int completion_time = 0;
    for (i = 0; i < NUM_PROCESSES; i++)
    {
        processes[i].completion_time = completion_time + processes[i].burst_time;
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;

        printf("%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t\t%d\n", processes[i].pid, processes[i].arrival_time, processes[i].burst_time, processes[i].completion_time, processes[i].turnaround_time, processes[i].waiting_time);

        completion_time += processes[i].burst_time;
        avg_wait_time += processes[i].waiting_time;
        avg_turnaround_time += processes[i].turnaround_time;
    }

    // calculate average time
    avg_wait_time /= NUM_PROCESSES;
    // calculate turn around time
    avg_turnaround_time /= NUM_PROCESSES;

    printf("Average waiting time: %.2f\n", avg_wait_time);
    printf("Average turnaround time: %.2f\n", avg_turnaround_time);
    printf("Total execution time: %d\n", total_time);

    return 0;
}