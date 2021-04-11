#include <linux/fs.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <linux/uaccess.h>
#include <linux/delay.h>
#include <linux/kthread.h>
// Global
static struct task_struct *task1;
static struct task_struct *task2;
static int thread_one(void *pargs)
{
    int k;
    while(!kthread_should_stop())
    {
        printk("Thread A--%d\n",k++);
        msleep(1000); //ssleep, usleep
    }
    do_exit(0);
    return 0;
}
static int thread_two(void *pargs)
{
    int k;
    while(!kthread_should_stop())
    {
        printk("Thread B--%d\n",k++);
        msleep(1000); //ssleep, usleep
    }
    do_exit(0);
    return 0;
}
static int __init tdemo_init(void)
{
    task1=kthread_run(thread_one, NULL, "thread_A");   
    task2=kthread_run(thread_two, NULL, "thread_B");
    printk("kernel threads..welcome\n");
    return 0;
}
static void __exit tdemo_exit(void)
{    
    if(task1)
        kthread_stop(task1);
    if(task2)
        kthread_stop(task2); 

    printk("kernel threads..Bye\n");
}
module_init(tdemo_init);
module_exit(tdemo_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("SAYANI");
MODULE_DESCRIPTION("Kernel threads");
