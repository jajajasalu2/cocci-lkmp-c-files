cocci_test_suite() {
	struct upd78f0730_line_control {
		u8 opcode;
		__le32 baud_rate;
		u8 params;
	}__packed cocci_id/* drivers/usb/serial/upd78f0730.c 96 */;
	struct upd78f0730_port_private {
		struct mutex lock;
		u8 line_signals;
	} cocci_id/* drivers/usb/serial/upd78f0730.c 44 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/upd78f0730.c 429 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/upd78f0730.c 411 */;
	const struct upd78f0730_open_close cocci_id/* drivers/usb/serial/upd78f0730.c 402 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/upd78f0730.c 31 */[];
	struct upd78f0730_line_control cocci_id/* drivers/usb/serial/upd78f0730.c 309 */;
	struct ktermios *cocci_id/* drivers/usb/serial/upd78f0730.c 306 */;
	const speed_t cocci_id/* drivers/usb/serial/upd78f0730.c 288 */[];
	const speed_t cocci_id/* drivers/usb/serial/upd78f0730.c 287 */;
	speed_t cocci_id/* drivers/usb/serial/upd78f0730.c 285 */;
	unsigned int cocci_id/* drivers/usb/serial/upd78f0730.c 274 */;
	struct upd78f0730_set_dtr_rts cocci_id/* drivers/usb/serial/upd78f0730.c 252 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/upd78f0730.c 251 */;
	struct upd78f0730_port_private *cocci_id/* drivers/usb/serial/upd78f0730.c 250 */;
	struct device *cocci_id/* drivers/usb/serial/upd78f0730.c 249 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/upd78f0730.c 247 */;
	int cocci_id/* drivers/usb/serial/upd78f0730.c 247 */;
	void cocci_id/* drivers/usb/serial/upd78f0730.c 247 */;
	u8 *cocci_id/* drivers/usb/serial/upd78f0730.c 152 */;
	void *cocci_id/* drivers/usb/serial/upd78f0730.c 132 */;
	struct usb_device *cocci_id/* drivers/usb/serial/upd78f0730.c 131 */;
	const void *cocci_id/* drivers/usb/serial/upd78f0730.c 129 */;
	struct upd78f0730_set_err_chr {
		u8 opcode;
		u8 state;
		u8 err_char;
	} cocci_id/* drivers/usb/serial/upd78f0730.c 122 */;
	struct upd78f0730_open_close {
		u8 opcode;
		u8 state;
	} cocci_id/* drivers/usb/serial/upd78f0730.c 116 */;
	struct upd78f0730_set_xon_xoff_chr {
		u8 opcode;
		u8 xon;
		u8 xoff;
	} cocci_id/* drivers/usb/serial/upd78f0730.c 109 */;
	struct upd78f0730_set_dtr_rts {
		u8 opcode;
		u8 params;
	} cocci_id/* drivers/usb/serial/upd78f0730.c 103 */;
}
