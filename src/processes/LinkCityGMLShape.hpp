// -*-c++-*- VCity project, 3DUSE, Liris, 2013, 2014, 2015
////////////////////////////////////////////////////////////////////////////////
#ifndef __LINKCITYGMLSHAPE_HPP__
#define __LINKCITYGMLSHAPE_HPP__
////////////////////////////////////////////////////////////////////////////////
#include "src/core/URI.hpp"
#include "libcitygml/citygml.hpp"
#include "src/gui/osg/osgGDAL.hpp"
#include "gui/moc/mainWindow.hpp"
#include <stdlib.h>
////////////////////////////////////////////////////////////////////////////////
void DecoupeCityGML(std::string Folder, geos::geom::Geometry * ShapeGeo, std::vector<BatimentShape> BatimentsInfo);
////////////////////////////////////////////////////////////////////////////////
#endif // __LINKCITYGMLSHAPE_HPP__