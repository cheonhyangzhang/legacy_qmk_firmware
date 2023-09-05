#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

// tap dance section start
enum tap_dance_codes {
    FINDER_KEYS,
    MINUS_UNDERSCORE,
    EQUAL_PLUS,
  };
  // tap dance section end

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_4x12(
    KC_LGUI,  KC_LALT, KC_W,  KC_E,  KC_R,    KC_T,    KC_Y,   KC_U,  KC_I,       KC_O,           KC_NO,    KC_BSPC,
    KC_Q,     KC_A,    KC_S,  KC_D,  KC_F,    KC_G,    KC_H,   KC_J,  KC_K,       KC_L,           KC_ENT,   KC_P,
    KC_LCTRL, KC_Z,    KC_X,  KC_C,  KC_V,    KC_B,    KC_N,   KC_M,  KC_COMM,    KC_DOT,         KC_SLASH, KC_QUOT,
    KC_NO,    KC_NO,   KC_NO, MO(4), KC_LSFT, MO(2),   KC_SPC, MO(3), KC_NO,      KC_NO,          KC_NO,    KC_NO
  ),
  [1] = LAYOUT_ortho_4x12(
      KC_TRNS,    KC_TRNS,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,          KC_NO,            KC_MS_UP,     KC_NO,          KC_NO,      KC_TRNS,
      KC_NO,      KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_MS_WH_DOWN,  KC_MS_LEFT,       KC_MS_DOWN,   KC_MS_RIGHT,    KC_TRNS,    KC_NO,
      KC_TRNS,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_MS_WH_UP,    KC_MS_WH_RIGHT,   KC_SPC,       KC_MS_WH_LEFT,  KC_MS_BTN2, KC_NO,
      KC_NO,      KC_NO,    KC_NO,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MS_BTN1,     KC_TRNS,          KC_NO,        KC_NO,          KC_NO,      KC_NO
  ),
  [2] = LAYOUT_ortho_4x12(
    LGUI(KC_W),       LALT(LSFT(LGUI(KC_V))),   LGUI(KC_S),   LGUI(LSFT(KC_P)), LGUI(KC_R), LGUI(KC_T),   KC_CIRC,      KC_AMPR,      KC_LPRN,              KC_RPRN,        KC_NO,    LGUI(KC_BSPC),
    LGUI(KC_TAB),     LGUI(KC_A),               KC_TAB,       LGUI(KC_F),       KC_ESC,     LGUI(KC_K),   KC_ASTR,      LCTL(KC_H),   TD(MINUS_UNDERSCORE), TD(EQUAL_PLUS), KC_COLN,  KC_SCOLON,
    LSFT(KC_TAB),     LGUI(KC_Z),               LGUI(KC_X),   LCTL(KC_C),       LGUI(KC_C), LGUI(KC_V),   KC_BSPC,      KC_LBRC,      KC_RBRC,              KC_LCBR,        KC_RCBR,  KC_PIPE,
    KC_NO,            KC_NO,                    KC_NO,        KC_NO,            KC_NO,      KC_NO,        LGUI(KC_SPC), MO(6),        KC_NO,                KC_NO,          KC_NO,    KC_NO
  ),
  [3] = LAYOUT_ortho_4x12(
     LCTL(LGUI(KC_Q)),  KC_NO,              KC_2,               KC_3,           KC_4,     KC_5,     LSFT(LGUI(KC_N)), TO(0),          KC_UP,              TO(1),          KC_NO,              LGUI(KC_W),
     KC_1,              KC_EXLM,            KC_AT,              KC_HASH,        KC_DLR,   KC_PERC,  KC_HOME,          KC_LEFT,        KC_DOWN,            KC_RGHT,        LGUI(KC_Y),         KC_END,
     TO(5),             LGUI(KC_1),         LSFT(LCTL(KC_TAB)), LCTL(KC_TAB),   KC_TILD,  KC_GRV,   LALT(KC_BSPACE),  LALT(KC_LEFT),  TD(FINDER_KEYS),    LALT(KC_RGHT),  LALT(LGUI(KC_V)),   LGUI(KC_DOWN),
     KC_NO,             KC_NO,              KC_NO,              KC_NO,          KC_NO,    MO(6),    KC_NO,            KC_NO,          KC_NO,              KC_NO,          KC_NO,              KC_NO
  ),
  [4] = LAYOUT_ortho_4x12(
      LGUI(LSFT(KC_W)), KC_NO,          KC_NO,          LGUI(LSFT(KC_5)),       KC_NO,              KC_NO,  KC_PGUP,   KC_7, KC_8,    KC_9,   KC_NO,            KC_NO,
      KC_NO,            KC_NO,          LGUI(KC_LBRC),  LCTL(LGUI(LSFT(KC_4))), LGUI(KC_RBRC),      KC_NO,  KC_PGDN,   KC_4, KC_5,    KC_6,   KC_NO,            KC_BSLS,
      LGUI(KC_Q),       KC_NO,          KC_NO,          LGUI(LSFT(KC_4)),       KC_NO,              KC_NO,  KC_NO,     KC_1, KC_2,    KC_3,   LGUI(KC_MINUS),   LGUI(KC_PLUS),
      KC_NO,            KC_NO,          KC_NO,          KC_NO,                  KC_NO,              KC_NO,  KC_DOT,    KC_0, KC_NO,   KC_NO,  KC_NO,            KC_NO
  ),
  [5] = LAYOUT_ortho_4x12(
      TO(0),      LGUI(KC_A), LGUI(KC_W), LSFT(LCTL(KC_TAB)), LCTL(KC_TAB),     KC_NO,          LGUI(KC_UP),    LGUI(KC_U),     KC_UP,      LGUI(KC_O), KC_NO,      KC_BSPC,
      LGUI(KC_A), KC_LSFT,    KC_LGUI,    LGUI(KC_C),         LALT(LGUI(KC_V)), LGUI(KC_V),     KC_X,           KC_LEFT,        KC_DOWN,    KC_RGHT,    LGUI(KC_Z), KC_NO,
      KC_NO,      LGUI(KC_Z), KC_X,       KC_HASH,            KC_ENT,           LGUI(KC_BSPC),  LGUI(KC_Z),     LGUI(KC_BSPC),  KC_DOWN,    KC_UP,      KC_NO,      LGUI(KC_DOWN),
      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_NO,            KC_SPC,         KC_SPC,         KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO
  ),
  [6] = LAYOUT_ortho_4x12(
      KC_NO,              KC_NO,                  KC_NO,                  LALT(LSFT(KC_H)),       LALT(LSFT(KC_L)),       LALT(LSFT(KC_Z)),     LGUI(KC_GRV), LGUI(KC_U),       LGUI(KC_I),   LGUI(KC_O),       KC_NO,      KC_NO,
      LALT(LSFT(KC_ENT)), LCTL(KC_1),             LCTL(KC_2),             LCTL(KC_3),             LCTL(KC_4),             LALT(LSFT(KC_SPC)),   KC_NO,        LALT(LSFT(KC_J)), KC_NO,        LALT(LSFT(KC_K)), KC_NO,      KC_NO,
      LSFT(LALT(KC_M)),   LCTL(LSFT(LALT(KC_1))), LCTL(LSFT(LALT(KC_2))), LCTL(LSFT(LALT(KC_3))), LCTL(LSFT(LALT(KC_4))), LALT(LSFT(KC_T)),     LGUI(KC_Q),   KC_NO,            KC_NO,        KC_NO,            LGUI(KC_H), LGUI(KC_N),
      KC_NO,              KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                KC_NO,        KC_NO,            KC_NO,        KC_NO,            KC_NO,      KC_NO
  )
};

