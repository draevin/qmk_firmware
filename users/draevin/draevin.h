#pragma once

#include QMK_KEYBOARD_H
#include "wrappers.h"

#define TAPPING_TOGGLE 2
#define TAPPING_TERM 150

enum my_layers {
    _CM,
    _QW,
    _FN,
};

enum my_keycodes {
  CM_QW = SAFE_RANGE,       // Switch between Colemak and QWERTY
  KC_MAKE,                  // in style of drashna
  NEW_SAFE_RANGE
};

enum my_taps {
  TD_CAPS = 0
};
