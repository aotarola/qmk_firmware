#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_GUI_GUISPC
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [TD_GUI_GUISPC] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LGUI(KC_SPC))
};

// Layers declarations
enum {
    CLMK = 0,
};

// TBK Mini layer[0] helpers
#define SLSH_RCTL MT(MOD_RCTL, KC_SLSH)
#define DEL_ALT MT(MOD_RALT, KC_DEL)
#define BSC_SFT MT(MOD_RSFT, KC_BSPC)
#define Z_CTL MT(MOD_LCTL, KC_Z)
#define T_GUI TD(TD_GUI_GUISPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [CLMK] = LAYOUT(
        KC_F13, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, \
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                                        KC_J,   KC_L,   KC_U,    KC_Y,   KC_SCLN, KC_BSLS, \
        KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                                        KC_H,   KC_N,   KC_E,    KC_I,   KC_O,    KC_QUOT, \
        KC_LSFT, Z_CTL,   KC_X,    KC_C,    KC_V,    KC_B,                                        KC_K,   KC_M,   KC_COMM, KC_DOT, SLSH_RCTL, KC_EQL, \
                          KC_F14, KC_F15, T_GUI,   KC_SPC, KC_LSFT, BSC_SFT, KC_ENT, DEL_ALT, KC_F16, KC_F17, KC_F18, KC_F19, \
                                                             KC_F20, KC_F21,  KC_F22, KC_F23 \
    ),
};
