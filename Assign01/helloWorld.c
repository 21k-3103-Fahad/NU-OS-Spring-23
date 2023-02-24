#include<linux/kernel.h>

asmlinkage long sys_helloworld(void)
{
   printk("Hello, world! 21K-3103");
   return 0;
}
