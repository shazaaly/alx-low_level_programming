#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/string.h>

int init_module(void)
{
    const char *input_str = NULL;
    char *password = NULL;
    int i, len;

    if (argc < 2) {
        printk(KERN_INFO "Usage: %s <input string>\n", THIS_MODULE->name);
        return -EINVAL;
    }

    input_str = argv[1];
    len = strlen(input_str);

    password = kmalloc((len + 1) * sizeof(char), GFP_KERNEL);
    if (!password) {
        printk(KERN_ERR "Failed to allocate memory\n");
        return -ENOMEM;
    }

    for (i = 0; i < len; i++) {
        password[i] = input_str[i] + 1;
    }

    for (; i < 8; i++) {
        password[i] = 'A' + i;
    }

    password[8] = '\0';

    printk(KERN_INFO "%s\n", password);

    kfree(password);

    return 0;
}

void cleanup_module(void)
{
    printk(KERN_INFO "Module unloaded\n");
}

