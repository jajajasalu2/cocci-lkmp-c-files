cocci_test_suite() {
	void cocci_id/* drivers/hid/hid-cougar.c 87 */;
	struct cougar {
		bool special_intf;
		struct cougar_shared *shared;
	} cocci_id/* drivers/hid/hid-cougar.c 76 */;
	struct cougar_shared {
		struct list_head list;
		struct kref kref;
		bool enabled;
		struct hid_device *dev;
		struct input_dev *input;
	} cocci_id/* drivers/hid/hid-cougar.c 68 */;
	unsigned char cocci_id/* drivers/hid/hid-cougar.c 48 */[][2];
	struct hid_driver cocci_id/* drivers/hid/hid-cougar.c 333 */;
	struct hid_device_id cocci_id/* drivers/hid/hid-cougar.c 324 */[];
	const struct kernel_param_ops cocci_id/* drivers/hid/hid-cougar.c 318 */;
	const struct kernel_param *cocci_id/* drivers/hid/hid-cougar.c 305 */;
	const char *cocci_id/* drivers/hid/hid-cougar.c 304 */;
	unsigned char cocci_id/* drivers/hid/hid-cougar.c 263 */;
	u8 *cocci_id/* drivers/hid/hid-cougar.c 259 */;
	struct hid_report *cocci_id/* drivers/hid/hid-cougar.c 258 */;
	unsigned int cocci_id/* drivers/hid/hid-cougar.c 199 */;
	struct hid_input *cocci_id/* drivers/hid/hid-cougar.c 198 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-cougar.c 195 */;
	bool cocci_id/* drivers/hid/hid-cougar.c 19 */;
	struct cougar_shared *cocci_id/* drivers/hid/hid-cougar.c 162 */;
	struct cougar *cocci_id/* drivers/hid/hid-cougar.c 160 */;
	struct hid_device *cocci_id/* drivers/hid/hid-cougar.c 159 */;
	int cocci_id/* drivers/hid/hid-cougar.c 159 */;
	void *cocci_id/* drivers/hid/hid-cougar.c 145 */;
	struct cougar_shared cocci_id/* drivers/hid/hid-cougar.c 136 */;
	struct kref *cocci_id/* drivers/hid/hid-cougar.c 133 */;
	unsigned int *cocci_id/* drivers/hid/hid-cougar.c 107 */;
	__u8 *cocci_id/* drivers/hid/hid-cougar.c 106 */;
}
