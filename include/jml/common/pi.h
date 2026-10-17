#ifndef JML_COMMON_PI_H
#define JML_COMMON_PI_H

constexpr double JML_PI_D = 0x400921fb54442d18;
constexpr float JML_PI_F = 0x40490fdb;

#endif

#ifndef JML_WITHOUT_PREFIX

constexpr double PI_D = JML_PI_D;
constexpr float PI_F = JML_PI_F;

#endif