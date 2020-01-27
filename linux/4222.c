cocci_test_suite() {
	void __exit cocci_id/* drivers/platform/chrome/chromeos_laptop.c 925 */;
	struct i2c_board_info cocci_id/* drivers/platform/chrome/chromeos_laptop.c 92 */;
	const struct dmi_system_id *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 881 */;
	struct chromeos_laptop *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 859 */;
	struct chromeos_laptop *__init cocci_id/* drivers/platform/chrome/chromeos_laptop.c 856 */;
	struct i2c_board_info *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 834 */;
	const struct chromeos_laptop *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 830 */;
	const unsigned short cocci_id/* drivers/platform/chrome/chromeos_laptop.c 82 */[];
	unsigned short cocci_id/* drivers/platform/chrome/chromeos_laptop.c 80 */;
	struct acpi_peripheral *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 772 */;
	int __init cocci_id/* drivers/platform/chrome/chromeos_laptop.c 768 */;
	struct resource cocci_id/* drivers/platform/chrome/chromeos_laptop.c 705 */;
	const struct dmi_dev_onboard *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 679 */;
	const struct dmi_device *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 678 */;
	const char *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 676 */;
	int __init cocci_id/* drivers/platform/chrome/chromeos_laptop.c 676 */;
	struct chromeos_laptop {
		struct i2c_peripheral *i2c_peripherals;
		unsigned int num_i2c_peripherals;
		const struct acpi_peripheral *acpi_peripherals;
		unsigned int num_acpi_peripherals;
	} cocci_id/* drivers/platform/chrome/chromeos_laptop.c 63 */;
	struct acpi_peripheral {
		char hid[ACPI_ID_LEN];
		const struct property_entry *properties;
	} cocci_id/* drivers/platform/chrome/chromeos_laptop.c 58 */;
	void *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 530 */;
	const struct dmi_system_id cocci_id/* drivers/platform/chrome/chromeos_laptop.c 523 */[]__initconst;
	struct acpi_peripheral cocci_id/* drivers/platform/chrome/chromeos_laptop.c 509 */[]__initdata;
	const u32 cocci_id/* drivers/platform/chrome/chromeos_laptop.c 482 */[]__initconst;
	struct i2c_peripheral {
		struct i2c_board_info board_info;
		unsigned short alt_addr;
		const char *dmi_name;
		unsigned long irqflags;
		struct resource irq_resource;
		enum i2c_adapter_type type;
		u32 pci_devid;
		struct i2c_client *client;
	} cocci_id/* drivers/platform/chrome/chromeos_laptop.c 44 */;
	struct i2c_peripheral cocci_id/* drivers/platform/chrome/chromeos_laptop.c 398 */[]__initdata;
	enum i2c_adapter_type{I2C_ADAPTER_SMBUS=0, I2C_ADAPTER_VGADDC, I2C_ADAPTER_PANEL, I2C_ADAPTER_DESIGNWARE,} cocci_id/* drivers/platform/chrome/chromeos_laptop.c 37 */;
	const struct property_entry cocci_id/* drivers/platform/chrome/chromeos_laptop.c 291 */[]__initconst;
	const char *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 29 */[];
	const int cocci_id/* drivers/platform/chrome/chromeos_laptop.c 275 */[]__initconst;
	struct notifier_block cocci_id/* drivers/platform/chrome/chromeos_laptop.c 227 */;
	struct device *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 208 */;
	unsigned long cocci_id/* drivers/platform/chrome/chromeos_laptop.c 206 */;
	struct notifier_block *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 205 */;
	int cocci_id/* drivers/platform/chrome/chromeos_laptop.c 164 */;
	struct acpi_device_id cocci_id/* drivers/platform/chrome/chromeos_laptop.c 163 */[2];
	const struct acpi_peripheral *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 162 */;
	bool cocci_id/* drivers/platform/chrome/chromeos_laptop.c 160 */;
	struct i2c_client *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 160 */;
	struct i2c_peripheral *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 133 */;
	struct i2c_adapter *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 131 */;
	void cocci_id/* drivers/platform/chrome/chromeos_laptop.c 131 */;
	struct pci_dev *cocci_id/* drivers/platform/chrome/chromeos_laptop.c 122 */;
	u32 cocci_id/* drivers/platform/chrome/chromeos_laptop.c 120 */;
}