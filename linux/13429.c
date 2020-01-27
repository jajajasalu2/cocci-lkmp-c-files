cocci_test_suite() {
	u32 cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 82 */;
	struct tm6000_IR {
		struct tm6000_core *dev;
		struct rc_dev *rc;
		char name[32];
		char phys[32];
		int polling;
		struct delayed_work work;
		u8 wait:1;
		u8 pwled:2;
		u8 submit_urb:1;
		struct urb *int_urb;
		u64 rc_proto;
	} cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 46 */;
	struct tm6000_ir_poll_result {
		u16 rc_data;
	} cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 42 */;
	u64 cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 404 */;
	void cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 364 */;
	struct tm6000_core *cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 325 */;
	struct tm6000_IR *cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 324 */;
	struct rc_dev *cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 322 */;
	int cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 322 */;
	u64 *cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 306 */;
	unsigned int cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 24 */;
	u8 cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 221 */[2];
	struct tm6000_IR cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 218 */;
	struct work_struct *cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 216 */;
	char *cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 188 */;
	struct urb *cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 184 */;
	enum rc_proto cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 157 */;
	u8 cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 155 */;
	const char *cocci_id/* drivers/media/usb/tm6000/tm6000-input.c 153 */;
}
