cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/hid/hid-microsoft.c 83 */;
	unsigned long **cocci_id/* drivers/hid/hid-microsoft.c 81 */;
	int *cocci_id/* drivers/hid/hid-microsoft.c 81 */;
	struct hid_usage *cocci_id/* drivers/hid/hid-microsoft.c 80 */;
	struct hid_input *cocci_id/* drivers/hid/hid-microsoft.c 80 */;
	int cocci_id/* drivers/hid/hid-microsoft.c 80 */;
	unsigned int *cocci_id/* drivers/hid/hid-microsoft.c 60 */;
	struct xb1s_ff_report {
		__u8 report_id;
		__u8 enable;
		__u8 magnitude[MAGNITUDE_NUM];
		__u8 duration_10ms;
		__u8 start_delay_10ms;
		__u8 loop_count;
	}__packed cocci_id/* drivers/hid/hid-microsoft.c 50 */;
	struct hid_driver cocci_id/* drivers/hid/hid-microsoft.c 458 */;
	enum{MAGNITUDE_STRONG=2, MAGNITUDE_WEAK, MAGNITUDE_NUM,} cocci_id/* drivers/hid/hid-microsoft.c 44 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-microsoft.c 416 */[];
	const struct hid_device_id *cocci_id/* drivers/hid/hid-microsoft.c 368 */;
	struct xb1s_ff_report cocci_id/* drivers/hid/hid-microsoft.c 349 */;
	struct hid_input cocci_id/* drivers/hid/hid-microsoft.c 339 */;
	u32 cocci_id/* drivers/hid/hid-microsoft.c 322 */;
	struct ff_effect *cocci_id/* drivers/hid/hid-microsoft.c 311 */;
	void *cocci_id/* drivers/hid/hid-microsoft.c 310 */;
	struct ms_data {
		unsigned long quirks;
		struct hid_device *hdev;
		struct work_struct ff_worker;
		__u8 strong;
		__u8 weak;
		void *output_report_dmabuf;
	} cocci_id/* drivers/hid/hid-microsoft.c 31 */;
	__u8 *cocci_id/* drivers/hid/hid-microsoft.c 305 */;
	struct xb1s_ff_report *cocci_id/* drivers/hid/hid-microsoft.c 288 */;
	struct ms_data cocci_id/* drivers/hid/hid-microsoft.c 286 */;
	struct work_struct *cocci_id/* drivers/hid/hid-microsoft.c 284 */;
	void cocci_id/* drivers/hid/hid-microsoft.c 284 */;
	unsigned int cocci_id/* drivers/hid/hid-microsoft.c 263 */;
	unsigned long cocci_id/* drivers/hid/hid-microsoft.c 229 */;
	struct ms_data *cocci_id/* drivers/hid/hid-microsoft.c 228 */;
	__s32 cocci_id/* drivers/hid/hid-microsoft.c 226 */;
	struct hid_field *cocci_id/* drivers/hid/hid-microsoft.c 225 */;
	struct hid_device *cocci_id/* drivers/hid/hid-microsoft.c 225 */;
}
