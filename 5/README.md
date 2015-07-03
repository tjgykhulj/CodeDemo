<h1>The Fifth Demo<BR></h1>
<br>
动态链连(Dynamic Link)<br>
gcc -fPIC -shared -o Lib.so Lib.c<br>
(to genarate a dynamic shared object "Lib.so")<br>
<br>
gcc -o 1 prog1.c ./Lib.so<br>
gcc -o 2 prog2.c ./Lib.so<br>
<br>
./1<br>
./2<br>
