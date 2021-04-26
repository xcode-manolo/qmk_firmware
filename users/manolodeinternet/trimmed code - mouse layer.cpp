/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_MOUS]
/* [_MOUS] = LAYER 07 : MOUSE LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |  Mouse |        |        |        |        |        |        |
 * |  Mouse |  Mouse |  Mouse |  Mouse | Button |        |        |  Wheel |  Wheel |  Wheel |  Wheel |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT |    3   |        |        |  Left  |   Up   |  Down  |  Right |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |  Mouse |        |        |        |        |        |        |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT | Button |        |        |  Mouse |  Mouse |  Mouse |  Mouse |
 * |        |        |        |        |    2   |        |        |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |Accelera|Accelera|@@@@@@@@|Accelera|  Mouse |        |  Mouse |  Mouse |  Mouse |  Mouse |  Mouse |
 * |  -tion |  -tion |        |  -tion | Button |        | Button | Button | Button | Button | Button |
 * |    1   |    2   |        |    0   |    1   |        |    1   |    2   |    3   |    4   |    5   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
// #define ____MOUSE_L1____         KC_MS_L,       KC_MS_U,         KC_MS_D,         KC_MS_R, KC_BTN3
// #define ____MOUSE_L2____ LCTL_T(KC_LEFT), LALT_T(KC_UP), LSFT_T(KC_DOWN), LGUI_T(KC_RGHT), KC_BTN2
// #define ____MOUSE_L3____         KC_ACL2,       KC_ACL1,         XXXXXXX,         KC_ACL0, KC_BTN1

// #define      ____MOUSE_R1____                        XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R
// #define      ____MOUSE_R2____                        XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R
// #define      ____MOUSE_R3____                        KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5

// #if defined(MINI_DACTYL_THUMBS)
/* [_MOUS] = LAYER 07 : MOUSE LAYER
 *                            .-----------------.        .-----------------.
 *                            |@@@@@@@@|        |        |        |        |
 *                            |        |        |        |        |   UP   |
 *                            |        |        |        |        |        |
 *                            |@[_ACCN]|@[_POWR]|        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |  LEFT  |  DOWN  |  RIGHT |
 *                   |        |        |        |        |        |        |        |
 *                   |@[_DALY]|@[_FVIM]|@[_APPS]|        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
// #define _MOUS_LTHMB_RW1_               _______, _______
// #define _MOUS_LTHMB_RW2_      _______, _______, _______

// #define      _MOUS_RTHMB_RW1_                                               MO(_POWR), _______
// #define      _MOUS_RTHMB_RW2_                                               _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
// #endif
// END OF [_MOUS] 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
 * [_DFLT] = LAYER 00 : UAIH DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |BCKSPACE|        |        |        |        |        |        |
 * |    B   |    L   |    S   |    C   |S-DELETE|        |    Z   |    Y   |    O   |    P   |    X   |
 * |        |G[_1APP]|        |        |CM-ESCPE|        |        |        |        |G[_1APP]|        |
 * |        | [_APPS]| [_POWR]| [_LEDS]| [_DVIM]|        |        | [_LEDS]| [_POWR]| [_APPS]|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    G   |    N   |    R   |    T   |  ENTER |        |    M   |    U   |    A   |    I   |    H   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  RCtl  |  RSft  |  RAlt  |  RGui  | [_ACCN]|        | [_ACCN]|  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    F   |    J   |    V   |    D   |  SPACE |        |    E   |    W   |    K   |    Q   |        |
 * |        |        |        |        |        |        |[_PINKY]|        |        |        |        |
 * |        | [_DALY]| [_MOUS]| [_NUMB]| [_SYMB]|        |[ _FVIM]| [_XVIM]| [_FUNC]| [_DALY]|        |
 * '--------------------------------------------'        '--------------------------------------------'
 * [_DFLT] = LAYER 00 : UAIH DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    B   |    L   |    S   |    C   |BCKSPACE|        |    Z   |    Y   |    O   |    P   |    X   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    G   |    N   |    R   |    T   |  ENTER |        |    M   |    U   |    A   |    I   |    H   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |        |  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    F   |    J   |    V   |    D   |  SPACE |        |    E   |    W   |    K   |    Q   |    Y   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'