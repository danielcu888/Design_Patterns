#include "TraditionalSofa.h"

#include <string>

namespace furniture
{

  TraditionalSofa::TraditionalSofa( const std::string& brand_name_
                                  , std::size_t num_seats_
                                  , double height_
                                  , double width_
                                  , double depth_
                                  )
    : Sofa( num_seats_
          , height_
          , width_
          , depth_
          )
    , m_brand_name(brand_name_)
  {}

  std::string TraditionalSofa::brand_name() const
  {
    return m_brand_name;
  }

} // ! namespace furniture
