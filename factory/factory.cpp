#include <stdio.h>
#include <string.h>

class Ishape {
    public:
        virtual void print_shape() = 0;
        Ishape() {};
        virtual ~Ishape() {};
};

class circle : public Ishape {
    public:
        void print_shape() {
            printf("CIRCLE\n");
        }
        circle() {
            printf("Shape: Circle Constructor\n");
        }
        ~circle() {
            printf("Shape: Circle Destructor\n");
        }
};

class rectangle : public Ishape {
    public:
        void print_shape() {
            printf("RECTANGLE\n");
        }
        rectangle() {
            printf("Shape: Rectangle Constructor\n");
        }
        ~rectangle() {
            printf("Shape: Rectangle Destructor\n");
        }
};

class square : public Ishape {
    public:
        void print_shape() {
            printf("SQUARE\n");
        }
        square() {
            printf("Shape: Square Constructor\n");
        }
        ~square() {
            printf("Shape: Square Destructor\n");
        }
};

class shape_factory {
    public:
        Ishape* get_shape(char *shape) {
            if (strcmp(shape, "Circle") == 0) {
                printf("Factory: Creating Circle Object\n");
                return(new circle());
            } else if (strcmp(shape, "Rectangle") == 0) {
                printf("Factory: Creating Rectangle Object\n");
                return(new rectangle());
            } else if (strcmp(shape, "Square") == 0) {
                printf("Factory: Creating Square Object\n");
                return(new square());
            } else {
                printf("ERROR: Unknown Shape [%s] Requested\n", shape);
                return NULL;
            }
        }
        shape_factory() {
            printf("Shape Factory: Constructor\n");
        }
        ~shape_factory() {
            printf("Shape Factory: Destructor\n");
        }
};

int main(int argc, char *argv[]) {
    Ishape *s = NULL;
    shape_factory f;

    if (argc < 2) {	   
        printf("ERROR: Please specify the shape to print\n");
        return 1;
    }

    s = f.get_shape(argv[1]);
    if (s) {
        s->print_shape();
        delete(s);
    }
    return 0;
}
