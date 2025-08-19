#include <stdio.h>
#include <string.h>

const char* activities[] = {"Swimming", "Running", "Football"};

int schedule_count = 0;

void generate_schedules(int day, int n, char schedule[18][15]) {
    if (day > n) {
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                printf("%s", schedule[i]);
            } else {
                printf("%s ", schedule[i]);
            }
        }
        printf("\n");
        schedule_count++; 
        return;
    }

    for (int i = 0; i < 3; i++) {
        const char* current_activity = activities[i];

        if (day > 1) {
            if (strcmp(current_activity, schedule[day - 2]) == 0) {
                continue; // Skip this activity and try the next one
            }
        }

        strcpy(schedule[day - 1], current_activity);

        generate_schedules(day + 1, n, schedule);
    }
}

int main() {
    int n;
    scanf("%d",&n);

    char current_schedule[18][15];
    generate_schedules(1, n, current_schedule);
    printf("COUNT: %d\n", schedule_count);

    return 0;
}