/*
    main.cpp
    @author Lehrman, Aidin

    https://www.sitepoint.com/write-3d-soft-engine-scratch-part-1/
*/

#include <iostream>
#include "Vector3.cpp"
#include "WritableBitMap.cpp"

using namespace std;

int main() {
    WritableBitMap image(10, 10);
    image.renderFrame();
    return 0;
};
