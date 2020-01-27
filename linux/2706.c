cocci_test_suite() {
	uint cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 90 */;
	struct i2c_diolan_u2c {
		u8 obuffer[DIOLAN_OUTBUF_LEN];
		u8 ibuffer[DIOLAN_INBUF_LEN];
		int ep_in,ep_out;
		struct usb_device *usb_dev;
		struct usb_interface *interface;
		struct i2c_adapter adapter;
		int olen;
		int ocount;
	} cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 79 */;
	struct usb_driver cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 509 */;
	struct usb_interface *cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 498 */;
	struct usb_host_interface *cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 441 */;
	const struct usb_device_id *cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 439 */;
	const struct usb_device_id cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 425 */[];
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 418 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 412 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 341 */;
	u32 *cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 292 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 288 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 281 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 248 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 235 */;
	bool cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 234 */;
	int cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 202 */;
	struct i2c_diolan_u2c *cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 200 */;
	void cocci_id/* drivers/i2c/busses/i2c-diolan-u2c.c 200 */;
}
