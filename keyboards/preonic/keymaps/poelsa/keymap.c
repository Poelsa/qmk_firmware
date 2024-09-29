#include QMK_KEYBOARD_H


/* Template
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

enum preonic_layers {
  _QWERTY,
  _NUMPAD,
  _SYMBOLS,
  _SPECIAL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   ?  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |   Å  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Ö  |   Ä  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LS   |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |RS/Ent|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LCtrl|TT num|BL tgl| Gui  | Alt  |Space |  BS  | Left | Down |  Up  |Right |MO sym|
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_5x12(
  KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, 
  KC_DEL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SFTENT, 
  KC_LCTL, TT(_NUMPAD), BL_TOGG, KC_LGUI, KC_LALT, KC_SPC, KC_BSPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, MO(_SYMBOLS)),

/* Numpad
 * ,-----------------------------------------------------------------------------------.
 * |   §  |  F1  |  F2  |  F3  |  F4  |      |      |      |      |      |      |Insert|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |      |      |   7  |   8  |   9  |   -  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F9  |  F10 |  F11 |  F12 |      |      |   4  |   5  |   6  |   +  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Trns |      |MO spc|      |      |      |      |   1  |   2  |   3  |   /  | Enter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Trns | Prev | Play | Next | Trns | Trns |   0  |   ,  |   .  |   *  |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NUMPAD] = LAYOUT_ortho_5x12(
  KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, 
  KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_NO, 
  KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO, 
  KC_TRNS, KC_NO, MO(_SPECIAL), KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PSLS, KC_PENT, 
  KC_NO, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_P0, KC_COMM, KC_DOT, KC_PAST, KC_NO),

/* Symbols
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   =  |   "  |   #  |   ^  |      |      |   <  |   {  |   }  |   >  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   @  |   $  |   ~  |   |  |   \  |   /  |   (  |   [  |   ]  |   )  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   ´  |   '  |   `  |   &  |      |      |   *  |   +  |   %  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Trns |      |      |      |      |   !  |   ?  | Home | Pgdn | Pgup |  End | Trns |
 * `-----------------------------------------------------------------------------------'
 */
[_SYMBOLS] = LAYOUT_ortho_5x12(
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
  KC_NO, KC_RPRN, KC_AT, KC_HASH, KC_RCBR, KC_NO, KC_NO, KC_NUBS, RALT(KC_7), RALT(KC_0), RSFT(KC_NUBS), KC_NO, 
  KC_NO, RALT(KC_2), RALT(KC_4), RALT(KC_RBRC), RALT(KC_NUBS), RALT(KC_MINS), KC_AMPR, KC_ASTR, RALT(KC_8), RALT(KC_9), KC_LPRN, KC_NO, 
  KC_NO, KC_EQL, KC_NUHS, RSFT(KC_EQL), KC_CIRC, KC_NO, KC_NO, KC_PIPE, KC_MINS, KC_PERC, KC_NO, KC_NO, 
  KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_EXLM, KC_UNDS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS),

/* Special
 * ,-----------------------------------------------------------------------------------.
 * | Reset|      |      |      |      |      |      |      |      |      |      | NumLk|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |BL tgl|      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      | Trns |Alt+F4|      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_SPECIAL] = LAYOUT_ortho_5x12(
  QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NUM, 
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, 
  KC_NO, KC_NO, KC_TRNS, LALT(KC_F4), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

