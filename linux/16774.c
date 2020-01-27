cocci_test_suite() {
	struct f30_data {
		bool has_extended_pattern;
		bool has_mappable_buttons;
		bool has_led;
		bool has_gpio;
		bool has_haptic;
		bool has_gpio_driver_control;
		bool has_mech_mouse_btns;
		u8 gpioled_count;
		u8 register_count;
		struct rmi_f30_ctrl_data ctrl[RMI_F30_CTRL_MAX_REG_BLOCKS];
		u8 ctrl_regs[RMI_F30_CTRL_REGS_MAX_SIZE];
		u32 ctrl_regs_size;
		u8 data_regs[RMI_F30_CTRL_MAX_BYTES];
		u16 *gpioled_key_map;
		struct input_dev *input;
		struct rmi_function *f03;
		bool trackstick_buttons;
	} cocci_id/* drivers/input/rmi4/rmi_f30.c 57 */;
	struct rmi_f30_ctrl_data {
		int address;
		int length;
		u8 *regs;
	} cocci_id/* drivers/input/rmi4/rmi_f30.c 51 */;
	struct rmi_function_handler cocci_id/* drivers/input/rmi4/rmi_f30.c 397 */;
	struct rmi_device *cocci_id/* drivers/input/rmi4/rmi_f30.c 368 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_f30.c 303 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_f30.c 277 */[RMI_F30_QUERY_SIZE];
	u8 *cocci_id/* drivers/input/rmi4/rmi_f30.c 275 */;
	unsigned int cocci_id/* drivers/input/rmi4/rmi_f30.c 229 */;
	struct input_dev *cocci_id/* drivers/input/rmi4/rmi_f30.c 228 */;
	bool cocci_id/* drivers/input/rmi4/rmi_f30.c 210 */;
	struct rmi_f30_ctrl_data *cocci_id/* drivers/input/rmi4/rmi_f30.c 210 */;
	u8 **cocci_id/* drivers/input/rmi4/rmi_f30.c 201 */;
	int *cocci_id/* drivers/input/rmi4/rmi_f30.c 201 */;
	const struct rmi_device_platform_data *cocci_id/* drivers/input/rmi4/rmi_f30.c 167 */;
	struct rmi_driver *cocci_id/* drivers/input/rmi4/rmi_f30.c 166 */;
	struct rmi_driver_data *cocci_id/* drivers/input/rmi4/rmi_f30.c 126 */;
	struct f30_data *cocci_id/* drivers/input/rmi4/rmi_f30.c 125 */;
	struct rmi_function *cocci_id/* drivers/input/rmi4/rmi_f30.c 124 */;
	irqreturn_t cocci_id/* drivers/input/rmi4/rmi_f30.c 122 */;
	void *cocci_id/* drivers/input/rmi4/rmi_f30.c 122 */;
	int cocci_id/* drivers/input/rmi4/rmi_f30.c 122 */;
	u16 cocci_id/* drivers/input/rmi4/rmi_f30.c 106 */;
	void cocci_id/* drivers/input/rmi4/rmi_f30.c 101 */;
}
