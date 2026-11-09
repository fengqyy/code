#include <stdio.h>

//第 1 课 · 写出并运行第一个 C 程序

// int main(void)
// {
//     printf("Hello,C!\n");
//     return 0;
// }

//练习
// int main(void)
// {
//     printf("I am learning C.\nI can compile and run a program.\n");
//     printf("I am learning C.I can compile and run a program.\n");
//     return 0;
// }


//第 2 课 · 变量与整数运算

// int main(void)
// {
//     // int minutes = 135;
//     // int hours = minutes/60;
//     // int remaining = minutes % 60;

//     // printf("%d minutes = %d hours and %d minutes\n",
//     //         minutes,hours,remaining);
    
//     //输出：135 minutes = 2 hours and 15 minutes


//     // int minutes = 59;
//     // int hours = minutes/60;
//     // int remaining = minutes % 60;
//     // printf("%d minutes = %d hours and %d minutes\n",
//     //         minutes,hours,remaining);
    
//     //输出：59 minutes = 0 hours and 59 minutes


//     // int minutes = 60;
//     // int hours = minutes/60;
//     // int remaining = minutes % 60;
//     // printf("%d minutes = %d hours and %d minutes\n",
//     //         minutes,hours,remaining);
    
//     //输出：60 minutes = 1 hours and 0 minutes

//     int minutes = 61;
//     int hours = minutes/60;
//     int remaining = minutes % 60;
//     printf("%d minutes = %d hours and %d minutes\n",
//             minutes,hours,remaining);

//     //输出：61 minutes = 1 hours and 1 minutes
   
//     return 0;
// }

/*
从 59 变成 60 时，为什么小时数增加了，剩余分钟数却变成了 0？
59分钟凑不满一个完整小时，所以商是 0、余数是 59。
到60钟时，刚好凑满一个小时，余数归零。
*/

// 第 2 课继续 · 从键盘读取整数

// int main(void)
// {
//     int minutes;
    
//     printf("Enter minutes:");
//     if(scanf("%d",&minutes) != 1)
//     {
//         printf("Please enter an integer.\n");
//         return 1;
//     }
    
//     int hours = minutes/60;
//     int remaining = minutes % 60;

//     printf("%d minutes = %d hours and %d minutes\n",
//             minutes,hours,remaining);
   
//     return 0;
// }


// 第 3 课 · 用 if 判断数值范围

// int main(void)
// {
//     int minutes;
    
//     printf("Enter minutes:");
//     if(scanf("%d",&minutes) != 1)
//     {
//         printf("Please enter an integer.\n");
//         return 1;
//     }
    
//     if(minutes < 0)
//     {
//         printf("Minutes must be zero or greater.\n");
//     }
//      int hours = minutes/60;
//      int remaining = minutes % 60;

//     printf("%d minutes = %d hours and %d minutes\n",
//              minutes,hours,remaining);

//     return 0;
// }

/*
随堂练习：用 VS Code 的运行按钮分别测试 -1、`0` 和 1，先预测哪次会被拒绝。
-1会被拒绝
再想一下，如果把条件写成 minutes <= 0，哪个测试结果会改变？
等于0时会拒绝
*/

//第 3 课继续 · 用 if...else 二选一

// int main(void)
// {
//     int minutes;
    
//     printf("Enter minutes:");
//     if(scanf("%d",&minutes) != 1)
//     {
//         printf("Please enter an integer.\n");
//         return 1;
//     }
    
//     if(minutes < 0)
//     {
//         printf("Minutes must be zero or greater.\n");
//     }
//      int hours = minutes/60;
//      int remaining = minutes % 60;

//     if(hours == 1)
//     {
//         printf("%d minutes = %d hour and %d minutes\n",
//                 minutes,hours,remaining);
//     }
//     else
//     {
//         printf("%d minutes = %d hours and %d minutes\n",
//                 minutes,hours,remaining);
//     }

//     return 0;
// }

/*
随堂练习：
先预测输入 59、`60`、`120` 时，各自会输出 hour 还是 hours，再运行验证。
59，120 是 hours；60 是 hour
最后试着把同样的判断用到 remaining 上，让输入 61 时显示 1 hour and 1 minute。
*/

// int main(void)
// {
//     int minutes;
    
//     printf("Enter minutes:");
//     if(scanf("%d",&minutes) != 1)
//     {
//         printf("Please enter an integer.\n");
//         return 1;
//     }
    
//     if(minutes < 0)
//     {
//         printf("Minutes must be zero or greater.\n");
//     }
//      int hours = minutes/60;
//      int remaining = minutes % 60;

//     if(hours == 1)
//     {
//         if(remaining == 1)
//         {
//             printf("%d minutes = %d hour and %d minute\n",
//                 minutes,hours,remaining);
//         }
//         else
//         {
//             printf("%d minutes = %d hour and %d minutes\n",
//                 minutes,hours,remaining);
//         }
//     }
//     else
//     {
//         if(remaining == 1)
//         {
//             printf("%d minutes = %d hours and %d minute\n",
//                 minutes,hours,remaining);
//         }
//         else
//         {
//             printf("%d minutes = %d hours and %d minutes\n",
//                 minutes,hours,remaining);
//         }
//     }

