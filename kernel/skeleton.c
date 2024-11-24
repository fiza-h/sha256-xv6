#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init sha256_init(void) {
    printk(KERN_INFO "SHA-256 Kernel Module Loaded\n");
    return 0;
}

static void __exit sha256_exit(void) {
    printk(KERN_INFO "SHA-256 Kernel Module Unloaded\n");
}

module_init(sha256_init);
module_exit(sha256_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Fiza");
MODULE_DESCRIPTION("SHA-256 Kernel Module Example");

