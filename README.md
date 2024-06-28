# Build Instruction
Go to the project dir  
> mkdir build  
> cd build  
> cmake -G "MinGW Makefiles" ..  
> make  
  

# Output Example
指针指向的地址都是虚拟地址  
```
a = 10
&a = 000000000069fe04
sizeof(a) = 4
typeid(a).name() = i

*p_int = 10
p_int = 000000000069fe04
sizeof(p_int) = 8
typeid(p_int).name() = Pi
```

# 进程地址空间，堆和栈关系
在多任务操作系统中，每个进程运行在属于自己的内存沙盘(Virtual Address Space)中。  
32位下是一个4GB(2^32)的内存地址快。  
Linux下内核进程和用户进程所占的虚拟内存比例为1:3；Windows为2:2。根据需要，它们可以被映射到物理内存。  

内存按用途分类：
- 栈：局部变量(编译器分配)，函数参数，返回地址。进程中的每个线程都有自己的栈，size约2~10Mb。栈由专门的寄存器实现，效率高。  
- 堆：动态分配的内存，不能用名字访问，只能用指针访问，32位系统中将近2.9Gb。对由函数库提供，效率低。    
(以上为应用程序运行时维护的内存)  
- BSS段：未初始化或初值为零的全局变量和静态局部变量  
- 数据段：已初始化且初值为非零的全局变量和静态局部变量  
- 代码段：可执行代码、字符串字面值、只读变量  
(以上为操作系统加载应用程序的时候维护的内存)  
- 内核空间：总是驻留在内存中，不允许应用程序读写  

虚拟地址排布是连续的，但物理地址的排布是不连续的。  


# ASLR
= Address Space Layout Randomization=地址空间布局随机化  
一个编译器参数  
是一种针对缓冲区溢出的安全保护技术  
没有ASLR时每次进程执行，加载到内容中，代码所处堆栈stack的位置都是相同的，容易被识别出所在位置，容易被破解。  
如果开启了ASLR=机制：操作系统加载器会针对基地址再去加上一个随机生成的偏移地址，然后再去加载程序模块



# Reference
https://book.crifan.com/books/explore_underlying_mechanism_binary_security/website/windows/security_mechanism/alsr.html  
https://blog.csdn.net/icandoit_2014/article/details/53502046  
https://cloud.tencent.com/developer/article/2247349  

