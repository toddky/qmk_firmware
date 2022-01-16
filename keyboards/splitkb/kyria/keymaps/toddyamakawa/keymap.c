/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// MODTAP:
// - MT(MOD_{mod}, KC_{key})
// - Activates `mod` when held
// - Produces `key` when tapped

// Examples
// - KC_LCTL
// - LT(_NUMBER, KC_ENT)
// - LT(_NUMBER, KC_DEL)
// - LT(_NUMBER, KC_PGUP)
// - LT(_NUMBER, KC_DEL)
// - MT(MOD_LCTL, KC_BSPC)
// - MT(MOD_LCTL, KC_ESC)
// - MT(MOD_LALT, KC_ENT)

#define THUM_L1 MO(_LEFT)
#define THUM_L2 MO(_NUMBER)
#define THUM_L3 LT(_RIGHT, KC_DEL)
//#define THUM_L4 KEY_ENABLE_MOD
#define THUM_L4 _______
#define THUM_L5 KC_SLCK
#define THUM_L6 KC_LCTL
#define THUM_L7 KC_LSFT
#define THUM_R1 MT(MOD_LSFT, KC_BSPC)
#define THUM_R2 KC_SPC
#define THUM_R3 MO(_RIGHT)
#define THUM_R4 MO(_RGB)
#define THUM_R5 KC_MUTE
#define THUM_R6 MO(_NUMBER)
#define THUM_R7 LT(_NUMBER, KC_END)

#define PINK_L1 KC_TAB
#define PINK_L2 TO_LOL
#define PINK_L3 KC_LSFT
#define PINK_R1 _______
#define PINK_R2 KC_QUOT
#define PINK_R3 LGUI(KC_L)

#define CTRL_V LCTL(KC_V)
#define CTRL_C LCTL(KC_C)
#define CTRL_X LCTL(KC_X)
#define CTRL_Z LCTL(KC_Z)

// League of Legends
#define TO_LOL  TO(_LOL)
#define MO_LOL2 MO(_LOL2)
#define TO_QWER TO(_QWERTY)

enum layers {
    _QWERTY = 0,
    _NUMBER,
    _LEFT,
    _RIGHT,
    _LOL,
    _RGB
};


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// ====================================================================================================================================
// BLANK
// ====================================================================================================================================
// ┌───────┬───────┬───────┬───────┬───────┬───────┐                                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
// │       │       │       │       │       │       │                                  │       │       │       │       │       │       │
// │       │       │       │       │       │       │                                  │       │       │       │       │       │       │
// ├───────┼───────┼───────┼───────┼───────┼───────┤                                  ├───────┼───────┼───────┼───────┼───────┼───────┤
// │       │       │       │       │       │       │                                  │       │       │       │       │       │       │
// │       │       │       │       │       │       │                                  │       │       │       │       │       │       │
// ├───────┼───────┼───────┼───────┼───────┼───────┼───────┬───────┐  ┌───────┬───────┼───────┼───────┼───────┼───────┼───────┼───────┤
// │       │       │       │       │       │       │       │       │  │       │       │       │       │       │       │       │       │
// │       │       │       │       │       │       │       │       │  │       │       │       │       │       │       │       │       │
// └───────┴───────┴───────┼───────┼───────┼───────┼───────┼───────┤  ├───────┼───────┼───────┼───────┼───────┼───────┴───────┴───────┘
//                         │       │       │       │       │       │  │       │       │       │       │       │
//                         │       │       │       │       │       │  │       │       │       │       │       │
//                         └───────┴───────┴───────┴───────┴───────┘  └───────┴───────┴───────┴───────┴───────┘
//  _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
//  _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,_______,_______,
//  _______,_______,_______,_______,_______,_______,_______,_______,   _______,_______,_______,_______,_______,_______,_______,_______,
//                          _______,_______,_______,_______,_______,   _______,_______,_______,_______,_______
//

