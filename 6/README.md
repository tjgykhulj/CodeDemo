<h1>The Sixth Demo<BR>
Reduplicative function in dynamic linking <br>
</h1>
gcc -fPIC -shared a1.c -o a1.so<br>
gcc -fPIC -shared a2.c -o a2.so<br>
gcc -fPIC -shared b1.c a1.so -o b1.so<br>
gcc -fPIC -shared b2.c a2.so -o b2.so<br>
gcc main.c b1.so b2.so -o main -Xlinker -rpath ./<br>
<br>
./main<br>
<br>
it will print:<br>
a1.c<br>
a1.c<br>
<br>
Explain : <br>
When dynamic link, b1.so and b2.so invoke two different "void a()". Only the first one is useful (in a1.so).
