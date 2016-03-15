<h1>The Fifth Demo<BR>
动态链接(Dynamic Link)<br>
</h1>
gcc -fPIC -shared -o Lib.so Lib.c<br>
(to genarate a dynamic shared object "Lib.so")<br>
<br>
gcc -o 1 prog1.c ./Lib.so<br>
gcc -o 2 prog2.c ./Lib.so<br>
<br>
./1<br>
./2<br>
<br><br>
静态链接只生成一个不可分割的可执行文件，动态链接则生成可执行文件(1)与共享对象(Lib.so)<br>
当需要更改foobar函数时，只要重新编译出包含此函数的Lib.so即可（模块化）
