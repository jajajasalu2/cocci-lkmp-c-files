cocci_test_suite() {
	struct usb_device *cocci_id/* drivers/usb/serial/f81232.c 91 */;
	u16 cocci_id/* drivers/usb/serial/f81232.c 87 */;
	u8 *cocci_id/* drivers/usb/serial/f81232.c 87 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/f81232.c 824 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/f81232.c 797 */;
	speed_t cocci_id/* drivers/usb/serial/f81232.c 79 */;
	int cocci_id/* drivers/usb/serial/f81232.c 79 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/f81232.c 780 */;
	pm_message_t cocci_id/* drivers/usb/serial/f81232.c 761 */;
	const u8 cocci_id/* drivers/usb/serial/f81232.c 76 */[];
	const u32 cocci_id/* drivers/usb/serial/f81232.c 75 */[];
	struct f81232_private cocci_id/* drivers/usb/serial/f81232.c 711 */;
	struct work_struct *cocci_id/* drivers/usb/serial/f81232.c 708 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/f81232.c 696 */;
	u8 cocci_id/* drivers/usb/serial/f81232.c 683 */;
	struct f81232_private {
		struct mutex lock;
		u8 modem_control;
		u8 modem_status;
		u8 shadow_lcr;
		speed_t baud_base;
		struct work_struct lsr_work;
		struct work_struct interrupt_work;
		struct usb_serial_port *port;
	} cocci_id/* drivers/usb/serial/f81232.c 64 */;
	struct ktermios *cocci_id/* drivers/usb/serial/f81232.c 531 */;
	speed_t cocci_id/* drivers/usb/serial/f81232.c 423 */[];
	struct f81232_private *cocci_id/* drivers/usb/serial/f81232.c 382 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/f81232.c 381 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/f81232.c 379 */;
	void cocci_id/* drivers/usb/serial/f81232.c 379 */;
	unsigned int cocci_id/* drivers/usb/serial/f81232.c 331 */;
	char cocci_id/* drivers/usb/serial/f81232.c 330 */;
	unsigned char *cocci_id/* drivers/usb/serial/f81232.c 329 */;
	struct urb *cocci_id/* drivers/usb/serial/f81232.c 325 */;
	size_t cocci_id/* drivers/usb/serial/f81232.c 264 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/f81232.c 24 */[];
}
