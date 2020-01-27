cocci_test_suite() {
	struct ad714x_touchpad_drv *cocci_id/* drivers/input/misc/ad714x.c 977 */;
	struct ad714x_wheel_drv *cocci_id/* drivers/input/misc/ad714x.c 976 */;
	struct ad714x_slider_drv *cocci_id/* drivers/input/misc/ad714x.c 975 */;
	unsigned long cocci_id/* drivers/input/misc/ad714x.c 972 */;
	struct ad714x_platform_data *cocci_id/* drivers/input/misc/ad714x.c 969 */;
	struct input_dev *cocci_id/* drivers/input/misc/ad714x.c 967 */;
	ad714x_write_t cocci_id/* drivers/input/misc/ad714x.c 963 */;
	ad714x_read_t cocci_id/* drivers/input/misc/ad714x.c 963 */;
	u16 cocci_id/* drivers/input/misc/ad714x.c 962 */;
	struct device *cocci_id/* drivers/input/misc/ad714x.c 962 */;
	irqreturn_t cocci_id/* drivers/input/misc/ad714x.c 939 */;
	void *cocci_id/* drivers/input/misc/ad714x.c 939 */;
	struct ad714x_touchpad_drv {
		int x_highest_stage;
		int x_flt_pos;
		int x_abs_pos;
		int y_highest_stage;
		int y_flt_pos;
		int y_abs_pos;
		int left_ep;
		int left_ep_val;
		int right_ep;
		int right_ep_val;
		int top_ep;
		int top_ep_val;
		int bottom_ep;
		int bottom_ep_val;
		enum ad714x_device_state state;
		struct input_dev *input;
	} cocci_id/* drivers/input/misc/ad714x.c 86 */;
	struct ad714x_wheel_drv {
		int abs_pos;
		int flt_pos;
		int pre_highest_stage;
		int highest_stage;
		enum ad714x_device_state state;
		struct input_dev *input;
	} cocci_id/* drivers/input/misc/ad714x.c 77 */;
	struct ad714x_slider_drv {
		int highest_stage;
		int abs_pos;
		int flt_pos;
		enum ad714x_device_state state;
		struct input_dev *input;
	} cocci_id/* drivers/input/misc/ad714x.c 69 */;
	enum ad714x_device_state{IDLE, JITTER, ACTIVE, SPACE,} cocci_id/* drivers/input/misc/ad714x.c 67 */;
	struct ad714x_button_drv *cocci_id/* drivers/input/misc/ad714x.c 216 */;
	struct ad714x_button_plat *cocci_id/* drivers/input/misc/ad714x.c 215 */;
	struct ad714x_chip *cocci_id/* drivers/input/misc/ad714x.c 213 */;
	int cocci_id/* drivers/input/misc/ad714x.c 213 */;
	void cocci_id/* drivers/input/misc/ad714x.c 213 */;
	unsigned short cocci_id/* drivers/input/misc/ad714x.c 1168 */;
	struct ad714x_driver_data {
		struct ad714x_slider_drv *slider;
		struct ad714x_wheel_drv *wheel;
		struct ad714x_touchpad_drv *touchpad;
		struct ad714x_button_drv *button;
	} cocci_id/* drivers/input/misc/ad714x.c 114 */;
	struct ad714x_touchpad_plat *cocci_id/* drivers/input/misc/ad714x.c 1092 */;
	struct ad714x_wheel_plat *cocci_id/* drivers/input/misc/ad714x.c 1062 */;
	struct ad714x_button_drv {
		enum ad714x_device_state state;
		struct input_dev *input;
	} cocci_id/* drivers/input/misc/ad714x.c 105 */;
	struct ad714x_slider_plat *cocci_id/* drivers/input/misc/ad714x.c 1032 */;
}
