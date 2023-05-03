#include QMK_KEYBOARD_H

enum layer_number {
  _COLDH,
  _GAME,
  _WASD,
  _NUM,
  _LOWER,
};
#define BackNUM LT(3,KC_BSPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLDH
 * ,------------------------------------------------.                                                     ,------------------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |  `~  |                                                     | HOME |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |  \|  |                                                     | END  |   J  |   L  |   U  |   Y  |   ;  |  =   |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * |LShift|   A  |   R  |   S  |   T  |   G  |  [{  |                                                     | PUP  |   M  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------+------+------ |                                      |------+------+------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   D  |   V  |  ]}  | ENTER |                                      |  F5  | PDWN |   K  |   H  |   ,  |   .  |   /? |RShift|
 * `-----------------------------------------------------------/       /               \       \-----------------------------------------------------------'
 *                | MENU  | LGUI  |  LALT  |  Space | Lower | /BackNUM/                 \   Num \  | Lower| BackSP|Ent/shft|   DEL  | RGUI  |
 *                |       |       |        |        |       |/       /                   \       \ |      |       |        |        |       |
 *                `-------------------------------------------------'                     '-------------------------------------------------'
 */

 [_COLDH] = LAYOUT(                                                                                                                                                       
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,                                            KC_HOME, KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,    KC_NUHS,                                           KC_END,  KC_J,     KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_EQL, 
  KC_LSFT,  KC_A,   KC_R,    KC_S,    KC_T,    KC_G,    KC_LBRC,                                           KC_PGUP, KC_M,     KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_LCTRL, KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,    KC_RBRC, KC_ENT,                        KC_F5,     KC_PGDN, KC_K,     KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                             KC_APP,  KC_LGUI, KC_LALT, KC_SPC,  MO(4),   BackNUM,    TT(3),    MO(4),     KC_BSPC, KC_SFTENT,KC_DEL,  KC_RGUI
),

/* GAME
 * ,------------------------------------------------.                                                     ,------------------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |   6  |                                                     | HOME |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * | Tab  |   J  |   Q  |   W  |   E  |   R  |   T  |                                                     | END  |   Y  |   U  |   I  |   O  |   P  |  =   |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * |LShift|   M  |   A  |   S  |   D  |   F  |   G  |                                                     | PUP  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------ |                                      |------+------+------+------+------+------+------+------|
 * |LCTRL |   K  |   Z  |   X  |   C  |   V  |   B  | ENTER |                                      |  F5  | PDWN |   N  |   M  |   ,  |   .  |   /? |RShift|
 * `-----------------------------------------------------------/       /               \       \-----------------------------------------------------------'
 *                | MENU  | LGUI  |  LALT  |  Space | Lower | /BackNUM/                 \   Num \  | Lower| BackSP|Ent/shft|   DEL  | RGUI  |
 *                |       |       |        |        |       |/       /                   \       \ |      |       |        |        |       |
 *                `-------------------------------------------------'                     '-------------------------------------------------'
 */
 
 [_GAME] = LAYOUT(                                                                                                                                                        
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                                              KC_HOME, KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,   KC_J,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                              KC_END,  KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL, 
  KC_LSFT,  KC_M,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                              KC_PGUP, KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LCTRL, KC_K,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ENT,                        KC_F5,     KC_PGDN, KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                             KC_APP,  KC_LGUI, KC_LALT, KC_SPC,  MO(4),   BackNUM,    TT(3),    MO(4),     KC_BSPC, KC_SFTENT,KC_DEL,  KC_RGUI
),
/* WASD
 * ,------------------------------------------------.                                                     ,------------------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |  `~  |                                                     | HOME |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |  \|  |                                                     | END  |   Y  |   U  |   I  |   O  |   P  |  =   |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |  [{  |                                                     | PUP  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------ |                                      |------+------+------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |  ]}  | ENTER |                                      |  F5  | PDWN |   N  |   M  |   ,  |   .  |   /? |RShift|
 * `-----------------------------------------------------------/       /               \       \-----------------------------------------------------------'
 *                | MENU  | LGUI  |  LALT  |  Space | Lower | /BackNUM/                 \   Num \  | Lower| BackSP|Ent/shft|   DEL  | RGUI  |
 *                |       |       |        |        |       |/       /                   \       \ |      |       |        |        |       |
 *                `-------------------------------------------------'                     '-------------------------------------------------'
 */
 
 [_WASD] = LAYOUT(                                                                                                                                                        
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,                                            KC_HOME, KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_NUHS,                                           KC_END,  KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL, 
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,                                           KC_PGUP, KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LCTRL, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_RBRC, KC_F13,                        KC_F5,     KC_PGDN, KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                             KC_APP,  KC_LGUI, KC_LALT, KC_SPC,  MO(4),   BackNUM,   TT(3),    MO(4),     KC_BSPC, KC_SFTENT,KC_DEL,  KC_RGUI
),

