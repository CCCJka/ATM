#ifndef _ATM_H_
#define _ATM_H_ //防止头文件冲突

#include <stdio.h>   //printf函数、scanf函数
#include <error.h>   //标准出错头文件
#include <string.h>  //memset函数、strlen函数的头文件
#include <stdlib.h>
#include <unistd.h>   //read、write函数
#include <sys/types.h>  //基本系统数据类型
#include <sys/stat.h>   //用来获取文件属性，返回值：成功返回0，失败返回-1
#include <fcntl.h>      // Fcntl()针对(文件)描述符提供控制.参数fd是被参数cmd操作(如下面的描述)的描述符.针对cmd的值,fcntl能够接受第三个参数int arg
#include <sys/mman.h> //mmap函数
#include <linux/input.h> //Linux下的输入子系统
#include <pthread.h>  //线程API接口头文件

#define _GEC_LCD_PATH_     "/dev/fb0"              //lcd屏的路径
#define _GEC_TS_PATH_   "/dev/input/event0"      //触摸屏文件的路径
#define _MMAP_LCD_SIZE_     800*480*4              //映射地址大小

struct Pro_Info
{
    int lcd_fd; /*LCD屏*/
    int ts_fd;  /*触摸屏*/
    int *mmap_addr; /*映射内存的首地址*/
    int Ts_x,Ts_y; /*触摸屏的坐标*/
    pthread_t pid1,pid2; /*线程ID号*/
}PI;

struct input_event Xy; //存放放触摸屏数据的结构体

int ProjectInit();      //项目资源初始化

int ProjectFree();      //回收项目资源

int Get_Xy();   //获取触摸屏坐标

int ShowBmp(int s_x, int s_y, const char *picName);     //开发板显示图片



#endif