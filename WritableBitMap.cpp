/*
    WritableBitMap Class
    @author Lehrman, Aidin
*/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

class WritableBitMap {
public:
    int width;
    int height;
    vector<vector<array<int, 3>>> bitMap;

    WritableBitMap(int width, int height) {
        this->width = width;
        this->height = height;
        initialize();
    };

    void initialize() {
        // Resize the bitmap to the specified width and height, and initialize all elements to zero.
        bitMap.resize(width, vector<array<int, 3>>(height, {0, 0, 0}));
    };

    int renderFrame() {
        cout << "P3\n" << width << ' ' << height << "\n255\n";

        for (int j = 0; j < height; ++j) {
            for (int i = 0; i < width; ++i) {
                int ir = bitMap[i][j][0];
                int ig = bitMap[i][j][1];
                int ib = bitMap[i][j][2];

                cout << ir << ' ' << ig << ' ' << ib << '\n';
            }
        }
        return 0;
    };
};

inline ostream& operator<<(ostream &out, const WritableBitMap &map) {
    for (const vector<array<int, 3>>& line : map.bitMap) {
        for (const array<int, 3>& pixel : line) {
            out << pixel[0] << " " << pixel[1] << " " << pixel[2] << " ";
        }
        out << "\n";
    }
    return out;
}
