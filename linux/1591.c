cocci_test_suite() {
	enum{ipw_sio_b256000=0x000e, ipw_sio_b128000=0x001d, ipw_sio_b115200=0x0020, ipw_sio_b57600=0x0040, ipw_sio_b56000=0x0042, ipw_sio_b38400=0x0060, ipw_sio_b19200=0x00c0, ipw_sio_b14400=0x0100, ipw_sio_b9600=0x0180, ipw_sio_b4800=0x0300, ipw_sio_b2400=0x0600, ipw_sio_b1200=0x0c00, ipw_sio_b600=0x1800,} cocci_id/* drivers/usb/serial/ipw.c 68 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/ipw.c 304 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/ipw.c 286 */;
	struct device *cocci_id/* drivers/usb/serial/ipw.c 252 */;
	struct usb_device *cocci_id/* drivers/usb/serial/ipw.c 251 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/ipw.c 249 */;
	void cocci_id/* drivers/usb/serial/ipw.c 249 */;
	struct usb_wwan_intf_private cocci_id/* drivers/usb/serial/ipw.c 201 */;
	struct usb_wwan_intf_private *cocci_id/* drivers/usb/serial/ipw.c 199 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/ipw.c 197 */;
	int cocci_id/* drivers/usb/serial/ipw.c 197 */;
	u8 *cocci_id/* drivers/usb/serial/ipw.c 137 */;
	u8 cocci_id/* drivers/usb/serial/ipw.c 136 */[16];
	struct tty_struct *cocci_id/* drivers/usb/serial/ipw.c 132 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/ipw.c 126 */[];
}
