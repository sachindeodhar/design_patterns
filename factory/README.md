# Factory Pattern

Simple example to demostrate the usage of factory design pattern

## How to build
Run make command

<pre>
sachin@ubuntu:~/design_patterns/factory$ make
g++ -o factory factory.cpp`
sachin@ubuntu:~/design_patterns/factory$
</pre>

## How to run
Run factory command

<pre>
sachin@ubuntu:~/design_patterns/factory$ ./factory 
Shape Factory: Constructor
ERROR: Please specify the shape to print
Shape Factory: Destructor
</pre>

<pre>
sachin@ubuntu:~/design_patterns/factory$ ./factory Circle
Shape Factory: Constructor
Factory: Creating Circle Object
Shape: Circle Constructor
CIRCLE
Shape: Circle Destructor
Shape Factory: Destructor
</pre>

<pre>
sachin@ubuntu:~/design_patterns/factory$ ./factory Rectangle
Shape Factory: Constructor
Factory: Creating Rectangle Object
Shape: Rectangle Constructor
RECTANGLE
Shape: Rectangle Destructor
Shape Factory: Destructor
</pre>

<pre>
sachin@ubuntu:~/design_patterns/factory$ ./factory Square
Shape Factory: Constructor
Factory: Creating Square Object
Shape: Square Constructor
SQUARE
Shape: Square Destructor
Shape Factory: Destructor
</pre>

<pre>
sachin@ubuntu:~/design_patterns/factory$ ./factory asdaasd
Shape Factory: Constructor
ERROR: Unknown Shape [asdaasd] Requested
Shape Factory: Destructor
</pre>
