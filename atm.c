#include "atm.h"


void ATM_inm(int money) //存钱操作
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
            int sum = 100 + money;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 85 && PI.Ts_x < 273 && PI.Ts_y > 200 && PI.Ts_y < 273)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 200 + money;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 271 && PI.Ts_x < 759 && PI.Ts_y > 195 && PI.Ts_y < 270)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 500 + money;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 203 && PI.Ts_x < 388 && PI.Ts_y > 333 && PI.Ts_y < 410)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 1000 + money;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 473 && PI.Ts_x < 660 && PI.Ts_y > 338 && PI.Ts_y < 410)
        {
            int fd1 = open("count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = 2000 + money;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 671 && PI.Ts_x < 792 && PI.Ts_y > 408 && PI.Ts_y < 471)
        {
            break;
        }
    }
}

void ATM_take(int money)  //取钱操作
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
            int sum = money - 100;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 85 && PI.Ts_x < 273 && PI.Ts_y > 200 && PI.Ts_y < 273)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = money - 200;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 271 && PI.Ts_x < 759 && PI.Ts_y > 195 && PI.Ts_y < 270)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = money - 500;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 203 && PI.Ts_x < 388 && PI.Ts_y > 333 && PI.Ts_y < 410)
        {
            int fd1 = open("./info/count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = money - 1000;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 473 && PI.Ts_x < 660 && PI.Ts_y > 338 && PI.Ts_y < 410)
        {
            int fd1 = open("count.txt", O_RDONLY);
            char buf1[10];
            read(fd1,buf1,sizeof(buf1));
            int a = atoi(buf1);
            int sum = money - 2000;
            close(fd1);
            FILE* fd = fopen("./info/count.txt","w+");
            fprintf(fd,"%d",sum);
            fclose(fd);
        }
        else if(PI.Ts_x > 671 && PI.Ts_x < 792 && PI.Ts_y > 408 && PI.Ts_y < 471)
        {
            break;
        }
    }
}

void User_balance() //账户余额
{
    ShowBmp(0,0,"./rec/balance.bmp");
}

void menu()     //展示atm主页面
{
    ShowBmp(0,0,"./rec/main.bmp");
	int money = 0;
    while (1)
    {
        Get_Xy();
        if(PI.Ts_x > 303 && PI.Ts_x < 446 && PI.Ts_y > 257 && PI.Ts_y < 313 )
        {
            printf("存款事件\n");
            ATM_inm(money);
        }
        if(PI.Ts_x > 304 && PI.Ts_x < 446 && PI.Ts_y > 330 && PI.Ts_y < 384 )
        {
            printf("取款事件\n");
            ATM_take(money);
        }
        if(PI.Ts_x > 303 && PI.Ts_x < 446 && PI.Ts_y > 402 && PI.Ts_y < 458 )
        {
            printf("展示余额事件\n");
            User_balance();
        }
        if(PI.Ts_x > 644 && PI.Ts_x < 782 && PI.Ts_y > 400 && PI.Ts_y < 460 )
        {
            printf("退出系统\n");
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