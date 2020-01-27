cocci_test_suite() {
	struct spcp8x5_usb_ctrl_arg {
		u8 type;
		u8 cmd;
		u8 cmd_type;
		u16 value;
		u16 index;
		u16 length;
	} cocci_id/* drivers/usb/serial/spcp8x5.c 52 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/spcp8x5.c 485 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/spcp8x5.c 464 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/spcp8x5.c 40 */[];
	struct usb_serial *cocci_id/* drivers/usb/serial/spcp8x5.c 393 */;
	unsigned char cocci_id/* drivers/usb/serial/spcp8x5.c 295 */[2];
	unsigned short cocci_id/* drivers/usb/serial/spcp8x5.c 294 */;
	unsigned int cocci_id/* drivers/usb/serial/spcp8x5.c 293 */;
	struct ktermios *cocci_id/* drivers/usb/serial/spcp8x5.c 288 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/spcp8x5.c 282 */;
	unsigned long cocci_id/* drivers/usb/serial/spcp8x5.c 267 */;
	struct spcp8x5_private *cocci_id/* drivers/usb/serial/spcp8x5.c 266 */;
	void cocci_id/* drivers/usb/serial/spcp8x5.c 264 */;
	u8 cocci_id/* drivers/usb/serial/spcp8x5.c 254 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/spcp8x5.c 252 */;
	int cocci_id/* drivers/usb/serial/spcp8x5.c 252 */;
	u16 cocci_id/* drivers/usb/serial/spcp8x5.c 234 */;
	struct usb_device *cocci_id/* drivers/usb/serial/spcp8x5.c 204 */;
	u8 *cocci_id/* drivers/usb/serial/spcp8x5.c 201 */;
	const struct usb_device_id *cocci_id/* drivers/usb/serial/spcp8x5.c 155 */;
	void *cocci_id/* drivers/usb/serial/spcp8x5.c 148 */;
	struct spcp8x5_private {
		unsigned quirks;
		spinlock_t lock;
		u8 line_control;
	} cocci_id/* drivers/usb/serial/spcp8x5.c 139 */;
}
