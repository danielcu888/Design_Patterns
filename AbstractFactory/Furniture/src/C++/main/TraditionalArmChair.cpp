#include "TraditionalArmChair.h"

#include <string>

namespace furniture
{

  TraditionalArmChair::TraditionalArmChair( const std::string& brand_name_
                                          , double height_
                                          , double width_
                                          , double depth_
                                          )
    : ArmChair( height_
              , width_
              , depth_
              )
    , m_brand_name(brand_name_)
  {}

  std::string TraditionalArmChair::brand_name() const
  {
    return m_brand_name;
  }

} // ! namespace furniture
