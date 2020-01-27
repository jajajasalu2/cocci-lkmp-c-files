cocci_test_suite() {
	char cocci_id/* drivers/media/usb/au0828/au0828-input.c 86 */;
	u8 cocci_id/* drivers/media/usb/au0828/au0828-input.c 83 */;
	struct i2c_msg cocci_id/* drivers/media/usb/au0828/au0828-input.c 63 */[2];
	char cocci_id/* drivers/media/usb/au0828/au0828-input.c 62 */[3];
	char *cocci_id/* drivers/media/usb/au0828/au0828-input.c 59 */;
	struct i2c_msg cocci_id/* drivers/media/usb/au0828/au0828-input.c 47 */;
	char cocci_id/* drivers/media/usb/au0828/au0828-input.c 46 */[];
	u16 cocci_id/* drivers/media/usb/au0828/au0828-input.c 277 */;
	struct rc_dev *cocci_id/* drivers/media/usb/au0828/au0828-input.c 275 */;
	const unsigned short cocci_id/* drivers/media/usb/au0828/au0828-input.c 258 */[];
	struct au0828_dev *cocci_id/* drivers/media/usb/au0828/au0828-input.c 255 */;
	void cocci_id/* drivers/media/usb/au0828/au0828-input.c 242 */;
	struct au0828_rc {
		struct au0828_dev *dev;
		struct rc_dev *rc;
		char name[32];
		char phys[32];
		int polling;
		struct delayed_work work;
		u16 i2c_dev_addr;
		int (*get_key_i2c)(struct au0828_rc *ir);
	} cocci_id/* drivers/media/usb/au0828/au0828-input.c 23 */;
	struct au0828_rc cocci_id/* drivers/media/usb/au0828/au0828-input.c 218 */;
	struct work_struct *cocci_id/* drivers/media/usb/au0828/au0828-input.c 216 */;
	bool cocci_id/* drivers/media/usb/au0828/au0828-input.c 119 */;
	struct ir_raw_event cocci_id/* drivers/media/usb/au0828/au0828-input.c 116 */;
	unsigned char cocci_id/* drivers/media/usb/au0828/au0828-input.c 115 */[40];
	struct au0828_rc *cocci_id/* drivers/media/usb/au0828/au0828-input.c 113 */;
	int cocci_id/* drivers/media/usb/au0828/au0828-input.c 113 */;
}
