//Name : J Sai Suraj
//Roll no : CED17I035
#include<linux/module.h>
static int count =5;
int init_module(void){
	printk("The count integer parameter = %d\n",count);
	return 0;
}
void cleanup_module(void){
	printk("Module removed");
}
module_param(count,int,0);
MODULE_LICENSE("GPL");