// ====================================================================================================================================
// BASE LAYER: QWERTY
// ====================================================================================================================================
// ┌───────┬───────┬───────┬───────┬───────┬───────┐                                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
// │       │   Q   │   W   │   E   │   R   │   T   │                                  │   Y   │   U   │   I   │   O   │   P   │   |   │
// │  TAB  │       │       │       │       │       │                                  │       │       │       │       │       │   \   │
// ├───────┼───────┼───────┼───────┼───────┼───────┤                                  ├───────┼───────┼───────┼───────┼───────┼───────┤
// │       │   A   │   S   │   D   │   F   │   G   │                                  │   H   │   J   │   K   │   L   │   :   │   "   │
// │  VIM  │       │       │       │       │       │                                  │       │       │       │       │   ;   │   '   │
// ├───────┼───────┼───────┼───────┼───────┼───────┼───────┬───────┐  ┌───────┬───────┼───────┼───────┼───────┼───────┼───────┼───────┤
// │       │   Z   │   X   │   C   │   V   │   B   │ SHIFT │  CTRL │  │ NUMBER│ NUMBER│   N   │   M   │   <   │   >   │   ?   │   _   │
// │  NUM  │       │       │       │       │       │       │       │  │       │  END  │       │       │   ,   │   .   │   /   │   -   │
// └───────┴───────┴───────┼───────┼───────┼───────┼───────┼───────┤  ├───────┼───────┼───────┼───────┼───────┼───────┴───────┴───────┘
//                         │ SCROLL│  MOD  │ RIGHT │ NUMBER│  LEFT │  │ SHIFT │       │ RIGHT │  RGB  │  VOL  │
//                         │SCRLOCK│       │  DEL  │       │       │  │ BKSPC │ SPACE │       │       │  MUTE │
//                         └───────┴───────┴───────┴───────┴───────┘  └───────┴───────┴───────┴───────┴───────┘
    [_QWERTY] = LAYOUT(
    // TODO: Figure out why this doesn't work
//  PINK_L1,_______________QWERTY_L1_______________,                                   _______________QWERTY_R1_______________,KC_PIPE,
//  PINK_L2,_______________QWERTY_L2_______________,                                   _______________QWERTY_R2_______________,KC_QUOT,
//  PINK_L3,_______________QWERTY_L3_______________,THUM_L7,THUM_L6,   THUM_R6,THUM_R7,_______________QWERTY_R3_______________,KC_MINS,
    PINK_L1,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                                      KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,PINK_R1,
    PINK_L2,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                                      KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,PINK_R2,
    PINK_L3,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,THUM_L7,THUM_L6,   THUM_R6,THUM_R7,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,PINK_R3,
                            THUM_L5,THUM_L4,THUM_L3,THUM_L2,THUM_L1,   THUM_R1,THUM_R2,THUM_R3,THUM_R4,THUM_R5
    ),

    [_LEFT] = LAYOUT(
    KC_TAB ,KC_ESC ,KC_DEL ,KC_PGUP,KC_PGDN,KC_HOME,                                   _______,_______,_______,_______,_______,_______,
    _______,KC_ENT ,KC_LGUI,KC_LALT,KC_LCTL,KC_BSPC,                                   KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,
    _______,CTRL_Z ,CTRL_X ,CTRL_C ,CTRL_V ,KC_END ,_______,_______,   _______,_______,_______,KC_PGDN,KC_PGUP,_______,_______,_______,
                            _______,_______,_______,_______,_______,   _______,_______,_______,_______,_______
    ),

    [_RIGHT] = LAYOUT(
    _______,KC_F11 ,_______,KC_PGUP,KC_PGDN,_______,                                   _______,KC_MPRV,KC_MPLY,KC_MNXT,KC_F12 ,_______,
    _______,KC_BTN1,KC_BTN3,KC_BTN2,KC_BTN1,_______,                                   _______,KC_LCTL,KC_LALT,KC_LGUI,KC_LSFT,_______,
    _______,KC_F4  ,KC_F3  ,KC_F2  ,KC_F1  ,KC_F5  ,_______,_______,   _______,_______,KC_F6  ,KC_F10 ,KC_F9  ,KC_F8  ,KC_F7  ,_______,
                            _______,_______,_______,_______,_______,   _______,_______,_______,_______,_______
    ),

// ====================================================================================================================================
// LEAGUE OF LEGENDS
// ====================================================================================================================================
    [_LOL] = LAYOUT(
    KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_T   ,                                   _______,_______,_______,_______,_______,_______,
    KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_G   ,                                   _______,TO_QWER,_______,_______,_______,_______,
    KC_Z   ,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_V   ,KC_B   ,_______,   _______,_______,_______,_______,_______,_______,_______,KC_P   ,
                            _______,KC_LALT,KC_LALT,KC_SPC ,KC_LCTL,  _______,_______,_______,_______,_______
    ),

