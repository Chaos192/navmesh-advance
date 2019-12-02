//====================================
// brief: Edge�࣬��ʾ�����ʷֺ���߶Σ�һ���߶ο��ܰ���һ�����������ǣ�����������
// author:sunxvming@163.com
// date:  2019-11-15
//====================================

#ifndef NAVMESH_EDGE_H
#define NAVMESH_EDGE_H

#include <stdint.h>

class Polygon;
class Edge
{
public:
	int32_t triangles[2];
	int32_t points[2];
	Edge() { this->triangles[0] = -1; this->triangles[1] = -1; this->points[0] = -1; this->points[1] = -1; }
	Edge(int32_t t1, int32_t t2, int32_t p1, int32_t p2);
	int32_t IsRestrain(Polygon* p);
	virtual ~Edge();
};

#endif