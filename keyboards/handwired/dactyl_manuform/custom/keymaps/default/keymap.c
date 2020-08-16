#include QMK_KEYBOARD_H

#define CLMK 0
#define QWER 1
#define GAME 2
#define ARKY 3
#define NUMK 4
#define SYMB 5
#define MOUS 6
#define SYST 7

// Defines the keycodes used by our macros in process_record_user
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [CLMK] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, \
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                                        KC_J,   KC_L,   KC_U,    KC_Y,   KC_SCLN, KC_EQL,  \
        KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                                        KC_H,   KC_N,   KC_E,    KC_I,   KC_O,    KC_QUOT, \
        KC_DEL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                        KC_K,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, TO(SYST),\
                          XXXXXXX, XXXXXXX, KC_ENT,  SFT_T(KC_SPC), KC_LCMD, KC_LCTL,  KC_RCTL, KC_RCMD, SFT_T(KC_SPC), KC_ENT, TG(MOUS),TG(NUMK), \
                                                             TT(ARKY), KC_LOPT, KC_ROPT, TT(SYMB) \
    ),

    [QWER] = LAYOUT(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                         KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    _______, \
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                         KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    _______, \
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                         KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, _______, \
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                         KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, _______, \
                          _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, \
                                                              _______, _______,  _______, _______ \
    ),

    [GAME] = LAYOUT(
        KC_ESC,  KC_GRV, KC_1,    KC_2,   KC_3,    KC_4,                                        _______, _______, _______, _______, _______, _______, \
        KC_TAB,  KC_T,   KC_Q,    KC_W,   KC_E,    KC_R,                                        _______, _______, _______, _______, _______, _______, \
        KC_BSPC, KC_G,   KC_A,    KC_S,   KC_D,    KC_F,                                        _______, _______, _______, _______, _______, _______, \
        KC_DEL,  KC_B,   KC_Z,    KC_X,   KC_C,    KC_V,                                        _______, _______, _______, _______, _______, _______, \
                         KC_COMM, KC_DOT, KC_SLSH, KC_SPC, KC_LCTL, KC_LSFT,  _______, _______, _______, _______, _______, _______, \
                                                           KC_QUOT, KC_LALT,  _______, _______ \
    ),

    [ARKY] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                                        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,     KC_F12,  \
        _______, _______, KC_WH_U, KC_UP,   KC_PGUP, KC_HOME,                                      KC_HOME, KC_PGUP, KC_UP,   _______, _______,    _______, \
        _______,C(KC_LEFT),KC_LEFT,KC_DOWN, KC_RGHT, C(KC_RGHT),                                C(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, \
        _______, _______, KC_WH_D, _______, KC_PGDN, _______,                                      _______, KC_PGDN, _______, _______, _______,    _______, \
                          XXXXXXX, XXXXXXX, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, \
                                                              _______, _______,  _______, _______ \
    ),

    [NUMK] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                      KC_NO,KC_NUMLOCK, KC_PSLS, KC_PAST, KC_PMNS, XXXXXXX, \
        _______, _______, _______, _______, _______, _______,                                      KC_COMM, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, XXXXXXX, \
        _______, _______, _______, _______, _______, _______,                                      KC_PDOT, KC_P4,   KC_P5,   KC_P6,   KC_PCMM, XXXXXXX, \
        _______, _______, _______, _______, _______, _______,                                      KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, _______, \
                          _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, \
                                                              _______, _______,  _______, _______ \
    ),

    [SYMB] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                                        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
        KC_GRV,  KC_HASH, KC_DLR,  KC_LCBR, KC_RCBR, KC_PLUS,                                      KC_PLUS, KC_RCBR, KC_LCBR, KC_DLR,  KC_HASH, KC_GRV,  \
        KC_ASTR, KC_LABK, KC_RABK, KC_LPRN, KC_RPRN, KC_PIPE,                                      KC_PIPE, KC_RPRN, KC_LPRN, KC_RABK, KC_LABK, KC_ASTR, \
        KC_BSLS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                                      KC_TILD, KC_RBRC, KC_LBRC, KC_CIRC, KC_PERC, KC_BSLS, \
                          _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, \
                                                              _______, _______,  _______, _______ \
    ),

    [MOUS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                      _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,                                      _______, KC_WH_U, KC_MS_U, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,                                      _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, \
        _______, _______, _______, _______, _______, _______,                                      _______, KC_WH_D, _______, _______, _______, _______, \
                          _______, _______, _______, _______, _______, _______,  _______, KC_ACL0, KC_BTN1, KC_BTN2, _______, _______, \
                                                              _______, _______,  _______, _______ \
    ),

    [SYST] = LAYOUT(
        RESET,   RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                      RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  \
        EEP_RST, RGB_VAI, RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX,                                      EEP_RST, RGB_VAI, RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX,  \
        XXXXXXX, RGB_VAD, RGB_RMOD,XXXXXXX, XXXXXXX, XXXXXXX,                                      XXXXXXX, RGB_VAD, RGB_RMOD,XXXXXXX, XXXXXXX, TO(GAME), \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(GAME),                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(QWER),TO(CLMK), \
                          XXXXXXX, XXXXXXX, TO(QWER),TO(CLMK),XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                                                              XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX \
    ),
};
