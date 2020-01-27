cocci_test_suite() {
	const struct apple_key_translation cocci_id/* drivers/hid/hid-apple.c 87 */[];
	struct apple_key_translation {
		u16 from;
		u16 to;
		u8 flags;
	} cocci_id/* drivers/hid/hid-apple.c 60 */;
	struct hid_driver cocci_id/* drivers/hid/hid-apple.c 579 */;
	struct apple_sc {
		unsigned long quirks;
		unsigned int fn_on;
	DECLARE_BITMAP(pressed_numlock,KEY_CNT)
		;
	} cocci_id/* drivers/hid/hid-apple.c 54 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-apple.c 411 */[];
	unsigned int cocci_id/* drivers/hid/hid-apple.c 378 */;
	unsigned long cocci_id/* drivers/hid/hid-apple.c 376 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-apple.c 374 */;
	unsigned long **cocci_id/* drivers/hid/hid-apple.c 357 */;
	int *cocci_id/* drivers/hid/hid-apple.c 357 */;
	struct hid_input *cocci_id/* drivers/hid/hid-apple.c 355 */;
	struct input_dev *cocci_id/* drivers/hid/hid-apple.c 318 */;
	void cocci_id/* drivers/hid/hid-apple.c 318 */;
	unsigned int *cocci_id/* drivers/hid/hid-apple.c 305 */;
	__u8 *cocci_id/* drivers/hid/hid-apple.c 304 */;
	struct apple_sc *cocci_id/* drivers/hid/hid-apple.c 279 */;
	__s32 cocci_id/* drivers/hid/hid-apple.c 277 */;
	struct hid_usage *cocci_id/* drivers/hid/hid-apple.c 277 */;
	struct hid_field *cocci_id/* drivers/hid/hid-apple.c 276 */;
	struct hid_device *cocci_id/* drivers/hid/hid-apple.c 276 */;
	int cocci_id/* drivers/hid/hid-apple.c 276 */;
	bool cocci_id/* drivers/hid/hid-apple.c 183 */;
	u16 cocci_id/* drivers/hid/hid-apple.c 166 */;
	const struct apple_key_translation *cocci_id/* drivers/hid/hid-apple.c 165 */;
}
