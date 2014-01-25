#include "laserscanline.h"
#include "urgtoosg.h"

LaserScanLine::LaserScanLine(URGCPPWrapper &urg) : urg(urg)
{
    setDataVariance(osg::Object::DYNAMIC);
    setColorBinding(osg::Geometry::BIND_PER_VERTEX);
}

void LaserScanLine::updateVertices()
{
    UrgToOsg::getOsgPoints(urg, vertices, color);
    setVertexArray(vertices);
    setColorArray(color);

}
