#include<mbed.h>

DigitalIn myinp(USER_BUTTON);
DigitalOut myled(LED3);
Serial pc(USBTX, USBRX);
double c[100];
double b[100];
char key = 'a';
int length = 4;
void moving_avg(double c[],double b[])
{
    
    for(int i = 0; i < (100); i++)
    {
        if(i-3 >= 0)
            b[i] += b[i-3];
        if(i-2 >= 0)
            b[i] += b[i-2];
        if(i-1 >= 0)
            b[i] += b[i-1];
        b[i] += c[i];
        b[i] /= length;
    }
}
int main()
{
    while(1)
    {
        while(key == 'a')
        {
            //wait(100);
            pc.scanf(" %c",&key);
            if(key == 'a')
                pc.printf("WAITING\n");
        }
         pc.printf("SEND DATA IN 1 SEC\n");  
        ///wait(1000); 
        for(int i = 0; i < 100; i ++)
        {
            pc.scanf("%lf",&c[i]);
            //wait(100);
        }
        moving_avg(c,b);
        pc.printf("INCOMING DATA\n");
        //wait(100);
        for(int i = 0; i < 100 ; i++)
        {
            pc.printf("%lf\n",b[i]);
            //wait(100);
        }
    }
}