#include QMK_KEYBOARD_H

/****************************************************************************************************
 *
 * Keymap: Default Layer in Qwerty
 *
 * ,-------------------------------------------------------------------------------------------------------------------.
 * | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
 * |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
 * | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
 * |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
 * |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
 * | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
 * |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
 * | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
 * `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
 *          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
 *          `---------------------------'                                         `---------------------------'
 *                                        ,-------------.         ,-------------.
 *                                        | Ctrl | Alt  |         | Gui  | Ctrl |
 *                                 ,------|------|------|         |------+------+------.
 *                                 |      |      | Home |         | PgUp |      |      |
 *                                 | BkSp | Del  |------|         |------|Return| Space|
 *                                 |      |      | End  |         | PgDn |      |      |
 *                                 `--------------------'         `--------------------'
 */

#define IVENDOR 0 // Custom qwerty
#define KEYPAD 1
#define QWERTY 2 // Base qwerty

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[IVENDOR] = LAYOUT(
           KC_ESC, KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8,    KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_MUTE, KC_VOLD, KC_VOLU, TO(KEYPAD), QK_BOOT,
           KC_GRV, KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,     KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,
           KC_TAB, KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,     KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSLS,
           KC_CAPS,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,     KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,
           KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,     KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_EQL,
                   KC_GRV ,KC_BSLS ,KC_LEFT,KC_RGHT,             KC_UP  ,KC_DOWN,KC_LBRC,KC_RBRC,
			   KC_HOME,KC_END,           KC_RGUI,KC_DEL,
                                    KC_LALT,           KC_PGUP,
                           KC_SPC,KC_LGUI ,KC_LCTL ,           KC_PGDN,KC_ENTER ,KC_BSPC
    ),

[KEYPAD] = LAYOUT(
           KC_WAKE,  KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO, KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_PRINT_SCREEN ,KC_SCROLL_LOCK  ,KC_PAUSE, TO(QWERTY), QK_BOOT  ,
           KC_NO  ,  KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,   KC_NO  ,KC_NUM, KC_PEQL,KC_PSLS,KC_PAST  ,KC_NO  ,
           KC_NO  ,  KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,   KC_NO  ,KC_P7,  KC_P8,  KC_P9,  KC_PMNS  ,KC_NO  ,
           KC_NO  ,  KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,   KC_NO  ,KC_P4,  KC_P5,  KC_P6,  KC_PPLS  ,KC_NO  ,
           KC_NO  ,  KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,   KC_NO  ,KC_P1,  KC_P2,  KC_P3,  KC_PENT  ,KC_NO  ,
                   KC_NO  ,KC_NO  ,KC_LEFT,KC_RGHT  ,             KC_UP  ,KC_DOWN,KC_PDOT,KC_PENT  ,
			   KC_NO  ,KC_NO  ,           KC_NO  ,KC_NO  ,
                                    KC_NO  ,           KC_NO  ,
                           KC_NO  ,KC_NO  ,KC_NO  ,           KC_NO  ,KC_PENT    ,KC_P0
    ),

[QWERTY] = LAYOUT(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  TO(IVENDOR),    QK_BOOT,
    KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                                                      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
    KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                                                      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
              KC_GRV,   KC_INS,   KC_LEFT,  KC_RGHT,                                                                                       KC_UP,    KC_DOWN,  KC_LBRC,  KC_RBRC,
                                                      KC_LCTL,  KC_LALT,                                               KC_RGUI,  KC_RCTL,
                                                                KC_HOME,                                               KC_PGUP,
                                            KC_BSPC,  KC_DEL,   KC_END,                                                KC_PGDN,  KC_ENTER, KC_SPC
  )

};


#define INTERNAL_SEND_COMBO(code)                \
    unregister_code(KC_RGUI);                    \
    if (mod_state & MOD_BIT_LSHIFT) {            \
        unregister_code(KC_LEFT_SHIFT);          \
        SEND_STRING(SS_LALT("`") SS_LSFT(code)); \
        register_code(KC_LEFT_SHIFT);            \
    } else {                                     \
        SEND_STRING(SS_LALT("`") code);          \
    }                                            \
    register_code(KC_RGUI);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    const uint8_t mod_state = get_mods();

    if (record->event.pressed) {
        if (mod_state & MOD_BIT_RGUI) {
            switch (keycode) {
                case KC_A:
                    INTERNAL_SEND_COMBO("a");
                    return false;
                case KC_E:
                    INTERNAL_SEND_COMBO("e");
                    return false;
                case KC_I:
                    INTERNAL_SEND_COMBO("i");
                    return false;
                case KC_O:
                    INTERNAL_SEND_COMBO("o");
                    return false;
                case KC_U:
                    INTERNAL_SEND_COMBO("u");
                    return false;
            }
        } else if (mod_state & MOD_BIT_LSHIFT) {
            switch (keycode) {
                case KC_MUTE:
                    unregister_code(KC_LEFT_SHIFT);
                    tap_code(KC_PRINT_SCREEN);
                    register_code(KC_LEFT_SHIFT);
                    return false;
                case KC_VOLD:
                    unregister_code(KC_LEFT_SHIFT);
                    tap_code(KC_SCROLL_LOCK);
                    register_code(KC_LEFT_SHIFT);
                    return false;
                case KC_VOLU:
                    unregister_code(KC_LEFT_SHIFT);
                    tap_code(KC_PAUSE);
                    register_code(KC_LEFT_SHIFT);
                    return false;
            }
        }
    }

    return true;
};

bool led_update_user(led_t led_state) {
    writePin(LED_NUM_LOCK_PIN, !led_state.num_lock);
    writePin(LED_CAPS_LOCK_PIN, !led_state.caps_lock);
    writePin(LED_SCROLL_LOCK_PIN, IS_LAYER_OFF(QWERTY));
    writePin(LED_COMPOSE_PIN, IS_LAYER_OFF(KEYPAD));
    return false;
}
