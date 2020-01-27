cocci_test_suite() {
	struct acpi_ac {
		struct power_supply *charger;
		struct power_supply_desc charger_desc;
		struct acpi_device *device;
		unsigned long long state;
		struct notifier_block battery_nb;
	} cocci_id/* drivers/acpi/ac.c 91 */;
	struct acpi_driver cocci_id/* drivers/acpi/ac.c 78 */;
	int cocci_id/* drivers/acpi/ac.c 76 */;
	void *cocci_id/* drivers/acpi/ac.c 71 */(struct proc_dir_entry *acpi_ac_dir);
	struct proc_dir_entry *cocci_id/* drivers/acpi/ac.c 70 */(void);
	int cocci_id/* drivers/acpi/ac.c 65 */(struct device *dev);
	const struct acpi_ac_bl cocci_id/* drivers/acpi/ac.c 59 */[];
	const struct acpi_device_id cocci_id/* drivers/acpi/ac.c 52 */[];
	struct acpi_ac_bl {
		const char *hid;
		int hrv;
	} cocci_id/* drivers/acpi/ac.c 47 */;
	void __exit cocci_id/* drivers/acpi/ac.c 467 */;
	void cocci_id/* drivers/acpi/ac.c 467 */;
	void cocci_id/* drivers/acpi/ac.c 45 */(struct acpi_device *device,
						u32 event);
	unsigned int cocci_id/* drivers/acpi/ac.c 431 */;
	int cocci_id/* drivers/acpi/ac.c 43 */(struct acpi_device *device);
	unsigned cocci_id/* drivers/acpi/ac.c 387 */;
	struct device *cocci_id/* drivers/acpi/ac.c 384 */;
	struct acpi_ac cocci_id/* drivers/acpi/ac.c 334 */;
	struct acpi_ac *cocci_id/* drivers/acpi/ac.c 328 */;
	struct power_supply_config cocci_id/* drivers/acpi/ac.c 326 */;
	struct acpi_device *cocci_id/* drivers/acpi/ac.c 324 */;
	const struct dmi_system_id cocci_id/* drivers/acpi/ac.c 296 */[]__initconst;
	const struct dmi_system_id *cocci_id/* drivers/acpi/ac.c 290 */;
	int __init cocci_id/* drivers/acpi/ac.c 290 */;
	struct acpi_bus_event *cocci_id/* drivers/acpi/ac.c 268 */;
	void *cocci_id/* drivers/acpi/ac.c 265 */;
	unsigned long cocci_id/* drivers/acpi/ac.c 265 */;
	struct notifier_block *cocci_id/* drivers/acpi/ac.c 264 */;
	u32 cocci_id/* drivers/acpi/ac.c 228 */;
	struct proc_dir_entry *cocci_id/* drivers/acpi/ac.c 191 */;
	struct seq_file *cocci_id/* drivers/acpi/ac.c 160 */;
	enum power_supply_property cocci_id/* drivers/acpi/ac.c 149 */[];
	union power_supply_propval *cocci_id/* drivers/acpi/ac.c 129 */;
	enum power_supply_property cocci_id/* drivers/acpi/ac.c 128 */;
	struct power_supply *cocci_id/* drivers/acpi/ac.c 127 */;
	acpi_status cocci_id/* drivers/acpi/ac.c 107 */;
}
