/*
    Vector3
    @author: Lehrman, Aidin
*/

struct Vector3{
    double x, y, z;
};



inline std::ostream& operator<<(std::ostream &out, const Vector3 &vector) {
    return out << "{" << vector.x << ", " << vector.y << ", " << vector.z << "}";
}