//Name : J Sai Suraj
//Roll no : CED17I035

#include<linux/module.h>
static char *myname = "name";
int init_module(void){
	printk("Your name from the parameter input is %s\n",myname);
	return 0;
}
void cleanup_module(void){
	printk("Module removed");
}
module_param(myname,charp,0);
MODULE_LICENSE("GPL");
