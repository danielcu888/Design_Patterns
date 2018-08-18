#ifndef GUARD_SOFA_H_
#define GUARD_SOFA_H_

#include <cstddef>

namespace furniture
{

  class Sofa
  {
  public:

    // public structors

    Sofa( std::size_t num_seats_
        , double height_
        , double width_
        , double depth_
        );

    virtual ~Sofa() = 0;

    Sofa(const Sofa&) = default;
    Sofa(Sofa&&) = default;
    Sofa& operator=(const Sofa&) = default;
    Sofa& operator=(Sofa&&) = default;

    // public etters

    std::size_t num_seats() const;
    double height() const;
    double width() const;
    double depth() const;

  private:

    // private data members

    const std::size_t m_num_seats;
    const double m_height;
    const double m_width;
    const double m_depth;

  }; // ! class Sofa

} // ! namespace furniture

#endif
