cocci_test_suite() {
	unsigned short cocci_id/* drivers/platform/x86/fujitsu-tablet.c 62 */[KEYMAP_LEN]__initdata;
	void __exit cocci_id/* drivers/platform/x86/fujitsu-tablet.c 529 */;
	struct acpi_driver cocci_id/* drivers/platform/x86/fujitsu-tablet.c 505 */;
	struct device *cocci_id/* drivers/platform/x86/fujitsu-tablet.c 496 */;
	acpi_status cocci_id/* drivers/platform/x86/fujitsu-tablet.c 447 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/fujitsu-tablet.c 445 */;
	int cocci_id/* drivers/platform/x86/fujitsu-tablet.c 445 */;
	struct acpi_resource *cocci_id/* drivers/platform/x86/fujitsu-tablet.c 422 */;
	struct fujitsu_config {
		unsigned short keymap[KEYMAP_LEN];
		unsigned int quirks;
	} cocci_id/* drivers/platform/x86/fujitsu-tablet.c 38 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/fujitsu-tablet.c 328 */[]__initconst;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/fujitsu-tablet.c 32 */[];
	int __init cocci_id/* drivers/platform/x86/fujitsu-tablet.c 313 */;
	const struct dmi_system_id *cocci_id/* drivers/platform/x86/fujitsu-tablet.c 306 */;
	void __init cocci_id/* drivers/platform/x86/fujitsu-tablet.c 306 */;
	unsigned int cocci_id/* drivers/platform/x86/fujitsu-tablet.c 273 */;
	unsigned long cocci_id/* drivers/platform/x86/fujitsu-tablet.c 272 */;
	irqreturn_t cocci_id/* drivers/platform/x86/fujitsu-tablet.c 270 */;
	void *cocci_id/* drivers/platform/x86/fujitsu-tablet.c 270 */;
	struct input_dev *cocci_id/* drivers/platform/x86/fujitsu-tablet.c 224 */;
	const char *cocci_id/* drivers/platform/x86/fujitsu-tablet.c 221 */;
	const u8 cocci_id/* drivers/platform/x86/fujitsu-tablet.c 179 */;
	u8 cocci_id/* drivers/platform/x86/fujitsu-tablet.c 169 */;
	void cocci_id/* drivers/platform/x86/fujitsu-tablet.c 169 */;
	struct {
		struct input_dev *idev;
		struct fujitsu_config config;
		unsigned long prev_keymask;
		char phys[21];
		int irq;
		int io_base;
		int io_length;
	} cocci_id/* drivers/platform/x86/fujitsu-tablet.c 157 */;
}
