#ifndef GUARD_ARMCHAIR_H_
#define GUARD_ARMCHAIR_H_

namespace furniture
{

  class ArmChair
  {
  public:

    // public structors

    ArmChair( double height_
            , double width_
            , double depth_
            );

    virtual ~ArmChair() = 0;

    ArmChair(const ArmChair&) = default;
    ArmChair(ArmChair&&) = default;
    ArmChair& operator=(const ArmChair&) = default;
    ArmChair& operator=(ArmChair&&) = default;

    // public etters

    double height() const;
    double width() const;
    double depth() const;

  private:

    // private data members

    const double m_height;
    const double m_width;
    const double m_depth;

  }; // ! class ArmChair

} // ! namespace furniture

#endif
