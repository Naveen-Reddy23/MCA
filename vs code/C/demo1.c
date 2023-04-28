#include<stdio.h>
struct time_struct {
    int hour;
    int minute;
    int second;
};
void main(){
    struct time_struct s1;
    s1.hour = 16;
    s1.minute = 40;
    s1.second = 51;
    printf("%d:%d:%d ",s1.hour,s1.minute,s1.second);

}