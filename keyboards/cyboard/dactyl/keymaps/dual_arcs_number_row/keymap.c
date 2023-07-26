/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H


#define _COLEMAKDH 0
#define _QWERTY 1
#define _MOUSE 2
#define _MEDIA 3
#define _APPSHC 4
#define _GSHC 5
#define _NAVI 6
#define _SYMB 7
#define _TAPPSHC 8
#define _TGSHC 9




enum keycodes {
  NAVI_SYMB_OFF = SAFE_RANGE,
  NAVI_ON,
  MS_DCLK,
  MS_POWERTOYS_JUMP,
  SYMB_LPRN,
  SYMB_RPRN,
  SYMB_SCLN,
  SYMB_SLSH,
};









const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_COLEMAKDH] = LAYOUT_dual_arcs_num(
        KC_ESC,        KC_EXLM,    KC_AT,         KC_HASH,        KC_ASTR,      KC_DLR,                                    KC_TILD,      KC_UNDS,      KC_LPRN,    KC_RPRN,          KC_QUOT,       KC_NUM,
        OSM(MOD_LCTL),  KC_Q,       KC_W,          KC_F,           KC_P,        KC_B,                                      KC_J,         KC_L,         KC_U,       KC_Y,             KC_SCLN,       OSM(MOD_LCTL),
        TO(_MOUSE),    KC_A,       KC_R,          KC_S,           KC_T,        KC_G,                                      KC_M,         KC_N,         KC_E,       KC_I,             KC_O,          KC_NO,
        OSM(MOD_LSFT),  KC_Z,       KC_X,          KC_C,           KC_D,        KC_V,                                      KC_K,         KC_H,         KC_COMM,    KC_DOT,           KC_SLSH,       OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,     TO(_APPSHC),   TO(_GSHC),      NAVI_ON,   KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,       TT(_SYMB),    KC_RALT,    LSFT(KC_RALT),    LCAG(KC_1),    LCAG(KC_2),
                                                                               OSL(_SYMB),   KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_QWERTY] = LAYOUT_dual_arcs_num(
        KC_ESC,        KC_EXLM,    KC_AT,         KC_HASH,        KC_ASTR,      KC_DLR,                                    KC_TILD,      KC_UNDS,      KC_LPRN,    KC_RPRN,          KC_QUOT,       KC_NUM,
        OSM(MOD_LCTL),  KC_Q,       KC_W,          KC_E,           KC_R,        KC_T,                                      KC_Y,         KC_U,         KC_I,       KC_O,             KC_SCLN,       OSM(MOD_LCTL),
        TO(_MOUSE),    KC_A,       KC_S,          KC_D,           KC_F,        KC_G,                                      KC_H,         KC_J,         KC_K,       KC_L,             KC_P,          KC_NO,
        OSM(MOD_LSFT),  KC_Z,       KC_X,          KC_C,           KC_V,        KC_B,                                      KC_N,         KC_M,         KC_COMM,    KC_DOT,           KC_SLSH,       OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,     TO(_APPSHC),   TO(_GSHC),      NAVI_ON,   KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,      TT(_SYMB),   KC_RALT,    LSFT(KC_RALT),    LCAG(KC_1),    LCAG(KC_2),
                                                                               OSL(_SYMB),   KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_MOUSE] = LAYOUT_dual_arcs_num(
        KC_ESC,        KC_F2,            KC_F6,         KC_F3,         KC_F5,          KC_F4,                                     KC_NO,        KC_NO,        KC_F11,     KC_F10,          KC_F1,               KC_F12,
        OSM(MOD_LCTL),  OSL(_TAPPSHC),   KC_WH_L,       MS_DCLK,    KC_WH_R,        KC_LGUI,                                   KC_LGUI,      KC_HOME,      KC_MS_U,    KC_END,          OSL(_TAPPSHC),      OSM(MOD_LCTL),
        KC_NO,         OSL(_TGSHC),     KC_BTN2,       KC_BTN1,       KC_BTN3,        KC_WH_U,                                   KC_PGUP,      KC_MS_L,      KC_MS_D,    KC_MS_R,         OSL(_TGSHC),        TO(_COLEMAKDH),
        OSM(MOD_LSFT),  MS_POWERTOYS_JUMP,       KC_LCTL,       KC_LALT,       KC_LSFT,        KC_WH_D,                                   KC_PGDN,      KC_LSFT,      KC_LALT,    KC_LCTL,         LSFT(LCTL(KC_F24)),          OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,           TO(_APPSHC),   TO(_GSHC),     NAVI_ON,      KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,     TT(_SYMB),   KC_RALT,    LSFT(KC_RALT),   LCAG(KC_1),          LCAG(KC_2),
                                                                                       OSL(_SYMB),   KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_MEDIA] = LAYOUT_dual_arcs_num(
        KC_ESC,        KC_F2,            KC_F6,         KC_F3,         KC_F5,          KC_F4,                                     KC_NO,        KC_NO,        KC_F11,        KC_F10,          KC_F1,               KC_F12,
        OSM(MOD_LCTL),  OSL(_TAPPSHC),   KC_HOME,       KC_UP,         KC_END,         KC_LGUI,                                   KC_LGUI,      KC_MUTE,      KC_VOLD,       KC_VOLU,         OSL(_TAPPSHC),      OSM(MOD_LCTL),
        TO(_MOUSE),    OSL(_TGSHC),     KC_LEFT,       KC_DOWN,       KC_RGHT,        KC_PGUP,                                   KC_NO,        KC_MPRV,      KC_MEDIA_PLAY_PAUSE,    KC_MNXT,         OSL(_TGSHC),        TO(_COLEMAKDH),
        OSM(MOD_LSFT),  KC_NO,       LCAG(KC_4),    KC_MSTP,       LCAG(KC_5),     KC_PGDN,                                   KC_NO,        KC_LSFT,      KC_LALT,       KC_LCTL,         KC_NO,               OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,           TO(_APPSHC),   TO(_GSHC),     NAVI_ON,      KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,     TT(_SYMB),   KC_RALT,       LSFT(KC_RALT),   LCAG(KC_1),          LCAG(KC_2),
                                                                                       OSL(_SYMB),   KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_APPSHC] = LAYOUT_dual_arcs_num(
        KC_ESC,        LCA(KC_1),        LCA(KC_2),     LCA(KC_3),     LCA(KC_4),      LCA(KC_5),                                 LCA(KC_6),     LCA(KC_7),     LCA(KC_8),        LCA(KC_9),      LCA(KC_SCLN),      LCA(KC_QUOT),
        OSM(MOD_LCTL),  OSL(_TAPPSHC),   LCA(KC_W),     LCA(KC_F),     LCA(KC_P),      LCA(KC_B),                                 LCA(KC_J),     LCA(KC_L),     LCA(KC_U),        LCA(KC_Y),      OSL(_TAPPSHC),    OSM(MOD_LCTL),
        TO(_MOUSE),    OSL(_TGSHC),     LCA(KC_R),     LCA(KC_S),     LCA(KC_T),      LCA(KC_G),                                 LCA(KC_M),     LCA(KC_N),     LCA(KC_E),        LCA(KC_I),      OSL(_TGSHC),      TO(_COLEMAKDH),
        OSM(MOD_LSFT),  LCA(KC_Z),        LCA(KC_X),     LCA(KC_C),     LCA(KC_D),      LCA(KC_V),                                 LCA(KC_K),     LCA(KC_H),     LCA(KC_COMM),     LCA(KC_DOT),    LCA(KC_SLSH),      OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,           KC_NO,         TO(_GSHC),     NAVI_ON,      KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,      TT(_SYMB),     KC_RALT,          LSFT(KC_RALT),  LCAG(KC_1),        LCAG(KC_2),
                                                                                       OSL(_SYMB),   KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_GSHC] = LAYOUT_dual_arcs_num(
        KC_ESC,        KC_F2,            KC_F6,         KC_F3,         KC_F5,          KC_F4,                                     DF(_QWERTY),     DF(_COLEMAKDH),     KC_F11,        KC_F10,          KC_F1,               KC_F12,
        OSM(MOD_LCTL),  OSL(_TAPPSHC),   LCTL(KC_A),       KC_F2,         LCTL(KC_F),         LCTL(KC_H),                                   LCTL(KC_PSCR),   KC_F7,              KC_F8,         KC_F9,           OSL(_TAPPSHC),      OSM(MOD_LCTL),
        TO(_MOUSE),    OSL(_TGSHC),     LGUI(KC_V),       LCTL(KC_V),       LCTL(KC_C),        KC_NO,                                   LSFT(KC_PSCR),   LCTL(KC_N),         LCTL(KC_T),    LCTL(KC_O),      OSL(_TGSHC),        TO(_COLEMAKDH),
        OSM(MOD_LSFT),  LCTL(KC_P),       LCTL(KC_S),    LCTL(KC_X),       LCTL(LSFT(KC_V)),     LCTL(KC_W),                                   KC_PSCR,         LALT(KC_PSCR),      LCTL(KC_Z),    LCTL(KC_Y),      KC_RCTL,             OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,           TO(_APPSHC),   KC_NO,         NAVI_ON,      KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,      TT(_SYMB),        KC_RALT,       LSFT(KC_RALT),   LCAG(KC_1),          LCAG(KC_2),
                                                                                       OSL(_SYMB),   KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_NAVI] = LAYOUT_dual_arcs_num(
        KC_ESC,        KC_F2,            KC_F6,         KC_F3,             KC_F5,          KC_F4,                                    KC_NO,        KC_NO,        KC_F11,     KC_F10,          KC_F1,               KC_F12,
        OSM(MOD_LCTL),  OSL(_TAPPSHC),   KC_WH_L,       OSM(MOD_LALT),      KC_WH_R,        KC_LGUI,                                   KC_LGUI,      KC_HOME,      KC_UP,      KC_END,          OSL(_TAPPSHC),      OSM(MOD_LCTL),
        TO(_MOUSE),          OSL(_TGSHC),     OSM(MOD_LCTL),  TO(_COLEMAKDH),    OSM(MOD_LSFT),   KC_WH_U,                                   KC_PGUP,      KC_LEFT,      KC_DOWN,    KC_RGHT,         OSL(_TGSHC),        TO(_COLEMAKDH),
        OSM(MOD_LSFT),  KC_NO,            KC_NO,         TO(_MOUSE),        TO(_MEDIA),     KC_WH_D,                                   KC_PGDN,      KC_LSFT,      KC_LALT,    KC_LCTL,         KC_NO,               OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,           TO(_APPSHC),   TO(_GSHC),         NAVI_ON,          KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,     TT(_SYMB),   KC_RALT,    LSFT(KC_RALT),   LCAG(KC_1),          LCAG(KC_2),
                                                                                           OSL(_SYMB),   KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_SYMB] = LAYOUT_dual_arcs_num(
        KC_ESC,        KC_EXLM,         SYMB_SLSH,    KC_ASTR,           KC_QUES,         KC_DLR,                                   KC_GRV,      KC_BSLS,         KC_LBRC,       KC_RBRC,       KC_COLN,             KC_QUOT,
        OSM(MOD_LCTL),  KC_8,             KC_7,          KC_6,              KC_5,           KC_PLUS,                                   KC_CIRC,      KC_AT,        KC_LCBR,        KC_RCBR,         SYMB_SCLN,             OSM(MOD_LCTL),
        TO(_MOUSE),          KC_4,             KC_3,          KC_2,              KC_1,           KC_EQL,                                    KC_PERC,      KC_HASH,      SYMB_LPRN,       SYMB_RPRN,        KC_AMPR,          TO(_COLEMAKDH),
        OSM(MOD_LSFT),  KC_COMM,          KC_9,          KC_DOT,            KC_0,           KC_MINS,                                   KC_UNDS,      KC_TILD,       KC_LABK,      KC_RABK,         KC_PIPE,               OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,           TO(_APPSHC),   TO(_GSHC),         NAVI_ON,     KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,      KC_NO,      KC_RALT,       LSFT(KC_RALT),   LCAG(KC_1),          LCAG(KC_2),
                                                                                           KC_TRNS,      KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_TAPPSHC] = LAYOUT_dual_arcs_num(
        KC_ESC,        LCA(KC_1),        LCA(KC_2),     LCA(KC_3),     LCA(KC_4),      LCA(KC_5),                                 LCA(KC_6),     LCA(KC_7),     LCA(KC_8),        LCA(KC_9),      LCA(KC_SCLN),      LCA(KC_QUOT),
        OSM(MOD_LCTL),  KC_NO,            LCA(KC_W),     LCA(KC_F),     LCA(KC_P),      LCA(KC_B),                                 LCA(KC_J),     LCA(KC_L),     LCA(KC_U),        LCA(KC_Y),      KC_NO,             OSM(MOD_LCTL),
        TO(_MOUSE),    KC_NO,            LCA(KC_R),     LCA(KC_S),     LCA(KC_T),      LCA(KC_G),                                 LCA(KC_M),     LCA(KC_N),     LCA(KC_E),        LCA(KC_I),      KC_NO,             TO(_COLEMAKDH),
        OSM(MOD_LSFT),  LCA(KC_Z),        LCA(KC_X),     LCA(KC_C),     LCA(KC_D),      LCA(KC_V),                                 LCA(KC_K),     LCA(KC_H),     LCA(KC_COMM),     LCA(KC_DOT),    LCA(KC_SLSH),      OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,           TO(_APPSHC),   TO(_GSHC),     NAVI_ON,          KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,      KC_NO,         KC_RALT,          LSFT(KC_RALT),  LCAG(KC_1),        LCAG(KC_2),
                                                                                       KC_NO,        KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    ),

    [_TGSHC] = LAYOUT_dual_arcs_num(
        KC_ESC,        KC_F2,            KC_F6,         KC_F3,         KC_F5,          KC_F4,                                     DF(_QWERTY),     DF(_COLEMAKDH),     KC_F11,        KC_F10,          KC_F1,               KC_F12,
        OSM(MOD_LCTL),  KC_NO,            LCTL(KC_A),       KC_F2,         LCTL(KC_F),         LCTL(KC_H),                                  LCTL(KC_PSCR),   KC_F7,              KC_F8,         KC_F9,           KC_NO,               OSM(MOD_LCTL),
        TO(_MOUSE),    KC_NO,            LGUI(KC_V),       LCTL(KC_V),       LCTL(KC_C),        KC_NO,                                 LSFT(KC_PSCR),   LCTL(KC_N),         LCTL(KC_T),    LCTL(KC_O),      KC_NO,               TO(_COLEMAKDH),
        OSM(MOD_LSFT), LCTL(KC_P),       LCTL(KC_S),    LCTL(KC_X),       LCTL(LSFT(KC_V)),     LCTL(KC_W),                                  KC_PSCR,         LALT(KC_PSCR),      LCTL(KC_Z),    LCTL(KC_Y),      KC_RCTL,             OSM(MOD_LSFT),
        KC_TAB,        KC_SPC,           TO(_APPSHC),   TO(_GSHC),     NAVI_ON,          KC_ENT,       KC_BSPC,           KC_TAB,   KC_SPC,          KC_NO,              KC_RALT,       LSFT(KC_RALT),   LCAG(KC_1),          LCAG(KC_2),
                                                                                       KC_NO,        KC_DEL,            KC_CAPS,  NAVI_SYMB_OFF
    )
	
};





