#ifndef GUARD_TRADITIONALFOOTSTOOL_H_
#define GUARD_TRADITIONALFOOTSTOOL_H_

#include "FootStool.h"

#include <string>

namespace furniture
{

  class TraditionalFootStool final : public FootStool
  {
  public:

    // public structors

    TraditionalFootStool( const std::string& brand_name_
                        , double height_
                        , double width_
                        , double depth_
                        );

    virtual ~TraditionalFootStool();

    TraditionalFootStool(const TraditionalFootStool&) = default;
    TraditionalFootStool(TraditionalFootStool&&) = default;
    TraditionalFootStool& operator=(const TraditionalFootStool&) = default;
    TraditionalFootStool& operator=(TraditionalFootStool&&) = default;

    // public etters

    std::string brand_name() const;

  private:

    // private data members

    const std::string m_brand_name;

  }; // ! class TraditionalFootStool

} // ! namespace furniture

#endif