// ====================================================================================================================================
// NUMBER
// ====================================================================================================================================
// Left-handed number pad.
// ┌───────┬───────┬───────┬───────┬───────┬───────┐                                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
// │       │       │   (   │   *   │   &   │       │                                  │       │       │       │       │       │       │
// │       │   ~   │   9   │   8   │   7   │       │                                  │       │   (   │   )   │   \   │   |   │SCRLLCK│
// ├───────┼───────┼───────┼───────┼───────┼───────┤                                  ├───────┼───────┼───────┼───────┼───────┼───────┤
// │       │   )   │   #   │   @   │   !   │       │                                  │       │       │       │       │       │       │
// │       │   0   │   3   │   2   │   1   │       │                                  │       │   {   │   }   │   -   │   _   │CAPSLCK│
// ├───────┼───────┼───────┼───────┼───────┼───────┼───────┬───────┐  ┌───────┬───────┼───────┼───────┼───────┼───────┼───────┼───────┤
// │       │       │   ^   │   %   │   $   │       │       │       │  │       │       │       │       │       │       │       │       │
// │       │   `   │   6   │   5   │   4   │       │       │       │  │       │       │       │   [   │   ]   │   =   │   +   │NUMLOCK│
// └───────┴───────┴───────┼───────┼───────┼───────┼───────┼───────┤  ├───────┼───────┼───────┼───────┼───────┼───────┴───────┴───────┘
//                         │       │       │       │       │       │  │       │       │       │       │       │
//                         │       │       │       │       │       │  │       │       │       │       │       │
//                         └───────┴───────┴───────┴───────┴───────┘  └───────┴───────┴───────┴───────┴───────┘
    // TODO: Experiment with a number/nav hybrid layer
    [_NUMBER] = LAYOUT(
    _______,KC_TILD,KC_9   ,KC_8   ,KC_7   ,_______,                                   _______,KC_LPRN,KC_RPRN,KC_BSLS,KC_PIPE,KC_SLCK,
    _______,KC_0   ,KC_3   ,KC_2   ,KC_1   ,_______,                                   _______,KC_LCBR,KC_RCBR,KC_MINS,KC_UNDS,KC_CLCK,
    _______,KC_GRV ,KC_6   ,KC_5   ,KC_4   ,_______,_______,_______,   _______,_______,_______,KC_LBRC,KC_RBRC,KC_EQL ,KC_PLUS,KC_NLCK,
                            _______,_______,_______,_______,_______,   KC_LSFT,KC_LCTL,KC_LALT,_______,_______
    ),

// Raise Layer: Number keys, media, navigation
//  [_RAISE] = LAYOUT(
//    _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
//    _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
//    _______, _______, _______, _______, KC_MUTE, KC_VOLD, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
//                               _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//  ),

// TESmart 4x2 KVM Keyboard Shortcuts
// - SL = Scroll Lock.
// - SL+SL+F1: Switches Scroll Lock to Right Control. (Good for Mac users that don't have a Scroll Lock key.)
// - R-Ctrl + R-Ctrl + F1: Switches Right Control to Scroll Lock.
// - SL+SL+F2: Toggle keyboard/mouse "pass through" mode.
// - SL+SL+F3: Beeps once if keyboard/mouse is in emulation mode and twice for pass through mode.
// - SL+SL+F11: Toggle buzzer.
// - Display Mode 1.
//   - SL+SL+1: Select input source 1.
//   - SL+SL+2: Select input source 2.
// - Display Mode 2.
//   - R-Alt + R-Alt: Change active computer.
//   - SL+SL+3: Focus on input source 1.
//   - SL+SL+4: Focus on input source 2.


