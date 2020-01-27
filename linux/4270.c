cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 85 */;
	irqreturn_t cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 82 */;
	void *cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 82 */;
	struct mid_pb_ddata *cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 68 */;
	int cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 68 */;
	u8 cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 56 */;
	int *cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 52 */;
	struct mid_pb_ddata {
		struct device *dev;
		int irq;
		struct input_dev *input;
		unsigned short mirqlvl1_addr;
		unsigned short pbstat_addr;
		u8 pbstat_mask;
		int (*setup)(struct mid_pb_ddata *ddata);
	} cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 42 */;
	struct platform_driver cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 212 */;
	const struct x86_cpu_id *cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 123 */;
	struct platform_device *cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 121 */;
	const struct x86_cpu_id cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 115 */[];
	const struct mid_pb_ddata cocci_id/* drivers/platform/x86/intel_mid_powerbtn.c 102 */;
}
