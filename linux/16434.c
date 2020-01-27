cocci_test_suite() {
	const unsigned short cocci_id/* drivers/hid/hid-appleir.c 87 */[];
	struct hid_driver cocci_id/* drivers/hid/hid-appleir.c 339 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-appleir.c 329 */[];
	void cocci_id/* drivers/hid/hid-appleir.c 321 */;
	struct appleir cocci_id/* drivers/hid/hid-appleir.c 286 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-appleir.c 281 */;
	struct hid_usage *cocci_id/* drivers/hid/hid-appleir.c 276 */;
	unsigned long **cocci_id/* drivers/hid/hid-appleir.c 276 */;
	int *cocci_id/* drivers/hid/hid-appleir.c 276 */;
	struct hid_field *cocci_id/* drivers/hid/hid-appleir.c 275 */;
	unsigned short cocci_id/* drivers/hid/hid-appleir.c 261 */;
	struct appleir *cocci_id/* drivers/hid/hid-appleir.c 255 */;
	struct input_dev *cocci_id/* drivers/hid/hid-appleir.c 254 */;
	struct hid_input *cocci_id/* drivers/hid/hid-appleir.c 252 */;
	struct hid_device *cocci_id/* drivers/hid/hid-appleir.c 251 */;
	int cocci_id/* drivers/hid/hid-appleir.c 251 */;
	unsigned long cocci_id/* drivers/hid/hid-appleir.c 189 */;
	const u8 cocci_id/* drivers/hid/hid-appleir.c 186 */[];
	u8 *cocci_id/* drivers/hid/hid-appleir.c 183 */;
	struct hid_report *cocci_id/* drivers/hid/hid-appleir.c 182 */;
	struct timer_list *cocci_id/* drivers/hid/hid-appleir.c 168 */;
	struct appleir {
		struct input_dev *input_dev;
		struct hid_device *hid;
		unsigned short keymap[ARRAY_SIZE(appleir_key_table)];
		struct timer_list key_up_timer;
		spinlock_t lock;
		int current_key;
		int prev_key_idx;
	} cocci_id/* drivers/hid/hid-appleir.c 107 */;
}
