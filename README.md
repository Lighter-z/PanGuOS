# 教程
* [点击查看](https://blog.csdn.net/m0_51061483/article/details/123789780?spm=1001.2014.3001.5502)
# 添加启动项
* 将下面代码插入/boot/grub/grub.cfg文件中
  ```C
  menuentry 'HelloOS' {
    insmod part_msdos     #GRUB加载分区模块识别分区
    insmod ext2           #GRUB加载ext文件系统模块识别ext文件系统
    set root='hd0,msdos5' #注意boot目录挂载的分区，这是我机器上的情况
    multiboot2 /boot/HelloOS.bin  #GRUB以multiboot2协议加载HelloOS.bin
    boot
  }
  ```
