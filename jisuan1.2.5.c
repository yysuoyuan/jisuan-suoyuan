#include <stdio.h>
int main(void){
    double a ,b;
    int c = 0;
    printf("加法请输入1\n减法请输入2\n乘法请输入3\n除法请输入4\n退出请输入0\n");
    scanf("%d",&c);
    for(int d = 0;c!=0&&c!=1&&c!=2&&c!=3&&c!=4;d += 1){
        printf("我日哦⊙ω⊙老哥，你这都整错了-_-||重来\n");
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
        printf("结果为:%lf\n",a+b);
              }
    else if (c==2){
        printf("请输入两个数\n");
        scanf("%lf %lf",&a,&b);
        printf("结果为:%lf\n",a-b);
                   }
    else if (c==3){
        printf("请输入两个数\n");
        scanf("%lf %lf",&a,&b);
        printf("结果为:%lf\n",a*b);
                   }
    else if (c==4){
        printf("请输入两个数\n");
        scanf("%lf %lf",&a,&b);
        printf("结果为:%lf\n",a/b);
                  }
    else if (c==0){
        goto b;
                  }
    main();
    b:
        return 0;
}