/* NUM
 * ,------------------------------------------------.                                                     ,------------------------------------------------.
 * | Game |     |      |      |      |      | WASD  |                                                     | HOME | NUML |  N7  |  N8  |  N9  |  N-  |  -   |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                                                     | END  |  N/  |  N4  |  N5  |  N6  |  N+  |  =   |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |                                                     | PUP  |  N*  |  N1  |  N2  |  N3  |  N=  |  '   |
 * |------+------+------+------+------+------+------+-------|                                      |------+------+------+------+------+------+------+------|
 * | COLDH|      |      |      |      |      |      |  F13  |                                      |  F15 | PDWN |      |  N0  |  N,  |  N.  | NENT |RShift|
 * `-----------------------------------------------------------/       /               \       \-----------------------------------------------------------'
 *                | MENU  | LGUI  |  LALT  |  Space | Lower | /BackSP /                 \   Num \  | Lower| BackSP|Ent/shft|   DEL  | RGUI  |
 *                |       |       |        |        |       |/       /                   \       \ |      |       |        |        |       |
 *                `-------------------------------------------------'                     '-------------------------------------------------'
 */
 
 [_NUM] = LAYOUT(                                                                                                                                                         
  TO(1),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(2),                                             KC_HOME, KC_NUM,   KC_P7,   KC_P8,  	KC_P9,   KC_PMNS, KC_MINS,
  KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                                             KC_END,  KC_PSLS,  KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_EQL, 
  KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                                            KC_PGUP, KC_PAST,  KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_QUOT,
  TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F14,                        KC_TRNS,   KC_PGDN, KC_NO,    KC_P0,   KC_PCMM, KC_PDOT, KC_PENT, KC_RSFT,
                             KC_APP,  KC_LGUI, KC_LALT, KC_SPC,  MO(4),   KC_BSPC,    TT(3),    MO(4),     KC_BSPC, KC_SFTENT,KC_DEL,  KC_RGUI
),

/* LOWER
 * ,------------------------------------------------.                                                     ,------------------------------------------------.
 * |      |      | Print|Scroll| Pause|      |      |                                                     |      |      | Print|Scroll| Pause|      |      |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * |      |      |      |   ↑  |      |      |      |                                                     |      |      |      |   ↑  |      |      |      |
 * |------+------+------+------+------+------+------|                                                     |------+------+------+------+------+------+------|
 * |      |      |   ←  |   ↓  |   →  |      |      |                                                     |      |      |   ←  |   ↓  |   →  |      |      |
 * |------+------+------+------+------+------+------+------ |                                      |------+------+------+------+------+------+------+------|
 * |      |MLAUNC| MSTOP| MPREV| MPLAY| MNEXT|      |  F14  |                                      |  F15 |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------/       /               \       \-----------------------------------------------------------'
 *                | MENU  | LGUI  |  LALT  |  Space | Lower | /  DEL  /                 \   Num \  | Lower| BackSP|Ent/shft|   DEL  | RGUI  |
 *                |       |       |        |        |       |/       /                   \       \ |      |       |        |        |       |
 *                `-------------------------------------------------'                     '-------------------------------------------------'
 */
 
 
 [_LOWER] = LAYOUT(                                                                                                                                                       
  KC_NO,   KC_NO,   KC_PSCR, KC_SCRL, KC_PAUS, KC_NO,   KC_NO,                                              KC_NO,   KC_NO,   KC_PSCR, KC_SCRL, KC_PAUS, KC_NO,   KC_NO,  
  KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,                                              KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,  
  KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,                                              KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,  
  KC_NO,   KC_MSEL, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,   KC_F14,                         KC_F15,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  
                             KC_APP,  KC_LGUI, KC_LALT, KC_SPC,  MO(4),   KC_DEL,      TO(3),    MO(4),     KC_BSPC, KC_SFTENT,KC_DEL, KC_RGUI
),
};









#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    } else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return false;
}
#endif


/*
// Rotary encoder related code
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { // Encoder on master side
    if(IS_LAYER_ON(_LOWER)) { // on LOW layer
      // Cursor control
      if (clockwise) {
          tap_code(KC_MNXT);
      } else {
          tap_code(KC_MPRV);
      }
    }
    else {
      if (clockwise) {
          tap_code(KC_VOLU);
      } else {
          tap_code(KC_VOLD);
      }
    }
  }
  else if (index == 1) { // Encoder on slave side
    if(IS_LAYER_ON(_LOWER)) { // on Lower layer
      //
      if (clockwise) {
          tap_code(KC_RIGHT);
      } else {
          tap_code(KC_LEFT);
      }
    }
    else {
      if (clockwise) {
          tap_code(KC_DOWN);
      } else {
          tap_code(KC_UP);
      }
    }
  }
    return true;
}
#endif
*/
