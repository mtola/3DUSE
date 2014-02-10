#ifndef __ALGO2_HPP__
#define __ALGO2_HPP__
////////////////////////////////////////////////////////////////////////////////
#include "URI.hpp"
#include "scene.hpp"
#include "dataprofile.hpp"
#include "settings.hpp"
#include "tools/log.hpp"
////////////////////////////////////////////////////////////////////////////////
namespace vcity
{
    class Algo2
    {
        public:
            void fixBuilding(const std::vector<URI>& uris);
            void processRec(citygml::CityObject *);

        private:

    };
////////////////////////////////////////////////////////////////////////////////
} // namespace vcity
////////////////////////////////////////////////////////////////////////////////
#endif // __ALGO2_HPP__
