// -*-c++-*- VCity project, 3DUSE, Liris, 2013, 2014
////////////////////////////////////////////////////////////////////////////////
#ifndef __OSGAssimp_HPP__
#define __OSGAssimp_HPP__
////////////////////////////////////////////////////////////////////////////////
#include <osgDB/ReaderWriter>
////////////////////////////////////////////////////////////////////////////////
typedef std::map<std::string, osg::ref_ptr<osg::Texture> > TextureMap;

typedef osgDB::ReaderWriter::ReadResult ReadResult;
ReadResult readNode( const std::string& file, const osgDB::ReaderWriter::Options* options );
////////////////////////////////////////////////////////////////////////////////
#endif // __OSGAssimp_HPP__
