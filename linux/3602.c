cocci_test_suite() {
	struct device_node *cocci_id/* drivers/firmware/arm_sdei.c 964 */;
	const char *cocci_id/* drivers/firmware/arm_sdei.c 963 */;
	struct platform_device *cocci_id/* drivers/firmware/arm_sdei.c 961 */;
	struct ghes *cocci_id/* drivers/firmware/arm_sdei.c 894 */;
	const struct dev_pm_ops cocci_id/* drivers/firmware/arm_sdei.c 847 */;
	struct device *cocci_id/* drivers/firmware/arm_sdei.c 802 */;
	struct notifier_block cocci_id/* drivers/firmware/arm_sdei.c 777 */;
	struct notifier_block *cocci_id/* drivers/firmware/arm_sdei.c 754 */;
	struct sdei_crosscall_args {
		struct sdei_event *event;
		atomic_t errors;
		int first_error;
	} cocci_id/* drivers/firmware/arm_sdei.c 75 */;
	struct sdei_crosscall_args cocci_id/* drivers/firmware/arm_sdei.c 700 */;
	unsigned int cocci_id/* drivers/firmware/arm_sdei.c 697 */;
	struct sdei_event *cocci_id/* drivers/firmware/arm_sdei.c 582 */;
	struct sdei_registered_event *cocci_id/* drivers/firmware/arm_sdei.c 570 */;
	u64 cocci_id/* drivers/firmware/arm_sdei.c 559 */;
	struct sdei_event {
		struct list_head list;
		bool reregister;
		bool reenable;
		u32 event_num;
		u8 type;
		u8 priority;
		union {
			struct sdei_registered_event *registered;
			struct sdei_registered_event __percpu *private_registered;
		};
	} cocci_id/* drivers/firmware/arm_sdei.c 47 */;
	struct sdei_crosscall_args *cocci_id/* drivers/firmware/arm_sdei.c 438 */;
	int cocci_id/* drivers/firmware/arm_sdei.c 437 */;
	void *cocci_id/* drivers/firmware/arm_sdei.c 435 */;
	void cocci_id/* drivers/firmware/arm_sdei.c 435 */;
	void (*cocci_id/* drivers/firmware/arm_sdei.c 39 */)(unsigned long function_id,
							     unsigned long arg0,
							     unsigned long arg1,
							     unsigned long arg2,
							     unsigned long arg3,
							     unsigned long arg4,
							     struct arm_smccc_res *res);
	struct sdei_registered_event cocci_id/* drivers/firmware/arm_sdei.c 252 */;
	struct sdei_registered_event __percpu *cocci_id/* drivers/firmware/arm_sdei.c 250 */;
	sdei_event_callback *cocci_id/* drivers/firmware/arm_sdei.c 202 */;
	u32 cocci_id/* drivers/firmware/arm_sdei.c 188 */;
	struct arm_smccc_res cocci_id/* drivers/firmware/arm_sdei.c 145 */;
	u64 *cocci_id/* drivers/firmware/arm_sdei.c 142 */;
	unsigned long cocci_id/* drivers/firmware/arm_sdei.c 139 */;
	struct arm_smccc_res *cocci_id/* drivers/firmware/arm_sdei.c 125 */;
	mm_segment_t cocci_id/* drivers/firmware/arm_sdei.c 1142 */;
	struct pt_regs *cocci_id/* drivers/firmware/arm_sdei.c 1138 */;
	int __init cocci_id/* drivers/firmware/arm_sdei.c 1123 */;
	struct acpi_table_header *cocci_id/* drivers/firmware/arm_sdei.c 1101 */;
	acpi_status cocci_id/* drivers/firmware/arm_sdei.c 1099 */;
	bool __init cocci_id/* drivers/firmware/arm_sdei.c 1097 */;
	struct platform_driver cocci_id/* drivers/firmware/arm_sdei.c 1072 */;
	const struct of_device_id cocci_id/* drivers/firmware/arm_sdei.c 1067 */[];
}
