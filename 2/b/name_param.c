#include<linux/module.h>
static char *myname = "name";
int init_module(void){
	printk("Hello %s ! How are you?\n",myname);
	return 0;
}
void cleanup_module(void){
	printk("Module removed");
}
module_param(myname,charp,0);
MODULE_LICENSE("GPL");
