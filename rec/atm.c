#include "atm.h"


void ATM_inm() //存钱操作
{
    ShowBmp(0,0,"./rec/in_money.bmp");
    while(1)
    {
        Get_Xy();
        if(PI.Ts_x > 85 && PI.Ts_x < 273 && PI.Ts_y > 200 && PI.Ts_y < 273)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 100 + a;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/in100.bmp");
        }
        else if(PI.Ts_x > 85 && PI.Ts_x < 273 && PI.Ts_y > 200 && PI.Ts_y < 273)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 200 + a;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/in200.bmp");
        }
        else if(PI.Ts_x > 271 && PI.Ts_x < 759 && PI.Ts_y > 195 && PI.Ts_y < 270)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 500 + a;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/in500.bmp");
        }
        else if(PI.Ts_x > 203 && PI.Ts_x < 388 && PI.Ts_y > 333 && PI.Ts_y < 410)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 1000 + a;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/in1000.bmp");
        }
        else if(PI.Ts_x > 473 && PI.Ts_x < 660 && PI.Ts_y > 338 && PI.Ts_y < 410)
        {
            int fd1 = open("count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 2000 + a;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/in2000.bmp");
        }
        else if(PI.Ts_x > 671 && PI.Ts_x < 792 && PI.Ts_y > 408 && PI.Ts_y < 471)
        {
            break;
        }
    }
}

void ATM_take()  //取钱操作
{
    ShowBmp(0,0,"./rec/out_money.bmp");
    while(1)
    {
        Get_Xy();
        if(PI.Ts_x > 85 && PI.Ts_x < 273 && PI.Ts_y > 200 && PI.Ts_y < 273)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = a - 100;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/take100.bmp");
        }
        else if(PI.Ts_x > 85 && PI.Ts_x < 273 && PI.Ts_y > 200 && PI.Ts_y < 273)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = a - 200;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/take200.bmp");
        }
        else if(PI.Ts_x > 271 && PI.Ts_x < 759 && PI.Ts_y > 195 && PI.Ts_y < 270)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = a - 500;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/take500.bmp");
        }
        else if(PI.Ts_x > 203 && PI.Ts_x < 388 && PI.Ts_y > 333 && PI.Ts_y < 410)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = a - 1000;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/take1000.bmp");
        }
        else if(PI.Ts_x > 473 && PI.Ts_x < 660 && PI.Ts_y > 338 && PI.Ts_y < 410)
        {
            int fd1 = open("count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = a - 2000;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
            ShowBmp(0,0,"./rec/take2000.bmp");
        }
        else if(PI.Ts_x > 671 && PI.Ts_x < 792 && PI.Ts_y > 408 && PI.Ts_y < 471)
        {
            break;
        }
    }
}

void afterin()      //存款后判断 
{
     while (1)
            {
                if(PI.Ts_x > 193 && PI.Ts_x < 321 && PI.Ts_y > 314 && PI.Ts_y < 373);
                {
                    ATM_inm();
                }
                if(PI.Ts_x > 466 && PI.Ts_x < 592 && PI.Ts_y > 319 && PI.Ts_y < 376);
                    break;
            }
}

void aftertake()    //取款后判断
{
     while (1)
            {
                if(PI.Ts_x > 193 && PI.Ts_x < 321 && PI.Ts_y > 314 && PI.Ts_y < 373);
                {
                    ATM_take();
                }
                if(PI.Ts_x > 466 && PI.Ts_x < 592 && PI.Ts_y > 319 && PI.Ts_y < 376);
                    break;
            }
}

void User_balance() //账户余额
{
    ShowBmp(0,0,"./rec/balance.bmp");
}

void menu()     //展示atm主页面
{
    ShowBmp(0,0,"./rec/main.bmp");
    while (1)
    {
        Get_Xy();
        if(PI.Ts_x > 303 && PI.Ts_x < 446 && PI.Ts_y > 257 && PI.Ts_y < 313 )
        {
            printf("存款事件\n");
            ATM_inm();
            afterin();
        }
        if(PI.Ts_x > 304 && PI.Ts_x < 446 && PI.Ts_y > 330 && PI.Ts_y < 384 )
        {
            printf("取款事件\n");
            ATM_take();
            aftertake();
        }
        if(PI.Ts_x > 303 && PI.Ts_x < 446 && PI.Ts_y > 402 && PI.Ts_y < 458 )
        {
            printf("展示余额事件\n");
            User_balance();
        }
        if(PI.Ts_x > 644 && PI.Ts_x < 782 && PI.Ts_y > 400 && PI.Ts_y < 460 )
        {
            printf("退出系统\n");
            ShowBmp(0,0,"./rec/end.bmp");
            break;
        }
    }
    
}

int main()
{
     //初始化
    int ProjectInit_ret =  ProjectInit();
    if (ProjectInit_ret == -1)
    {
        printf("初始化失败！\n");
        return -1;
    }
    else
    {
        printf("初始化成功！\n");
    }
    menu();
    //释放资源
    int ProjectFree_ret = ProjectFree();
    if (ProjectFree_ret == -1)
    {
        printf("资源回收失败！\n");
        return -1;
    }
    else
    {
        printf("资源回收成功！\n");
    }
    return 0;
}