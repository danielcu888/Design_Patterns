#include "TraditionalFurnitureFactory.h"
#include "Sofa.h"
#include "TraditionalSofa.h"
#include "ArmChair.h"
#include "TraditionalArmChair.h"
#include "FootStool.h"
#include "TraditionalFootStool.h"

#include <memory>
#include <string>

namespace furniture
{

  std::unique_ptr<Sofa> TraditionalFurnitureFactory::create_sofa( std::size_t num_seats_
                                                                , double height_
                                                                , double width_
                                                                , double depth_
                                                                ) const
  {
    return std::make_unique<TraditionalSofa>( m_brand_name
                                            , num_seats_
                                            , height_
                                            , width_
                                            , depth_
                                            );
  }

  std::unique_ptr<ArmChair> TraditionalFurnitureFactory::create_armchair( double height_
                                                                        , double width_
                                                                        , double depth_
                                                                        ) const
  {
    return std::make_unique<TraditionalArmChair>( m_brand_name
                                                , height_
                                                , width_
                                                , depth_
                                                );
  }

  std::unique_ptr<FootStool> TraditionalFurnitureFactory::create_footstool( double height_
                                                                          , double width_
                                                                          , double depth_
                                                                          ) const
  {
    return std::make_unique<TraditionalFootStool>( m_brand_name
                                                 , height_
                                                 , width_
                                                 , depth_
                                                 );
  }

  std::string TraditionalFurnitureFactory::brand_name() const
  {
    return m_brand_name;
  }

} // ! namespace furniture
