#include "TraditionalFootStool.h"

#include <string>

namespace furniture
{

  TraditionalFootStool::TraditionalFootStool( const std::string& brand_name_
                                            , double height_
                                            , double width_
                                            , double depth_
                                            )
    : FootStool( height_
               , width_
               , depth_
               )
    , m_brand_name(brand_name_)
  {}

  std::string TraditionalFootStool::brand_name() const
  {
    return m_brand_name;
  }

} // ! namespace furniture
