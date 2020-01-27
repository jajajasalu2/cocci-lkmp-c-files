cocci_test_suite() {
	void __exit cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 929 */;
	int __init cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 924 */;
	struct em28xx_ops cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 915 */;
	unsigned char cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 86 */;
	u16 cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 704 */;
	u64 cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 703 */;
	struct usb_device *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 699 */;
	unsigned int cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 660 */;
	const struct em28xx_button *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 629 */;
	bool cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 624 */;
	void cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 621 */;
	struct em28xx_IR {
		struct em28xx *dev;
		struct rc_dev *rc;
		char phys[32];
		int polling;
		struct delayed_work work;
		unsigned int full_code:1;
		unsigned int last_readcount;
		u64 rc_proto;
		struct i2c_client *i2c_client;
		int (*get_key_i2c)(struct i2c_client *ir,
				   enum rc_proto *protocol, u32 *scancode);
		int (*get_key)(struct em28xx_IR *ir,
			       struct em28xx_ir_poll_result *r);
	} cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 59 */;
	struct input_dev *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 588 */;
	const struct em28xx_led *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 514 */;
	struct em28xx cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 510 */;
	struct em28xx_ir_poll_result {
		unsigned int toggle_bit:1;
		unsigned int read_count:7;
		enum rc_proto protocol;
		u32 scancode;
	} cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 51 */;
	const unsigned short cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 489 */[];
	u8 cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 426 */;
	u64 *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 394 */;
	struct rc_dev *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 394 */;
	struct em28xx_IR cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 368 */;
	struct work_struct *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 366 */;
	struct em28xx_ir_poll_result cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 326 */;
	enum rc_proto cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 306 */;
	u32 cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 305 */;
	u8 cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 252 */[5];
	u8 cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 209 */[3];
	struct em28xx *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 207 */;
	struct em28xx_ir_poll_result *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 205 */;
	struct em28xx_IR *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 204 */;
	int cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 204 */;
	struct i2c_msg cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 168 */[];
	unsigned char cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 147 */[3];
	unsigned char cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 116 */[2];
	u32 *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 114 */;
	enum rc_proto *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 114 */;
	struct i2c_client *cocci_id/* drivers/media/usb/em28xx/em28xx-input.c 113 */;
}
