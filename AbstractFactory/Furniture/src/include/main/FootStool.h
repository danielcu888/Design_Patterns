#ifndef GUARD_FOOTSTOOL_H_
#define GUARD_FOOTSTOOL_H_

namespace furniture
{

  class FootStool
  {
  public:

    // public structors

    FootStool( double height_
             , double width_
             , double depth_
             );

    virtual ~FootStool() = 0;

    FootStool(const FootStool&) = default;
    FootStool(FootStool&&) = default;
    FootStool& operator=(const FootStool&) = default;
    FootStool& operator=(FootStool&&) = default;

    // public etters

    double height() const;
    double width() const;
    double depth() const;

  private:

    // private data members

    const double m_height;
    const double m_width;
    const double m_depth;

  }; // ! class FootStool

} // ! namespace furniture

#endif
