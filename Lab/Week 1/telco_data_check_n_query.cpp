#include <bits/stdc++.h>
using namespace std;

struct time{
    int hour, minute, second;
};
typedef struct date{
    int day, month, year;
    struct time start_time;
    struct time end_time;
};
typedef struct tel{
    string phone_number;
    struct date date;
};
int main(){
    string cmd;
    int num_check = 1;
    unordered_map<string, struct date> telco_data;
}