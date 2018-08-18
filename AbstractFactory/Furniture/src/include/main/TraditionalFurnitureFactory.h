#ifndef GUARD_TRADITIONALFURNITUREFACTORY_H_
#define GUARD_TRADITIONALFURNITUREFACTORY_H_

#include "Sofa.h"
#include "ArmChair.h"
#include "FootStool.h"

#include <memory>
#include <cstddef>
#include <string>

namespace furniture
{

  class TraditionalFurnitureFactory final
  {
  public:

    // public structors

    TraditionalFurnitureFactory(const std::string brand_name_);
    virtual ~TraditionalFurnitureFactory() = default;
    TraditionalFurnitureFactory(const TraditionalFurnitureFactory&) = default;
    TraditionalFurnitureFactory(TraditionalFurnitureFactory&&) = default;
    TraditionalFurnitureFactory& operator=(const TraditionalFurnitureFactory&) = default;
    TraditionalFurnitureFactory& operator=(TraditionalFurnitureFactory&&) = default;

    // public methods

    virtual std::unique_ptr<Sofa> create_sofa( std::size_t num_seats_
                                             , double height_
                                             , double width_
                                             , double depth_
                                             ) const;
    virtual std::unique_ptr<ArmChair> create_armchair( double height_
                                                     , double width_
                                                     , double depth_
                                                     ) const;
    virtual std::unique_ptr<FootStool> create_footstool( double height_
                                                       , double width_
                                                       , double depth_
                                                       ) const;

    std::string brand_name() const;

  private:

    // private data members

    const std::string m_brand_name;

  }; // ! class TraditionalFurnitureFactory

} // ! namespace furniture

#endif
