cocci_test_suite() {
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/keyspan_pda.c 792 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/keyspan_pda.c 764 */;
	struct keyspan_pda_private cocci_id/* drivers/usb/serial/keyspan_pda.c 714 */;
	const char *cocci_id/* drivers/usb/serial/keyspan_pda.c 668 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/keyspan_pda.c 64 */[];
	unsigned long cocci_id/* drivers/usb/serial/keyspan_pda.c 585 */;
	struct keyspan_pda_private *cocci_id/* drivers/usb/serial/keyspan_pda.c 584 */;
	const unsigned char *cocci_id/* drivers/usb/serial/keyspan_pda.c 440 */;
	struct keyspan_pda_private {
		int tx_room;
		int tx_throttled;
		struct work_struct wakeup_work;
		struct work_struct unthrottle_work;
		struct usb_serial *serial;
		struct usb_serial_port *port;
	} cocci_id/* drivers/usb/serial/keyspan_pda.c 43 */;
	unsigned char cocci_id/* drivers/usb/serial/keyspan_pda.c 383 */;
	u8 *cocci_id/* drivers/usb/serial/keyspan_pda.c 362 */;
	unsigned char *cocci_id/* drivers/usb/serial/keyspan_pda.c 359 */;
	speed_t cocci_id/* drivers/usb/serial/keyspan_pda.c 317 */;
	struct ktermios *cocci_id/* drivers/usb/serial/keyspan_pda.c 314 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/keyspan_pda.c 291 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/keyspan_pda.c 290 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/keyspan_pda.c 288 */;
	int cocci_id/* drivers/usb/serial/keyspan_pda.c 288 */;
	void cocci_id/* drivers/usb/serial/keyspan_pda.c 288 */;
	unsigned int cocci_id/* drivers/usb/serial/keyspan_pda.c 138 */;
	struct urb *cocci_id/* drivers/usb/serial/keyspan_pda.c 134 */;
	struct work_struct *cocci_id/* drivers/usb/serial/keyspan_pda.c 109 */;
}
