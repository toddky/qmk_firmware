#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_60_ansi( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C,      k0E, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,      k2D, \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B,      k3D, \
    k40, k41, k42,                k46,                k4A, k4B, k4C, k4D \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, XXX, k0E }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, XXX, k2D, XXX }, \
    { k30, XXX, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, XXX, k3D, XXX }, \
    { k40, k41, k42, XXX, XXX, XXX, k46, XXX, XXX, XXX, k4A, k4B, k4C, k4D, XXX } \
}

#define LAYOUT_60_ansi_split_bksp_rshift( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,      k2D, \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B,      k3D, k3E, \
    k40, k41, k42,                k46,                k4A, k4B, k4C, k4D \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, XXX, k2D, XXX }, \
    { k30, XXX, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, XXX, k3D, k3E }, \
    { k40, k41, k42, XXX, XXX, XXX, k46, XXX, XXX, XXX, k4A, k4B, k4C, k4D, XXX } \
}

#define LAYOUT_60_iso( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C,      k0E, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B,      k3D, \
    k40, k41, k42,                k46,                k4A, k4B, k4C, k4D \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, XXX, k0E }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, XXX, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, XXX }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, XXX, k3D, XXX }, \
    { k40, k41, k42, XXX, XXX, XXX, k46, XXX, XXX, XXX, k4A, k4B, k4C, k4D, XXX } \
}

#define LAYOUT_60_iso_split_rshift( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C,      k0E, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B,      k3D, k3E, \
    k40, k41, k42,                k46,                k4A, k4B, k4C, k4D \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, XXX, k0E }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, XXX, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, XXX }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, XXX, k3D, k3E }, \
    { k40, k41, k42, XXX, XXX, XXX, k46, XXX, XXX, XXX, k4A, k4B, k4C, k4D, XXX } \
}

#define LAYOUT_60_iso_split_rshift( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012,       K014, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112,             \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,       \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, \
	K400, K401, K402,                   K406,                   K410, K411, K412, K413        \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  KC_NO, K014 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  KC_NO, KC_NO }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  KC314 }, \
	{ K400,  K401,  K402,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  K412,  K413,  KC_NO }  \
}

#define LAYOUT_60_hhkb( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,      k2D, \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B,      k3D, k3E, \
         k41, k42,                k46,                k4B, k4C \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, XXX, k2D, XXX }, \
    { k30, XXX, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, XXX, k3D, k3E }, \
    { XXX, k41, k42, XXX, XXX, XXX, k46, XXX, XXX, XXX, XXX, k4B, k4C, XXX, XXX } \
}