// tap dance operations start
typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[9];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(LGUI(KC_G)));
        tap_code16(LSFT(LGUI(KC_G)));
        tap_code16(LSFT(LGUI(KC_G)));
    }
    if(state->count > 3) {
        tap_code16(LSFT(LGUI(KC_G)));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LSFT(LGUI(KC_SLASH))); break;
        case SINGLE_HOLD: register_code16(LSFT(LGUI(KC_G))); break;
        case DOUBLE_TAP: register_code16(LSFT(LGUI(KC_SLASH))); register_code16(LSFT(LGUI(KC_SLASH))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(LGUI(KC_SLASH))); register_code16(LSFT(LGUI(KC_SLASH)));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LSFT(LGUI(KC_SLASH))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_G)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(LGUI(KC_SLASH))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(LGUI(KC_SLASH))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_O);
        tap_code16(KC_O);
        tap_code16(KC_O);
    }
    if(state->count > 3) {
        tap_code16(KC_O);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_O); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_QUOTE)); break;
        case DOUBLE_TAP: register_code16(KC_O); register_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_O); register_code16(KC_O);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_O); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_QUOTE)); break;
        case DOUBLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_O); break;
    }
    dance_state[2].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_T));
        tap_code16(LGUI(KC_T));
        tap_code16(LGUI(KC_T));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_T));
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_T)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_T)); register_code16(LGUI(KC_T));
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_T)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_T)); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_V));
        tap_code16(LGUI(KC_V));
        tap_code16(LGUI(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_V));
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_V)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_V)); register_code16(LGUI(KC_V));
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_V)); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_MINUS);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_MINUS); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MINUS)); break;
        case DOUBLE_TAP: register_code16(KC_MINUS); register_code16(KC_MINUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MINUS); register_code16(KC_MINUS);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_MINUS); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MINUS)); break;
        case DOUBLE_TAP: unregister_code16(KC_MINUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MINUS); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
    }
    if(state->count > 3) {
        tap_code16(KC_EQUAL);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_EQUAL); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_EQUAL)); break;
        case DOUBLE_TAP: register_code16(KC_EQUAL); register_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_EQUAL); register_code16(KC_EQUAL);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_EQUAL); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_EQUAL)); break;
        case DOUBLE_TAP: unregister_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_EQUAL); break;
    }
    dance_state[7].step = 0;
}

