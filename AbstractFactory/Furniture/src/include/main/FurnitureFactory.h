#ifndef FURNITURE_FACTORY_H_
#define FURNITURE_FACTORY_H_

#include "Sofa.h"
#include "ArmChair.h"
#include "FootStool.h"

#include <memory>

namespace furniture
{

  class FurnitureFactory
  {
  public:

    // public structors
    FurnitureFactory() = default;
    virtual ~FurnitureFactory() = 0;
    FurnitureFactory(const FurnitureFactory&) = default;
    FurnitureFactory(FurnitureFactory&&) = default;
    FurnitureFactory& operator=(const FurnitureFactory&) = default;
    FurnitureFactory& operator=(FurnitureFactory&&) = default;

    // public methods
    virtual std::unique_ptr<Sofa> create_sofa() const = 0;
    virtual std::unique_ptr<ArmChair> create_armchair() const = 0;
    virtual std::unique_ptr<FootStool> create_footstool() const = 0;

  }; // ! class FurnitureFactory

} // ! namespace furniture

#endif
