#include <raylib.h>

int main(int argc, char **argv) {

    Image img = LoadImage(argv[1]);
    char *file_name = argv[1];
    ExportImageAsCode(img, argv[2]);

    UnloadImage(img);

    return 0;
}
