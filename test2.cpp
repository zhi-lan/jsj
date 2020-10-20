#include <stdio.h>
#include <math.h>
int main(void)
{
        double bNumber, Number, Result;           //给加减乘除数定义的变量
        int No;                //定义计算数字的变量
        while(1)
        {
                //界面
                printf (" _______________________________________________ \n");
                printf ("|请选择你要计算的方法:                          |\n");
                printf ("|---------------------------------------------- |\n");
                printf ("|  加法请按_1                                   |\n");
                printf ("|  减法请按_2                                   |\n");
                printf ("|  乘法请按_3                                   |\n");
                printf ("|  除法请按_4                                   |\n");
                printf ("|  乘方请按_5                                   |\n");
                printf ("|  开根号请按_6                                 |\n");
                printf ("|  退出请按_0                                   |\n");
                printf ("|_______________________________________________|\n");
                printf ("Please write down the number:");
                scanf ("%d",&No);
                if (No == 1)
                {
                        //        加法
                        printf ("        请输入被加数:");
                        scanf ("%lf",&bNumber);
                        printf ("        请输入加数:");
                        scanf ("%lf",&Number);
                        Result = bNumber + Number;
                        printf (" 结果是: %lf\n\n",Result);
                }
                else if (No == 2)
                {
                        //        减法
                        printf ("        请输入被减数:");
                        scanf ("%lf",&bNumber);
                        printf ("        请输入减数:");
                        scanf ("%lf",&Number);
                        Result = bNumber - Number;
                        printf (" 结果是: %lf\n\n",Result);
                }
                else if (No == 3)
                {
                        //        乘法
                        printf ("        请输入被乘数:");
                        scanf ("%lf",&bNumber);
                        printf ("        请输入乘数:");
                        scanf ("%lf",&Number);
                        Result = bNumber * Number;
                        printf (" 结果是: %lf\n\n",Result);
                }
                else if (No == 4)
                {
                        //        除法
                        printf ("        请输入被除数:");
                        scanf ("%lf",&bNumber);
                        printf ("        请输入除数:");
                        scanf ("%lf",&Number);
                        if(Number == 0){      //判断除数是否为0
                        printf("        除数不能为 0 \n");
                    }
                        else{
                        Result = bNumber / Number;
                        printf (" 结果是: %lf\n\n",Result);
                    }
                }  
				   else if (No == 5)
                {
                        //        乘方 
                        printf ("        请输入指数:");
                        scanf ("%lf",&bNumber);
                        printf ("        请输入幂数:");
                        scanf ("%lf",&Number);
                 if(Number==0)//指数为零 
                        {
                        Result = 1;
                    }
                 else if(Number<0) //指数为负 
                    {
                    	Number=abs(Number);
                    	 Result = bNumber;
                        for(int i = 1;i<Number;i++)
                        {
                        Result = Result*bNumber;
                        } 
                         Result = 1.0/Result;
                     printf (" 结果是: %lf\n\n",Result);	
				}
                 else
                        {                        
                        Result = bNumber;
                        for(int i = 1;i<Number;i++)
                        {
                        Result = Result*bNumber;
                    }
                    } 
                        printf (" 结果是: %lf\n\n",Result);
                }  
			  else if (No == 6)
                {
                        //        开根号 
                        printf ("        请输入底数:");
                        scanf ("%lf",&bNumber);
                        printf ("        请输入根号:");
                        scanf ("%lf",&Number);
                        Result = pow(bNumber,1.0/Number);
                        printf (" 结果是: %lf\n\n",Result);
                }        
                else if (No == 0)
                {
                        //退出程序
                        break;
                }
                else
                {
                        //输入的选项不对
                        printf("  请输入正确的数字。\n");
                }
        }
        return 0;
}
