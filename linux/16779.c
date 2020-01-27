cocci_test_suite() {
	struct rmi_function_handler cocci_id/* drivers/input/rmi4/rmi_f01.c 711 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_f01.c 686 */;
	struct rmi_device *cocci_id/* drivers/input/rmi4/rmi_f01.c 684 */;
	struct rmi_function *cocci_id/* drivers/input/rmi4/rmi_f01.c 683 */;
	irqreturn_t cocci_id/* drivers/input/rmi4/rmi_f01.c 681 */;
	void *cocci_id/* drivers/input/rmi4/rmi_f01.c 681 */;
	int cocci_id/* drivers/input/rmi4/rmi_f01.c 681 */;
	void cocci_id/* drivers/input/rmi4/rmi_f01.c 577 */;
	struct f01_basic_properties {
		u8 manufacturer_id;
		bool has_lts;
		bool has_adjustable_doze;
		bool has_adjustable_doze_holdoff;
		char dom[11];
		u8 product_id[RMI_PRODUCT_ID_LENGTH + 1];
		u16 productinfo;
		u32 firmware_id;
		u32 package_id;
	} cocci_id/* drivers/input/rmi4/rmi_f01.c 46 */;
	struct f01_data cocci_id/* drivers/input/rmi4/rmi_f01.c 399 */;
	u16 cocci_id/* drivers/input/rmi4/rmi_f01.c 389 */;
	u32 *cocci_id/* drivers/input/rmi4/rmi_f01.c 346 */;
	struct rmi_device_platform_data *cocci_id/* drivers/input/rmi4/rmi_f01.c 340 */;
	const struct attribute_group cocci_id/* drivers/input/rmi4/rmi_f01.c 334 */;
	struct attribute *cocci_id/* drivers/input/rmi4/rmi_f01.c 325 */[];
	u32 cocci_id/* drivers/input/rmi4/rmi_f01.c 317 */;
	struct f01_data *cocci_id/* drivers/input/rmi4/rmi_f01.c 279 */;
	struct rmi_driver_data *cocci_id/* drivers/input/rmi4/rmi_f01.c 278 */;
	struct device_attribute *cocci_id/* drivers/input/rmi4/rmi_f01.c 276 */;
	char *cocci_id/* drivers/input/rmi4/rmi_f01.c 276 */;
	struct device *cocci_id/* drivers/input/rmi4/rmi_f01.c 275 */;
	ssize_t cocci_id/* drivers/input/rmi4/rmi_f01.c 275 */;
	const char *cocci_id/* drivers/input/rmi4/rmi_f01.c 254 */;
	bool cocci_id/* drivers/input/rmi4/rmi_f01.c 142 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_f01.c 139 */[RMI_F01_BASIC_QUERY_LEN];
	struct f01_basic_properties *cocci_id/* drivers/input/rmi4/rmi_f01.c 137 */;
	struct f01_data {
		struct f01_basic_properties properties;
		struct f01_device_control device_control;
		u16 doze_interval_addr;
		u16 wakeup_threshold_addr;
		u16 doze_holdoff_addr;
		bool suspended;
		bool old_nosleep;
		unsigned int num_of_irq_regs;
	} cocci_id/* drivers/input/rmi4/rmi_f01.c 121 */;
	struct f01_device_control {
		u8 ctrl0;
		u8 doze_interval;
		u8 wakeup_threshold;
		u8 doze_holdoff;
	} cocci_id/* drivers/input/rmi4/rmi_f01.c 114 */;
}
