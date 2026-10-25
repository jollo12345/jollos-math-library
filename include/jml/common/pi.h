#ifndef JML_COMMON_PI_H
#define JML_COMMON_PI_H

static constexpr double JML_PI_D = 0x1.921fb54442d18p+1;
static constexpr float JML_PI_F = 0x1.921fb6p+1f;

#endif  // JML_COMMON_PI_H

#ifdef JML_WITHOUT_PREFIX

#define PI_D JML_PI_D;
#define PI_F JML_PI_F;

#endif