//     return 0;
// }

/*
最后留一道读代码题：
对任意一个通过输入检查的分钟数，这四条 printf 中会执行几条？
试着用 121 从外层条件开始，逐步说明程序走到了哪一条。

一条
121走到第3条
输入 121 时，`hours` 是 2，外层的 hours == 1 不成立，进入 else。
接着 remaining 是 1，内层的 remaining == 1 成立，于是执行第 3 条 printf，
输出 2 hours and 1 minute。
*/


//第 3 课继续 · 用 while 重复执行

// int main(void)
// {
//     int count = 1;

//     while(count<=3)
//     {
//         printf("%d\n",count);
//         count = count + 1;
//     }

//     return 0;
// }

/*
随堂练习：
先预测这个程序会打印哪些数字，以及循环结束时 count 是多少。
打印1、2、3，在count=4时循环结束。
用 VS Code 运行验证后，只改 count 的初始值为 4。这次 printf 会执行几次？
printf不会执行。
*/


// 第 3 课继续 · 让换算器连续工作

//约定输入 -1 正常退出，输入 0 或正整数就换算，然后再问一次
// int main(void)
// {
//     while(1)
//     {
//         int minutes;
    
//         printf("Enter minutes:");
//         if(scanf("%d",&minutes) != 1)
//         {
//             printf("Please enter an integer.\n");
//             return 1;
//         }
//         if (minutes == -1)
//         {
//             break;
//         }
        

//         if(minutes < 0)
//         {
//             printf("Minutes must be zero or greater.\n");
//         }
//         int hours = minutes/60;
//         int remaining = minutes % 60;

//         if(hours == 1)
//         {
//             if(remaining == 1)
//             {
//                 printf("%d minutes = %d hour and %d minute\n",
//                     minutes,hours,remaining);
//             }
//             else
//             {
//                 printf("%d minutes = %d hour and %d minutes\n",
//                     minutes,hours,remaining);
//             }
//         }
//         else
//         {
//             if(remaining == 1)
//             {
//                 printf("%d minutes = %d hours and %d minute\n",
//                     minutes,hours,remaining);
//             }
//             else
//             {
//                 printf("%d minutes = %d hours and %d minutes\n",
//                     minutes,hours,remaining);
//             }
//         }

//     }
//     return 0;
// }


/*
随堂练习：
只点一次 VS Code 的运行按钮，依次输入 61、`0`、`-1`，每次按回车。
预期前两次各输出一条换算结果，第三次直接结束。
61: 61 minutes = 1 hour and 1 minute
0:  0 minutes = 0 hours and 0 minutes
-1： break
再想一想：
如果把 minutes == -1 的判断放到 minutes < 0 的检查后面，输入 -1 时会先执行哪条语句？
会先判断是不是负数。
*/

//第 3 课继续 · 用 continue 跳过本轮

//现在输入 -2 会让整个程序结束。我们把它改成提示错误，然后让用户再输一次。
int main(void)
{
    while(1)
    {
        int minutes;
    
        printf("Enter minutes:");
        if(scanf("%d",&minutes) != 1)
        {
            printf("Please enter an integer.\n");
            return 1;
        }
        if (minutes == -1)
        {
            break;  // `break` 则会退出循环，走到后面的 return 0;
        }
        

        if(minutes < 0)
        {
            printf("Minutes must be zero or greater.\n");
            continue;  // `continue` 会跳过本轮剩下的计算和输出，回到循环开头。
        }

        int hours = minutes/60;
        int remaining = minutes % 60;

        if(hours == 1)
        {
            if(remaining == 1)
            {
                printf("%d minutes = %d hour and %d minute\n",
                    minutes,hours,remaining);
            }
            else
            {
                printf("%d minutes = %d hour and %d minutes\n",
                    minutes,hours,remaining);
            }
        }
        else
        {
            if(remaining == 1)
            {
                printf("%d minutes = %d hours and %d minute\n",
                    minutes,hours,remaining);
            }
            else
            {
                printf("%d minutes = %d hours and %d minutes\n",
                    minutes,hours,remaining);
            }
        }

    }
    return 0;
}

/*
随堂练习：
只运行一次程序，依次输入 -2、`61`、`-1`。先预测哪一轮会执行换算，再运行验证。
-2: 重新输入
61：61 minutes = 1 hour and 1 minute
-1：退出
顺便想一想：
如果把这里的 continue 删掉，输入 -2 后，程序打印错误提示还会继续做什么？
最后一题要区分删掉和换回：
- 只删掉 continue;：输入 -2 后，程序打印错误提示，接着往下计算。
`-2 / 60` 得到 0，`-2 % 60` 得到 -2，
所以它还会打印 -2 minutes = 0 hours and -2 minutes，
然后进入下一轮。
- 把 continue; 换回 return 1;：打印错误提示后，整个程序结束。
*/


// for 循环