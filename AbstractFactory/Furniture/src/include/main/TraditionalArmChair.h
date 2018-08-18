#ifndef GUARD_TRADITIONALARMCHAIR_H_
#define GUARD_TRADITIONALARMCHAIR_H_

#include "ArmChair.h"

#include <string>

namespace furniture
{

  class TraditionalArmChair final : public ArmChair
  {
  public:

    // public structors

    TraditionalArmChair( const std::string& brand_name_
                       , double height_
                       , double width_
                       , double depth_
                       );

    virtual ~TraditionalArmChair();

    TraditionalArmChair(const TraditionalArmChair&) = default;
    TraditionalArmChair(TraditionalArmChair&&) = default;
    TraditionalArmChair& operator=(const TraditionalArmChair&) = default;
    TraditionalArmChair& operator=(TraditionalArmChair&&) = default;

    // public etters

    std::string brand_name() const;

  private:

    // private data members

    const std::string m_brand_name;

  }; // ! class TraditionalArmChair

} // ! namespace furniture

#endif
