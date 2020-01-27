cocci_test_suite() {
	struct device *cocci_id/* drivers/input/rmi4/rmi_f03.c 97 */;
	unsigned char cocci_id/* drivers/input/rmi4/rmi_f03.c 74 */;
	struct serio *cocci_id/* drivers/input/rmi4/rmi_f03.c 62 */;
	void cocci_id/* drivers/input/rmi4/rmi_f03.c 59 */;
	struct rmi_function_handler cocci_id/* drivers/input/rmi4/rmi_f03.c 315 */;
	struct f03_data {
		struct rmi_function *fn;
		struct serio *serio;
		bool serio_registered;
		unsigned int overwrite_buttons;
		u8 device_count;
		u8 rx_queue_length;
	} cocci_id/* drivers/input/rmi4/rmi_f03.c 28 */;
	unsigned int cocci_id/* drivers/input/rmi4/rmi_f03.c 255 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_f03.c 253 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_f03.c 252 */[RMI_F03_QUEUE_LENGTH * RMI_F03_OB_SIZE];
	const u8 cocci_id/* drivers/input/rmi4/rmi_f03.c 251 */;
	const u16 cocci_id/* drivers/input/rmi4/rmi_f03.c 250 */;
	struct f03_data *cocci_id/* drivers/input/rmi4/rmi_f03.c 249 */;
	struct rmi_driver_data *cocci_id/* drivers/input/rmi4/rmi_f03.c 248 */;
	struct rmi_device *cocci_id/* drivers/input/rmi4/rmi_f03.c 247 */;
	struct rmi_function *cocci_id/* drivers/input/rmi4/rmi_f03.c 246 */;
	irqreturn_t cocci_id/* drivers/input/rmi4/rmi_f03.c 244 */;
	void *cocci_id/* drivers/input/rmi4/rmi_f03.c 244 */;
	int cocci_id/* drivers/input/rmi4/rmi_f03.c 244 */;
	struct f03_data cocci_id/* drivers/input/rmi4/rmi_f03.c 204 */;
	struct serio cocci_id/* drivers/input/rmi4/rmi_f03.c 174 */;
	size_t cocci_id/* drivers/input/rmi4/rmi_f03.c 102 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_f03.c 101 */[RMI_F03_DEVICE_COUNT * RMI_F03_BYTES_PER_DEVICE];
}
