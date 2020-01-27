cocci_test_suite() {
	unsigned long cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 93 */;
	acpi_status cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 88 */;
	unsigned long long cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 87 */;
	struct acpi_device *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 81 */;
	struct pch_thermal_device {
		void __iomem *hw_base;
		const struct pch_dev_ops *ops;
		struct pci_dev *pdev;
		struct thermal_zone_device *tzd;
		int crt_trip_id;
		unsigned long crt_temp;
		int hot_trip_id;
		unsigned long hot_temp;
		int psv_trip_id;
		unsigned long psv_temp;
		bool bios_enabled;
	} cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 57 */;
	char cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 55 */[];
	struct pci_driver cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 410 */;
	const struct dev_pm_ops cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 405 */;
	const struct pci_device_id cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 386 */[];
	struct device *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 379 */;
	void cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 361 */;
	struct pch_thermal_device *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 304 */;
	const struct board_info *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 303 */;
	enum board_ids cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 302 */;
	const struct pci_device_id *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 300 */;
	struct pci_dev *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 299 */;
	int cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 299 */;
	const struct board_info {
		const char *name;
		const struct pch_dev_ops *ops;
	} cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 277 */[];
	enum board_ids{board_hsw, board_wpt, board_skl, board_cnl,} cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 270 */;
	struct thermal_zone_device_ops cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 264 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 248 */;
	int *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 248 */;
	enum thermal_trip_type *cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 232 */;
	const struct pch_dev_ops cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 217 */;
	struct pch_dev_ops {
		int (*hw_init)(struct pch_thermal_device *ptd, int *nr_trips);
		int (*get_temp)(struct pch_thermal_device *ptd, int *temp);
		int (*suspend)(struct pch_thermal_device *ptd);
		int (*resume)(struct pch_thermal_device *ptd);
	} cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 208 */;
	u16 cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 170 */;
	u8 cocci_id/* drivers/thermal/intel/intel_pch_thermal.c 115 */;
}
