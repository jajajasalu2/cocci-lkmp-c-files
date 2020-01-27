cocci_test_suite() {
	enum visorinput_dev_type{visorinput_keyboard, visorinput_mouse,} cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 94 */;
	struct visor_input_channel_data {
		u32 n_input_reports;
		union {
			struct {
				u16 x_res;
				u16 y_res;
			} mouse;
			struct {
				u32 flags;
			} keyboard;
		};
	}__packed cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 81 */;
	struct visor_driver cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 767 */;
	struct visor_channeltype_descriptor cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 760 */[];
	struct visor_inputreport {
		u64 seq_no;
		struct visor_inputactivity activity;
	}__packed cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 75 */;
	visorbus_state_complete_func cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 695 */;
	struct visor_inputactivity {
		u16 action;
		u16 arg1;
		u16 arg2;
		u16 arg3;
	}__packed cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 68 */;
	struct visor_inputreport cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 604 */;
	int cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 583 */;
	struct input_dev *cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 543 */;
	void cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 543 */;
	const guid_t *cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 495 */;
	struct channel_header cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 443 */;
	struct visor_input_channel_data cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 404 */;
	unsigned int cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 402 */;
	enum visorinput_dev_type cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 399 */;
	struct visorinput_devdata *cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 398 */;
	struct visor_device *cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 398 */;
	unsigned char *cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 321 */;
	void *cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 320 */;
	const unsigned char cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 244 */[KEYCODE_TABLE_BYTES];
	const guid_t cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 117 */;
	struct visorinput_devdata {
		struct visor_device *dev;
		struct mutex lock_visor_dev;
		struct input_dev *visorinput_dev;
		bool paused;
		bool interrupts_enabled;
		unsigned int keycode_table_bytes;
		unsigned char keycode_table[0];
	} cocci_id/* drivers/staging/unisys/visorinput/visorinput.c 104 */;
}
