#include <stdio.h>
#include <stdlib.h>

// Structure for car
struct Car {
    int position;
    int speed;
};

// Sort by position descending
int compare(const void *a, const void *b) {
    struct Car *c1 = (struct Car *)a;
    struct Car *c2 = (struct Car *)b;
    return c2->position - c1->position;
}

int carFleet(int target, int position[], int speed[], int n) {
    struct Car cars[n];

    // Fill car data
    for(int i = 0; i < n; i++) {
        cars[i].position = position[i];
        cars[i].speed = speed[i];
    }

    // Sort by position descending
    qsort(cars, n, sizeof(struct Car), compare);

    int fleets = 0;
    double lastTime = 0.0;

    for(int i = 0; i < n; i++) {
        double time = (double)(target - cars[i].position) / cars[i].speed;

        // New fleet condition
        if(time > lastTime) {
            fleets++;
            lastTime = time;
        }
        // else: joins existing fleet
    }

    return fleets;
}

int main() {
    int n, target;

    scanf("%d", &n);
    int position[n], speed[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &position[i]);
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &speed[i]);
    }

    scanf("%d", &target);

    printf("%d\n", carFleet(target, position, speed, n));

    return 0;
}
