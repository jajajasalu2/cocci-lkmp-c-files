cocci_test_suite() {
	struct uctrl_status {
		u8 current_temp;
		u8 reset_status;
		u16 event_status;
		u16 error_status;
		u16 external_status;
		u8 internal_charge;
		u8 external_charge;
		u16 control_lcd;
		u8 control_bitport;
		u8 speaker_volume;
		u8 control_tft_brightness;
		u8 control_kbd_repeat_delay;
		u8 control_kbd_repeat_period;
		u8 control_screen_contrast;
	} cocci_id/* drivers/sbus/char/uctrl.c 98 */;
	struct uctrl_txn {
		u8 opcode;
		u8 inbits;
		u8 outbits;
		u8 *inbuf;
		u8 *outbuf;
	} cocci_id/* drivers/sbus/char/uctrl.c 90 */;
	const char *cocci_id/* drivers/sbus/char/uctrl.c 75 */[16];
	struct platform_driver cocci_id/* drivers/sbus/char/uctrl.c 426 */;
	struct ts102_regs {
		u32 card_a_intr;
		u32 card_a_stat;
		u32 card_a_ctrl;
		u32 card_a_xxx;
		u32 card_b_intr;
		u32 card_b_stat;
		u32 card_b_ctrl;
		u32 card_b_xxx;
		u32 uctrl_intr;
		u32 uctrl_data;
		u32 uctrl_stat;
		u32 uctrl_xxx;
		u32 ts102_xxx[4];
	} cocci_id/* drivers/sbus/char/uctrl.c 42 */;
	const struct of_device_id cocci_id/* drivers/sbus/char/uctrl.c 418 */[];
	struct platform_device *cocci_id/* drivers/sbus/char/uctrl.c 350 */;
	struct uctrl_regs {
		u32 uctrl_intr;
		u32 uctrl_data;
		u32 uctrl_stat;
		u32 uctrl_xxx[5];
	} cocci_id/* drivers/sbus/char/uctrl.c 35 */;
	u8 cocci_id/* drivers/sbus/char/uctrl.c 306 */[2];
	struct uctrl_txn cocci_id/* drivers/sbus/char/uctrl.c 305 */;
	u32 cocci_id/* drivers/sbus/char/uctrl.c 268 */;
	int cocci_id/* drivers/sbus/char/uctrl.c 267 */;
	struct uctrl_txn *cocci_id/* drivers/sbus/char/uctrl.c 265 */;
	struct uctrl_driver *cocci_id/* drivers/sbus/char/uctrl.c 265 */;
	void cocci_id/* drivers/sbus/char/uctrl.c 265 */;
	unsigned int cocci_id/* drivers/sbus/char/uctrl.c 241 */;
	struct miscdevice cocci_id/* drivers/sbus/char/uctrl.c 232 */;
	const struct file_operations cocci_id/* drivers/sbus/char/uctrl.c 225 */;
	irqreturn_t cocci_id/* drivers/sbus/char/uctrl.c 220 */;
	void *cocci_id/* drivers/sbus/char/uctrl.c 220 */;
	struct inode *cocci_id/* drivers/sbus/char/uctrl.c 211 */;
	struct file *cocci_id/* drivers/sbus/char/uctrl.c 201 */;
	unsigned long cocci_id/* drivers/sbus/char/uctrl.c 201 */;
	long cocci_id/* drivers/sbus/char/uctrl.c 200 */;
	void cocci_id/* drivers/sbus/char/uctrl.c 197 */(struct uctrl_driver *);
	struct uctrl_driver {
		struct uctrl_regs __iomem *regs;
		int irq;
		int pending;
		struct uctrl_status status;
	} *cocci_id/* drivers/sbus/char/uctrl.c 190 */;
	enum uctrl_opcode{READ_SERIAL_NUMBER=0x1, READ_ETHERNET_ADDRESS=0x2, READ_HARDWARE_VERSION=0x3, READ_MICROCONTROLLER_VERSION=0x4, READ_MAX_TEMPERATURE=0x5, READ_MIN_TEMPERATURE=0x6, READ_CURRENT_TEMPERATURE=0x7, READ_SYSTEM_VARIANT=0x8, READ_POWERON_CYCLES=0x9, READ_POWERON_SECONDS=0xA, READ_RESET_STATUS=0xB, READ_EVENT_STATUS=0xC, READ_REAL_TIME_CLOCK=0xD, READ_EXTERNAL_VGA_PORT=0xE, READ_MICROCONTROLLER_ROM_CHECKSUM=0xF, READ_ERROR_STATUS=0x10, READ_EXTERNAL_STATUS=0x11, READ_USER_CONFIGURATION_AREA=0x12, READ_MICROCONTROLLER_VOLTAGE=0x13, READ_INTERNAL_BATTERY_VOLTAGE=0x14, READ_DCIN_VOLTAGE=0x15, READ_HORIZONTAL_POINTER_VOLTAGE=0x16, READ_VERTICAL_POINTER_VOLTAGE=0x17, READ_INTERNAL_BATTERY_CHARGE_LEVEL=0x18, READ_EXTERNAL_BATTERY_CHARGE_LEVEL=0x19, READ_REAL_TIME_CLOCK_ALARM=0x1A, READ_EVENT_STATUS_NO_RESET=0x1B, READ_INTERNAL_KEYBOARD_LAYOUT=0x1C, READ_EXTERNAL_KEYBOARD_LAYOUT=0x1D, READ_EEPROM_STATUS=0x1E, CONTROL_LCD=0x20, CONTROL_BITPORT=0x21, SPEAKER_VOLUME=0x23, CONTROL_TFT_BRIGHTNESS=0x24, CONTROL_WATCHDOG=0x25, CONTROL_FACTORY_EEPROM_AREA=0x26, CONTROL_KBD_TIME_UNTIL_REPEAT=0x28, CONTROL_KBD_TIME_BETWEEN_REPEATS=0x29, CONTROL_TIMEZONE=0x2A, CONTROL_MARK_SPACE_RATIO=0x2B, CONTROL_DIAGNOSTIC_MODE=0x2E, CONTROL_SCREEN_CONTRAST=0x2F, RING_BELL=0x30, SET_DIAGNOSTIC_STATUS=0x32, CLEAR_KEY_COMBINATION_TABLE=0x33, PERFORM_SOFTWARE_RESET=0x34, SET_REAL_TIME_CLOCK=0x35, RECALIBRATE_POINTING_STICK=0x36, SET_BELL_FREQUENCY=0x37, SET_INTERNAL_BATTERY_CHARGE_RATE=0x39, SET_EXTERNAL_BATTERY_CHARGE_RATE=0x3A, SET_REAL_TIME_CLOCK_ALARM=0x3B, READ_EEPROM=0x40, WRITE_EEPROM=0x41, WRITE_TO_STATUS_DISPLAY=0x42, DEFINE_SPECIAL_CHARACTER=0x43, DEFINE_KEY_COMBINATION_ENTRY=0x50, DEFINE_STRING_TABLE_ENTRY=0x51, DEFINE_STATUS_SCREEN_DISPLAY=0x52, PERFORM_EMU_COMMANDS=0x64, READ_EMU_REGISTER=0x65, WRITE_EMU_REGISTER=0x66, READ_EMU_RAM=0x67, WRITE_EMU_RAM=0x68, READ_BQ_REGISTER=0x69, WRITE_BQ_REGISTER=0x6A, SET_USER_PASSWORD=0x70, VERIFY_USER_PASSWORD=0x71, GET_SYSTEM_PASSWORD_KEY=0x72, VERIFY_SYSTEM_PASSWORD=0x73, POWER_OFF=0x82, POWER_RESTART=0x83,} cocci_id/* drivers/sbus/char/uctrl.c 115 */;
}
