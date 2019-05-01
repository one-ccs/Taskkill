# 进程强杀工具

自动结束进程工具。

ntsd.exe 的说明-->
系统程序
https://www.felix021.com/blog/read.php?1983

通过AVG杀毒，不放心的话就跳过吧。

NTSD的功能非常的强大,用它强行结束某个比较顽固的进程还是很好用的，基本上除了WINDOWS系统自己的管理进程,ntsd几乎都可以杀掉。XP下是自带的，但是Win7没有，下载后解压到C:/windows/system32下，然后在cmd下，就可以进行操作了。

命令格式：
ntsd -c q -pn ***.exe （***.exe 为进程名,exe不能省） 
ntsd -c q -p PID

命令范例：ntsd -c q -pn explorer.exe 
