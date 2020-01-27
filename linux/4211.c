cocci_test_suite() {
	enum led_brightness cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 86 */;
	struct wilco_ec_message cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 59 */;
	struct wilco_keyboard_leds_msg *cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 56 */;
	struct wilco_keyboard_leds_msg {
		u8 command;
		u8 status;
		u8 subcmd;
		u8 reserved3;
		u8 mode;
		u8 reserved5to8[4];
		u8 percent;
		u8 reserved10to15[6];
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 43 */;
	enum wilco_kbbl_subcommand{WILCO_KBBL_SUBCMD_GET_FEATURES=0x00, WILCO_KBBL_SUBCMD_GET_STATE=0x01, WILCO_KBBL_SUBCMD_SET_STATE=0x02,} cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 26 */;
	struct wilco_keyboard_leds {
		struct wilco_ec_device *ec;
		struct led_classdev keyboard;
	} cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 21 */;
	bool cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 164 */;
	struct wilco_keyboard_leds *cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 163 */;
	struct wilco_keyboard_leds cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 157 */;
	struct led_classdev *cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 153 */;
	struct wilco_keyboard_leds_msg cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 102 */;
	bool *cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 100 */;
	struct wilco_ec_device *cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 100 */;
	int cocci_id/* drivers/platform/chrome/wilco_ec/keyboard_leds.c 100 */;
}
