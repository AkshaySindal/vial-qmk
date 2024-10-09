#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT (
  
  KC_ESC,   KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,   KC_F11,   KC_F12, KC_PAUS, KC_PSCR, KC_INS,  KC_DEL,
  KC_GRV,   KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,     KC_MINS,  KC_EQL,    			   KC_BSPC,
  KC_TAB,   KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,     KC_LBRC,  KC_RBRC,                 	   KC_BSLS,
  KC_CAPS,  KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,  KC_QUOT,                                     KC_ENT,
  KC_LSFT,  KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,  KC_RSFT,                             KC_UP,   MO(1),
  KC_LCTL,  MO(1),   KC_LGUI,KC_LALT,                  KC_SPC,                                 KC_RALT,  MO(1),  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    
  /*  K00,     K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,     K0D, K0E, K0F, K55, \
    K10,  K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,  K19,  K1A,  K1B, K1C,      K1D, \
    K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,  K29,  K2A,  K2B, K2C,     K2D, \
    K30,    K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,  K39,  K3A,  K3B,         K3C, \
    K40,     K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,  K49,  K4A,  K4B,  K4C,  K4D, \
    K50,  K51,   K52,   K53, 		 K54,    	       K58,  K59,  K5A,  K5B, K5C,  K5D  \  	*/
  
  
  ),

};

