cocci_test_suite() {
	struct thermal_device_info {
		unsigned int chnl_addr;
		int direct;
		long curr_temp;
	} cocci_id/* drivers/platform/x86/intel_mid_thermal.c 76 */;
	struct platform_info {
		struct platform_device *pdev;
		struct thermal_zone_device *tzd[MSIC_THERMAL_SENSORS];
	} cocci_id/* drivers/platform/x86/intel_mid_thermal.c 71 */;
	struct platform_driver cocci_id/* drivers/platform/x86/intel_mid_thermal.c 540 */;
	const struct platform_device_id cocci_id/* drivers/platform/x86/intel_mid_thermal.c 534 */[];
	struct platform_info cocci_id/* drivers/platform/x86/intel_mid_thermal.c 469 */;
	struct platform_info *cocci_id/* drivers/platform/x86/intel_mid_thermal.c 467 */;
	char *cocci_id/* drivers/platform/x86/intel_mid_thermal.c 461 */[MSIC_THERMAL_SENSORS];
	struct platform_device *cocci_id/* drivers/platform/x86/intel_mid_thermal.c 459 */;
	struct thermal_zone_device_ops cocci_id/* drivers/platform/x86/intel_mid_thermal.c 448 */;
	struct thermal_device_info cocci_id/* drivers/platform/x86/intel_mid_thermal.c 389 */;
	struct thermal_device_info *cocci_id/* drivers/platform/x86/intel_mid_thermal.c 386 */;
	u16 cocci_id/* drivers/platform/x86/intel_mid_thermal.c 335 */;
	u8 cocci_id/* drivers/platform/x86/intel_mid_thermal.c 334 */;
	struct device *cocci_id/* drivers/platform/x86/intel_mid_thermal.c 332 */;
	void cocci_id/* drivers/platform/x86/intel_mid_thermal.c 298 */;
	uint8_t cocci_id/* drivers/platform/x86/intel_mid_thermal.c 216 */;
	struct thermal_zone_device *cocci_id/* drivers/platform/x86/intel_mid_thermal.c 161 */;
	uint16_t cocci_id/* drivers/platform/x86/intel_mid_thermal.c 119 */;
	int *cocci_id/* drivers/platform/x86/intel_mid_thermal.c 119 */;
	int cocci_id/* drivers/platform/x86/intel_mid_thermal.c 119 */;
}