const key_override_t alpha_exlm_pipe_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_EXLM, KC_PIPE, 1<<_COLEMAKDH | 1<<_QWERTY);
const key_override_t alpha_at_ampr_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_AT, KC_AMPR, 1<<_COLEMAKDH | 1<<_QWERTY);
const key_override_t alpha_hash_plus_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_HASH, KC_PLUS, 1<<_COLEMAKDH | 1<<_QWERTY);
const key_override_t alpha_astr_circ_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_ASTR, KC_CIRC, 1<<_COLEMAKDH | 1<<_QWERTY);
const key_override_t alpha_dlr_perc_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DLR, KC_PERC, 1<<_COLEMAKDH | 1<<_QWERTY);
const key_override_t alpha_tild_eql_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_TILD, KC_EQL, 1<<_COLEMAKDH | 1<<_QWERTY);
const key_override_t alpha_unds_mins_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_UNDS, KC_MINS, 1<<_COLEMAKDH | 1<<_QWERTY);
const key_override_t symb_9_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_9, KC_9, 1<<_SYMB);
const key_override_t symb_8_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_8, KC_8, 1<<_SYMB);
const key_override_t symb_7_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_7, KC_7, 1<<_SYMB);
const key_override_t symb_6_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_6, KC_6, 1<<_SYMB);
const key_override_t symb_5_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_5, KC_5, 1<<_SYMB);
const key_override_t symb_4_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_4, KC_4, 1<<_SYMB);
const key_override_t symb_3_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_3, KC_3, 1<<_SYMB);
const key_override_t symb_2_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_2, KC_2, 1<<_SYMB);
const key_override_t symb_1_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_1, KC_1, 1<<_SYMB);
const key_override_t symb_0_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_0, KC_0, 1<<_SYMB);
const key_override_t symb_mins_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_MINS, KC_MINS, 1<<_SYMB);
const key_override_t symb_eql_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_EQL, KC_EQL, 1<<_SYMB);
const key_override_t symb_dot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_DOT, 1<<_SYMB);
const key_override_t symb_comm_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMM, KC_COMM, 1<<_SYMB);
const key_override_t symb_grv_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_GRV, KC_GRV, 1<<_SYMB);
const key_override_t symb_bsls_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_BSLS, KC_BSLS, 1<<_SYMB);
const key_override_t symb_lbrc_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_LBRC, KC_LBRC, 1<<_SYMB);
const key_override_t symb_rbrc_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_RBRC, KC_RBRC, 1<<_SYMB);


