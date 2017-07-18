// Copyright University of Lyon, 2012 - 2017
// Distributed under the GNU Lesser General Public License Version 2.1 (LGPLv2)
// (Refer to accompanying file LICENSE.md or copy at
//  https://www.gnu.org/licenses/old-licenses/lgpl-2.1.html )

////////////////////////////////////////////////////////////////////////////////
#include "abstractlayer.hpp"
////////////////////////////////////////////////////////////////////////////////
namespace vcity
{
    ////////////////////////////////////////////////////////////////////////////////
    abstractLayer::abstractLayer(const std::string& name)
        : m_name(name)
    {

    }
    ////////////////////////////////////////////////////////////////////////////////
    void abstractLayer::setName(const std::string& name)
    {
        m_name = name;
    }
    ////////////////////////////////////////////////////////////////////////////////
    const std::string& abstractLayer::getName() const
    {
        return m_name;
    }
    ////////////////////////////////////////////////////////////////////////////////
} // namespace vcity
////////////////////////////////////////////////////////////////////////////////
