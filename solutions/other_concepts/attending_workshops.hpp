#pragma once

struct Workshop {
    int start_time;
    int end_time;
    int duration;
};

struct Available_Workshops {
    int n;
    Workshop *workshops;
};

Available_Workshops *initialize(int start_time[], int duration[], int n) {
    Available_Workshops *aws = new Available_Workshops();
    aws->n = n;
    aws->workshops = new Workshop[n];

    for (int i = 0; i < n; i++) {
        aws->workshops[i].start_time = start_time[i];
        aws->workshops[i].duration = duration[i];
        aws->workshops[i].end_time = start_time[i] + duration[i];
    }

    return aws;
}

int CalculateMaxWorkshops(Available_Workshops *ptr) {
    sort(ptr->workshops, ptr->workshops + ptr->n, [](const Workshop &a, const Workshop &b) {
        return a.end_time < b.end_time;
    });

    int current_end_time = 0;
    int max_workshops = 0;
    for (int i = 0; i < ptr->n; i++) {
        if (ptr->workshops[i].start_time >= current_end_time) {
            current_end_time = ptr->workshops[i].end_time;
            max_workshops++;
        }
    }

    return max_workshops;
}