// ====================================================================================================================================
// RGB
// ====================================================================================================================================
// ┌───────┬───────┬───────┬───────┬───────┬───────┐                                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
// │       │       │       │       │       │       │                                  │       │       │       │       │       │       │
// │       │       │ RGB 9 │ RGB 8 │ RGB 7 │       │                                  │       │  BRI+ │  BRI- │       │       │       │
// ├───────┼───────┼───────┼───────┼───────┼───────┤                                  ├───────┼───────┼───────┼───────┼───────┼───────┤
// │       │       │       │       │       │       │                                  │       │       │       │       │       │       │
// │       │ ON/OFF│ RGB 3 │ RGB 2 │ RGB 1 │       │                                  │       │  HUE+ │  HUE- │ MODE+ │ MODE- │       │
// ├───────┼───────┼───────┼───────┼───────┼───────┼───────┬───────┐  ┌───────┬───────┼───────┼───────┼───────┼───────┼───────┼───────┤
// │       │       │       │       │       │       │       │       │  │       │       │       │       │       │       │       │       │
// │       │       │ RGB 6 │ RGB 5 │ RGB 4 │       │       │       │  │       │       │       │  SAT+ │  SAT- │  SPD+ │  SPD- │       │
// └───────┴───────┴───────┼───────┼───────┼───────┼───────┼───────┤  ├───────┼───────┼───────┼───────┼───────┼───────┴───────┴───────┘
//                         │       │       │       │       │       │  │       │       │       │       │       │
//                         │       │       │       │       │       │  │       │       │       │       │       │
//                         └───────┴───────┴───────┴───────┴───────┘  └───────┴───────┴───────┴───────┴───────┘
    [_RGB] = LAYOUT(
    _______,_______,RGB_M_T,RGB_M_G,RGB_M_X,_______,                                   _______,RGB_VAI,RGB_VAD,_______,_______,_______,
    _______,RGB_TOG,RGB_M_R,RGB_M_B,RGB_M_P,_______,                                   _______,RGB_HUI,RGB_HUD,RGB_MOD,RGB_RMOD,_______,
    _______,_______,RGB_M_K,RGB_M_SN,RGB_M_SW,_______,_______,_______, _______,_______,_______,RGB_SAI,RGB_SAD,RGB_SPI,RGB_SPD,_______,
                            _______,_______,_______,_______,_______,   _______,_______,_______,_______,_______
    ),
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // QMK Logo and version information
        // clang-format off
        static const char PROGMEM qmk_logo[] = {
            0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
            0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
            0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};
        // clang-format on

        oled_write_P(qmk_logo, false);
        oled_write_P(PSTR("Kyria rev1.0\n\n"), false);

        // Host Keyboard Layer Status
        oled_write_P(PSTR("Layer: "), false);
        switch (get_highest_layer(layer_state|default_layer_state)) {
            case _QWERTY:
                oled_write_P(PSTR("QWERTY\n"), false);
                break;
            case _NUMBER:
                oled_write_P(PSTR("NUMBER\n"), false);
                break;
            case _LEFT:
                oled_write_P(PSTR("LEFT\n"), false);
                break;
            case _RIGHT:
                oled_write_P(PSTR("RIGHT"), false);
                break;
            case _LOL:
                oled_write_P(PSTR("LOL"), false);
                break;
            case _RGB:
                oled_write_P(PSTR("RGB"), false);
                break;
            default:
                oled_write_P(PSTR("Undefined\n"), false);
        }

        // Write host Keyboard LED Status to OLEDs
        led_t led_usb_state = host_keyboard_led_state();
        oled_write_P(led_usb_state.num_lock    ? PSTR("NUMLCK ") : PSTR("       "), false);
        oled_write_P(led_usb_state.caps_lock   ? PSTR("CAPLCK ") : PSTR("       "), false);
        oled_write_P(led_usb_state.scroll_lock ? PSTR("SCRLCK ") : PSTR("       "), false);
    } else {
        // clang-format off
        static const char PROGMEM kyria_logo[] = {
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
            0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
            0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
        };
        // clang-format on
        oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
    }
    return false;
}
#endif

#ifdef ENCODER_ENABLE
//#define ENCODER_MOUSE
bool encoder_update_user(uint8_t index, bool clockwise) {
#ifdef ENCODER_MOUSE
    // Left knob
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_MS_L);
        } else {
            tap_code(KC_MS_R);
        }
    }

    // Right knob
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_MS_U);
        } else {
            tap_code(KC_MS_D);
        }
    }
#else
    // Left knob
    if (index == 0) {
        if (clockwise) {
            //tap_code(KC_PGUP);
            for(int i = 0; i < 12; i++) {
                tap_code(KC_UP);
            }
        } else {
            //tap_code(KC_PGDN);
            for(int i = 0; i < 12; i++) {
                tap_code(KC_DOWN);
            }
        }
    }

    // Right knob
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
#endif
    return false;
}
#endif // ENCODER_ENABLE



