#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct info {
    int endTime, startTime;
};

vector<info> timeTable;
int g_count;

bool compareInfo(info x, info y) {
    return x.endTime == y.endTime ? x.startTime < y.startTime : x.endTime < y.endTime;
}

int main(void) {
    int N, startTime, endTime;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> startTime >> endTime;
        timeTable.push_back({endTime, startTime});
    }

    sort(timeTable.begin(), timeTable.end(), compareInfo);

    int reservedTime = timeTable[0].endTime;
    g_count++;
    for (int i = 1; i < N; i++) {
        if (reservedTime <= timeTable[i].startTime) {
            g_count++;
            reservedTime = timeTable[i].endTime;
        }
    }
    cout << g_count << "\n";
    return 0;
}
