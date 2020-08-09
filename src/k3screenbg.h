#ifndef _SCREENBG_H
#define _SCREENBG_H

#include <time.h>

extern unsigned long long last_upload_wan, last_dnload_wan;
extern int NUM_2G, NUM_5G;
extern time_t last_time;

typedef struct Node
{
	char mac[18];
	char ip[15];
	unsigned long up_data;
	unsigned long dn_data;
	unsigned long last_up_data;
	unsigned long last_dn_data;
	struct Node *pNext; //定义一个结构体指针，指向下一次个与当前节点数据类型相同的
} NODE;

extern NODE *nodeHead;
extern NODE *nodeEnd;

void screenbg_clean();
int output_basic_sh();
int output_wan_sh();
int output_wifi_sh();
int output_host_sh();
int output_weather_sh();

#endif
