#ifndef GUARD_TRADITIONALSOFA_H_
#define GUARD_TRADITIONALSOFA_H_

#include "Sofa.h"

#include <string>
#include <cstddef>

namespace furniture
{

  class TraditionalSofa final : public Sofa
  {

  public:

    // public structors

    TraditionalSofa( const std::string& brand_name_
                   , std::size_t num_seats_
                   , double height_
                   , double width_
                   , double depth_
                   );

    virtual ~TraditionalSofa() = default;

    TraditionalSofa(const TraditionalSofa&) = default;
    TraditionalSofa(TraditionalSofa&&) = default;
    TraditionalSofa& operator=(const TraditionalSofa&) = default;
    TraditionalSofa& operator=(TraditionalSofa&&) = default;

    // public etters

    std::string brand_name() const;

  private:

    // private data members

    const std::string m_brand_name;

  }; // ! class TraditionalSofa

} // ! namespace furniture

#endif
