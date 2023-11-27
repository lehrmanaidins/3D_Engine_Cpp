/*
    Vector3 Class
    @author: Lehrman, Aidin
*/

class Vector3 {
    public:
        double x, y, z;

        Vector3() {
            x = 0.0;
            y = 0.0;
            z = 0.0;
        }

        Vector3(double x, double y, double z) {
            this -> x = x;
            this -> y = y;
            this -> z = z;
        }

        Vector3(const Vector3 &vector) {
            x = vector.x;
            y = vector.y;
            z = vector.z;
        }
};

inline std::ostream& operator<<(std::ostream &out, const Vector3 &vector) {
    return out << "{" << vector.x << ", " << vector.y << ", " << vector.z << "}";
}
