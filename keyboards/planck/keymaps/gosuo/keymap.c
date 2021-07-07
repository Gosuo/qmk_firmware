#include QMK_KEYBOARD_H

enum layers {
	BASE,
	LOWER,
	RAISE,
	QWERTY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Workman
	 * ,-----------------------------------------------------------------------------------.
	 * | Esc  |   Q  |   D  |   R  |   W  |   B  |   J  |   F  |   U  |   P  |   ;  | Bksp |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Tab  |   A  |   S  |   H  |   T  |   G  |   Y  |   N  |   E  |   O  |   I  |  '   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   M  |   C  |   V  |   K  |   L  |   ,  |   .  |   /  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl |TO(15)| Alt  | Sys  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
	[BASE] =
LAYOUT_planck_mit(	KC_ESC,		KC_Q,		KC_D,		KC_R,		KC_W,		KC_B,		KC_J,		KC_F,		KC_U,		KC_P,		KC_SCLN,	KC_BSPC,
			KC_TAB,		KC_A,		KC_S,		KC_H,		KC_T,		KC_G,		KC_Y,		KC_N,		KC_E,		KC_O,		KC_I,		KC_QUOT,
			KC_LSFT,	KC_Z,		KC_X,		KC_M,		KC_C,		KC_V,		KC_K,		KC_L,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_ENT,
			KC_LCTL,	TO(15),		KC_LALT,	KC_LGUI,	MO(1),		KC_SPC,		/*SPC*/		MO(2),		KC_LEFT,	KC_DOWN,	KC_UP,		KC_RGHT),

[1] = LAYOUT_planck_mit(KC_ESC,		KC_EXLM,	KC_AT,		KC_HASH,	KC_DLR,		KC_PERC,	KC_CIRC,	KC_AMPR,	KC_ASTR,	KC_MINS,	KC_EQL,		KC_BSPC,
			KC_TAB,		KC_PSLS,	KC_PAST,	KC_PMNS,	KC_PPLS,	KC_NO,		KC_NO,		KC_LCBR,	KC_RCBR,	KC_LPRN,	KC_RPRN,	KC_PIPE,
			KC_LSFT,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_ENT,
			KC_TRNS,	KC_LCTL,	KC_LALT,	KC_LGUI,	KC_TRNS,	KC_SPC,		/*SPC*/		KC_NO,		KC_MPRV,	KC_MSTP,	KC_MPLY,	KC_MNXT),

[2] = LAYOUT_planck_mit(KC_ESC,		KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_BSPC,
			KC_ESC,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_LBRC,	KC_RBRC,	KC_MINS,	KC_EQL,		KC_BSLS,
			KC_LSFT,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
			KC_TRNS,	KC_LCTL,	KC_LALT,	KC_LGUI,	KC_NO,		KC_SPC,		/*SPC*/		KC_TRNS,	KC_NO,		KC_NO,		KC_NO,		KC_NO),
	
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |Brite | GUI  | Alt  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
	[QWERTY] =
LAYOUT_planck_mit(	KC_ESC, 	KC_Q, 		KC_W,	 	KC_E, 		KC_R,		 KC_T,		 KC_Y, 		KC_U,		 KC_I,		 KC_O, 		KC_P,		 KC_BSPC,
			KC_TAB, 	KC_A, 		KC_S,		 KC_D,		 KC_F,		 KC_G,		 KC_H,		 KC_J, 		KC_K, 		KC_L,		 KC_SCLN,	 KC_QUOT,
			KC_LSFT,	 KC_Z, 		KC_X,		 KC_C,		 KC_V,		 KC_B,		 KC_N,		 KC_M,		 KC_COMM,	 KC_DOT,	 KC_SLSH,	 KC_ENT,
			KC_TRNS, 	KC_LCTL, 	KC_LALT, 	KC_LGUI, 	MO(1), 		KC_SPC, 	/*SPC*/		MO(2),		 KC_LEFT,	 KC_DOWN,	 KC_UP,		 KC_RGHT),
	
	[15] = LAYOUT_planck_mit(KC_NO, TO(0), TO(1), TO(2), KC_NO, KC_NO, KC_NO, KC_NO, TO(8), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
