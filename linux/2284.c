cocci_test_suite() {
	char *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 87 */;
	struct device_attribute *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 86 */;
	ssize_t cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 85 */;
	enum proc_thermal_emum_mode_type cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 81 */;
	void __exit cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 769 */;
	int __init cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 756 */;
	struct platform_driver cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 746 */;
	const struct acpi_device_id cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 740 */[];
	struct pci_driver cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 732 */;
	const struct pci_device_id cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 712 */[];
	struct rapl_mmio_regs {
		u64 reg_unit;
		u64 regs[RAPL_DOMAIN_MAX][RAPL_DOMAIN_REG_MAX];
		int limits[RAPL_DOMAIN_MAX];
	} cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 71 */;
	enum proc_thermal_emum_mode_type{PROC_THERMAL_NONE, PROC_THERMAL_PCI, PROC_THERMAL_PLATFORM_DEV,} cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 65 */;
	struct rapl_mmio_regs *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 627 */;
	const struct pci_device_id *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 606 */;
	const struct rapl_mmio_regs cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 584 */;
	struct proc_thermal_device {
		struct device *dev;
		struct acpi_device *adev;
		struct power_config power_limits[2];
		struct int34x_thermal_zone *int340x_zone;
		struct intel_soc_dts_sensors *soc_dts;
		void __iomem *mmio_base;
	} cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 56 */;
	u64 cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 548 */;
	enum rapl_domain_type cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 530 */;
	enum rapl_domain_reg_id cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 529 */;
	void __iomem *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 506 */;
	struct reg_action *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 501 */;
	struct rapl_package *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 485 */;
	unsigned int cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 483 */;
	struct power_config {
		u32 index;
		u32 min_uw;
		u32 max_uw;
		u32 tmin_us;
		u32 tmax_us;
		u32 step_uw;
	} cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 47 */;
	struct rapl_if_priv cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 463 */;
	struct pci_dev *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 449 */;
	irqreturn_t cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 446 */;
	struct proc_thermal_device *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 411 */;
	struct platform_device *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 409 */;
	void *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 387 */;
	struct thermal_zone_device_ops *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 352 */;
	unsigned long long cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 351 */;
	acpi_status cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 350 */;
	struct acpi_device *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 349 */;
	struct proc_thermal_device **cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 346 */;
	struct device *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 345 */;
	acpi_handle cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 325 */;
	union acpi_object *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 280 */;
	struct acpi_buffer cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 279 */;
	struct thermal_zone_device_ops cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 271 */;
	int *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 260 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 259 */;
	unsigned long cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 233 */;
	u32 cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 213 */;
	int cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 211 */;
	void cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 211 */;
	size_t cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 183 */;
	const char *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 182 */;
	const struct attribute_group cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 138 */;
	struct attribute *cocci_id/* drivers/thermal/intel/int340x_thermal/processor_thermal_device.c 124 */[];
}