const key_override_t **key_overrides = (const key_override_t *[]){
	&alpha_exlm_pipe_override,
	&alpha_at_ampr_override,
	&alpha_hash_plus_override,
	&alpha_astr_circ_override,
	&alpha_dlr_perc_override,
	&alpha_tild_eql_override,
	&alpha_unds_mins_override,
	&symb_9_override,
	&symb_8_override,
	&symb_7_override,
	&symb_6_override,
	&symb_5_override,
	&symb_4_override,
	&symb_3_override,
	&symb_2_override,
	&symb_1_override,
	&symb_0_override,
	&symb_mins_override,
	&symb_eql_override,
	&symb_dot_override,
	&symb_comm_override,
	&symb_grv_override,
	&symb_bsls_override,
	&symb_lbrc_override,
	&symb_rbrc_override,

	NULL
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {

	switch (keycode) {

	case NAVI_SYMB_OFF:
		if (!record->event.pressed) { 
		return false;
		}

		layer_off(_NAVI);
		layer_off(_SYMB);
		layer_off(_TAPPSHC);
		layer_off(_TGSHC);

		return false;

	  
	case NAVI_ON:
		if (!record->event.pressed) { 
		return false;
		}
	  
		if (get_highest_layer(layer_state) < _NAVI) {
		layer_on(_NAVI);
		return false;
		}
	  
		if (get_highest_layer(layer_state) == _NAVI) {
		return false;
		}
	  
		if (IS_LAYER_OFF(_NAVI) && get_highest_layer(layer_state) > _NAVI) {
		layer_on(_NAVI);
		layer_off(_SYMB);
		layer_off(_TAPPSHC);
		layer_off(_TGSHC);
		return false;
		}
	  
		if (IS_LAYER_ON(_NAVI) && get_highest_layer(layer_state) > _NAVI) {
		layer_off(_SYMB);
		layer_off(_TAPPSHC);
		layer_off(_TGSHC);
		return false;
		}
	  
		return false;


    case MS_DCLK:
        if (record->event.pressed) {
			send_string_with_delay(SS_TAP(X_BTN1), 255); 
			send_string_with_delay(SS_TAP(X_BTN1), 0);
        } 
        return false;

    case MS_POWERTOYS_JUMP:
        if (record->event.pressed) {
			send_string_with_delay(SS_LCTL(SS_LALT(SS_LGUI("9"))), 10);
			send_string_with_delay(SS_LCTL(SS_LALT(SS_LGUI("8"))), 0);
        } 
        return false;

    case SYMB_LPRN:
        if (record->event.pressed) {
			send_string_with_delay(SS_LCTL(SS_TAP(X_ALGR())), 10);
			send_string_with_delay(SS_LSFT("9"), 10);
			send_string_with_delay(SS_LCTL(SS_LSFT(SS_TAP(X_ALGR()))), 0);
        } 
        return false;

    case SYMB_RPRN:
        if (record->event.pressed) {
			send_string_with_delay(SS_LCTL(SS_TAP(X_ALGR())), 10);
			send_string_with_delay(SS_LSFT("0"), 10);
			send_string_with_delay(SS_LCTL(SS_LSFT(SS_TAP(X_ALGR()))), 0);
        } 
        return false;

    case SYMB_SCLN:
		if (record->event.pressed) {
			send_string_with_delay(SS_LCTL(SS_TAP(X_ALGR())), 10);
			register_code(KC_SCLN);
			unregister_code(KC_SCLN);
			send_string_with_delay(SS_LCTL(SS_LSFT(SS_TAP(X_ALGR()))), 0);
		}
        return false;

    case SYMB_SLSH:
        if (record->event.pressed) {
			send_string_with_delay(SS_LCTL(SS_TAP(X_ALGR())), 10);
			send_string_with_delay(SS_TAP(X_SLSH), 10);
			send_string_with_delay(SS_LCTL(SS_LSFT(SS_TAP(X_ALGR()))), 0);
        } 
        return true;



    }
    return true;
  
}




