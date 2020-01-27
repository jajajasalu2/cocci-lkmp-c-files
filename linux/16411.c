cocci_test_suite() {
	struct lg4ff_wheel {
		const u32 product_id;
		const signed short *ff_effects;
		const u16 min_range;
		const u16 max_range;
		void (*set_range)(struct hid_device *hid, u16 range);
	} cocci_id/* drivers/hid/hid-lg4ff.c 98 */;
	const u16 cocci_id/* drivers/hid/hid-lg4ff.c 884 */;
	const signed short cocci_id/* drivers/hid/hid-lg4ff.c 88 */[];
	const struct lg4ff_compat_mode_switch *cocci_id/* drivers/hid/hid-lg4ff.c 852 */;
	const char *cocci_id/* drivers/hid/hid-lg4ff.c 847 */;
	size_t cocci_id/* drivers/hid/hid-lg4ff.c 847 */;
	struct lg4ff_device_entry {
		spinlock_t report_lock;
		struct hid_report *report;
		struct lg4ff_wheel_data wdata;
	} cocci_id/* drivers/hid/hid-lg4ff.c 82 */;
	struct device_attribute *cocci_id/* drivers/hid/hid-lg4ff.c 798 */;
	struct device *cocci_id/* drivers/hid/hid-lg4ff.c 798 */;
	char *cocci_id/* drivers/hid/hid-lg4ff.c 798 */;
	ssize_t cocci_id/* drivers/hid/hid-lg4ff.c 798 */;
	struct lg4ff_wheel_data {
		const u32 product_id;
		u16 combine;
		u16 range;
		const u16 min_range;
		const u16 max_range;
#ifdef CONFIG_LEDS_CLASS
		u8 led_state;
		struct led_classdev *led[5];
#endif
		const u32 alternate_modes;
		const char *const real_tag;
		const char *const real_name;
		const u16 real_product_id;
		void (*set_range)(struct hid_device *hid, u16 range);
	} cocci_id/* drivers/hid/hid-lg4ff.c 64 */;
	void cocci_id/* drivers/hid/hid-lg4ff.c 61 */(struct hid_device *hid,
						      u16 range);
	s32 *cocci_id/* drivers/hid/hid-lg4ff.c 412 */;
	unsigned long cocci_id/* drivers/hid/hid-lg4ff.c 411 */;
	struct ff_effect *cocci_id/* drivers/hid/hid-lg4ff.c 406 */;
	struct lg4ff_wheel_data cocci_id/* drivers/hid/hid-lg4ff.c 392 */;
	struct lg4ff_wheel_data *const cocci_id/* drivers/hid/hid-lg4ff.c 377 */;
	const struct lg4ff_wheel *cocci_id/* drivers/hid/hid-lg4ff.c 377 */;
	void cocci_id/* drivers/hid/hid-lg4ff.c 377 */;
	u8 *cocci_id/* drivers/hid/hid-lg4ff.c 327 */;
	struct lg4ff_device_entry *cocci_id/* drivers/hid/hid-lg4ff.c 303 */;
	struct lg_drv_data *cocci_id/* drivers/hid/hid-lg4ff.c 301 */;
	struct hid_usage *cocci_id/* drivers/hid/hid-lg4ff.c 301 */;
	struct hid_field *cocci_id/* drivers/hid/hid-lg4ff.c 300 */;
	struct hid_device *cocci_id/* drivers/hid/hid-lg4ff.c 300 */;
	int cocci_id/* drivers/hid/hid-lg4ff.c 300 */;
	u16 cocci_id/* drivers/hid/hid-lg4ff.c 277 */;
	s32 cocci_id/* drivers/hid/hid-lg4ff.c 277 */;
	const struct lg4ff_compat_mode_switch cocci_id/* drivers/hid/hid-lg4ff.c 265 */;
	const struct lg4ff_wheel_ident_info *cocci_id/* drivers/hid/hid-lg4ff.c 217 */[];
	const struct lg4ff_wheel_ident_info cocci_id/* drivers/hid/hid-lg4ff.c 195 */;
	const struct lg4ff_alternate_mode cocci_id/* drivers/hid/hid-lg4ff.c 163 */[];
	struct led_classdev *cocci_id/* drivers/hid/hid-lg4ff.c 1473 */;
	const struct lg4ff_multimode_wheel cocci_id/* drivers/hid/hid-lg4ff.c 145 */[];
	void *cocci_id/* drivers/hid/hid-lg4ff.c 1410 */;
	struct led_classdev cocci_id/* drivers/hid/hid-lg4ff.c 1404 */;
	const struct lg4ff_wheel cocci_id/* drivers/hid/hid-lg4ff.c 131 */[];
	struct hid_input cocci_id/* drivers/hid/hid-lg4ff.c 1273 */;
	const struct lg4ff_multimode_wheel *cocci_id/* drivers/hid/hid-lg4ff.c 1262 */;
	const struct usb_device_descriptor *cocci_id/* drivers/hid/hid-lg4ff.c 1260 */;
	struct hid_report cocci_id/* drivers/hid/hid-lg4ff.c 1259 */;
	struct hid_report *cocci_id/* drivers/hid/hid-lg4ff.c 1259 */;
	struct list_head *cocci_id/* drivers/hid/hid-lg4ff.c 1258 */;
	struct input_dev *cocci_id/* drivers/hid/hid-lg4ff.c 1257 */;
	struct hid_input *cocci_id/* drivers/hid/hid-lg4ff.c 1256 */;
	struct lg4ff_alternate_mode {
		const u16 product_id;
		const char *tag;
		const char *name;
	} cocci_id/* drivers/hid/hid-lg4ff.c 125 */;
	u16 *cocci_id/* drivers/hid/hid-lg4ff.c 1215 */;
	u32 cocci_id/* drivers/hid/hid-lg4ff.c 1182 */;
	struct lg4ff_multimode_wheel {
		const u16 product_id;
		const u32 alternate_modes;
		const char *real_tag;
		const char *real_name;
	} cocci_id/* drivers/hid/hid-lg4ff.c 118 */;
	enum led_brightness cocci_id/* drivers/hid/hid-lg4ff.c 1150 */;
	struct lg4ff_wheel_ident_info {
		const u32 modes;
		const u16 mask;
		const u16 result;
		const u16 real_product_id;
	} cocci_id/* drivers/hid/hid-lg4ff.c 111 */;
	u8 cocci_id/* drivers/hid/hid-lg4ff.c 1082 */;
	struct lg4ff_compat_mode_switch {
		const u8 cmd_count;
		const u8 cmd[];
	} cocci_id/* drivers/hid/hid-lg4ff.c 106 */;
}
