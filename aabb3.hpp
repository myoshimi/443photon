#ifndef _INC_AABB3
#define _INC_AABB3

#include "vector3.hpp"
#include "polygon3.hpp"

/** @file */

/** @class AABB3
 *  @brief AABB3ボックスクラス
 */
class AABB3{
public:
    Vector3 max, min;
    AABB3* right;
    AABB3* left;
    Polygon3* node;
    AABB3(){};
    void empty();
    void add(Vector3 p);
    void disp();
    AABB3* clone();
    Vector3 get_gravity_center();
    REAL intersect(Vector3 viewpoint, Vector3 view_vector);
    void getGraph(char* str, int n);
    static bool cmpx(AABB3* a, AABB3* b);
};

#endif // _INC_AABB3