void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case SINGLE_HOLD: register_code16(KC_LCTRL); break;
        case DOUBLE_TAP: register_code16(KC_A); register_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case SINGLE_HOLD: unregister_code16(KC_LCTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[1].step = 0;
}

void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case SINGLE_HOLD: register_code16(KC_LSFT); break;
        case DOUBLE_TAP: register_code16(KC_Z); register_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case SINGLE_HOLD: unregister_code16(KC_LSFT); break;
        case DOUBLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[1].step = 0;
}

void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_K));
        tap_code16(LGUI(KC_K));
        tap_code16(LGUI(KC_K));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_K));
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_K)); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_K)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_L)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_K)); register_code16(LGUI(KC_K));
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_K)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_K)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_L)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_K)); break;
    }
    dance_state[1].step = 0;
}


qk_tap_dance_action_t tap_dance_actions[] = {
        [FINDER_KEYS] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [MINUS_UNDERSCORE] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [EQUAL_PLUS] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
};
// tap dance operations end


void rgb_matrix_indicators_user(void) {
    const int state = get_highest_layer(layer_state|default_layer_state);
    switch(state) {
			case 0:
					rgb_matrix_set_color_all(RGB_OFF);
					rgb_matrix_set_color(2, 0, 0, 128);
					break;
			case 1:
					rgb_matrix_set_color_all(RGB_OFF);
					rgb_matrix_set_color(2, 0, 0, 128);
					break;
			case 2:
					rgb_matrix_set_color_all(RGB_OFF);
					rgb_matrix_set_color(2, 0, 0, 128);
					break;
			case 3:
					rgb_matrix_set_color_all(RGB_OFF);
					rgb_matrix_set_color(2, 0, 0, 128);
					break;
			case 4:
					rgb_matrix_set_color_all(RGB_OFF);
					rgb_matrix_set_color(2, 0, 255, 255);
					break;
			case 5:
					rgb_matrix_set_color_all(RGB_OFF);
					rgb_matrix_set_color(2, RGB_YELLOW);
					break;
			default:
					rgb_matrix_set_color_all(RGB_OFF);
    }
}
