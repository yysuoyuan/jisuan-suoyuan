#include <stdio.h>
         void jia(double a,double b);
         void jian(double a,double b);
         void cheng(double a,double b);
         void chu(double a,double b);
         int main(void)
{
         double a = 0;
         double b = 0;
         int c = 0;
         a:
         printf("加法请输入1\n");
         printf("减法请输入2\n");
         printf("乘法请输入3\n");
         printf("除法请输入4\n");
         printf("退出请输入0\n");
         scanf("%d",&c);
         for(int d = 0;c!=0&&c!=1&&c!=2&&c!=3&&c!=4;d = d+1){
         printf("我日哦⊙ω⊙老哥，你这都整错了-_-||重来\n");
         printf(" \n");
         printf("⁞ つ: •̀ ⌂ •́ : ⁞-︻╦̵̵͇̿̿̿̿══╤─\n");
         scanf("%d",&c);
         if(c==0||c==1||c==2||c==3||c==4){
                     break;
                                       }
         if(d>10){
         printf("小哥秀啊，还输不对，爷不陪你了\n");
         goto b;
                 }
                                                   }
         if (c==1){
         printf("请输入两个数\n");
         scanf("%lf %lf",&a,&b);
         jia(a,b);
                  }
         else if (c==2){
         printf("请输入两个数\n");
         scanf("%lf %lf",&a,&b);
         jian(a,b);
                       }
         else if (c==3){
         printf("请输入两个数\n");
         scanf("%lf %lf",&a,&b);
         cheng(a,b);
                      }
         else if (c==4){
         printf("请输入两个数\n");
         scanf("%lf %lf",&a,&b);
         chu(a,b);
                       }
         else if (c==0){
         goto b;
                       }
          goto a;
          b:
          return 0;
}
         void jia(double a,double b){
         printf("结果是%lf\n",a+b);
                                     }
         void jian(double a,double b){
         printf("结果是%lf\n",a-b);
                                      }
         void cheng(double a,double b){
         printf("结果是%lf\n",a*b);
                                         }
         void chu(double a,double b){
         printf("结果是%lf\n",a/b);
                                       }
