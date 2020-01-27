cocci_test_suite() {
	u32 cocci_id/* drivers/platform/x86/panasonic-laptop.c 561 */;
	struct pcc_acpi cocci_id/* drivers/platform/x86/panasonic-laptop.c 554 */;
	struct backlight_properties cocci_id/* drivers/platform/x86/panasonic-laptop.c 540 */;
	struct device *cocci_id/* drivers/platform/x86/panasonic-laptop.c 520 */;
	unsigned long long cocci_id/* drivers/platform/x86/panasonic-laptop.c 440 */;
	int cocci_id/* drivers/platform/x86/panasonic-laptop.c 439 */;
	struct input_dev *cocci_id/* drivers/platform/x86/panasonic-laptop.c 438 */;
	struct pcc_acpi *cocci_id/* drivers/platform/x86/panasonic-laptop.c 436 */;
	void cocci_id/* drivers/platform/x86/panasonic-laptop.c 436 */;
	const struct attribute_group cocci_id/* drivers/platform/x86/panasonic-laptop.c 427 */;
	struct attribute *cocci_id/* drivers/platform/x86/panasonic-laptop.c 419 */[];
	const char *cocci_id/* drivers/platform/x86/panasonic-laptop.c 399 */;
	size_t cocci_id/* drivers/platform/x86/panasonic-laptop.c 399 */;
	struct device_attribute *cocci_id/* drivers/platform/x86/panasonic-laptop.c 398 */;
	ssize_t cocci_id/* drivers/platform/x86/panasonic-laptop.c 398 */;
	char *cocci_id/* drivers/platform/x86/panasonic-laptop.c 363 */;
	const struct backlight_ops cocci_id/* drivers/platform/x86/panasonic-laptop.c 342 */;
	struct backlight_device *cocci_id/* drivers/platform/x86/panasonic-laptop.c 306 */;
	union acpi_object *cocci_id/* drivers/platform/x86/panasonic-laptop.c 259 */;
	struct acpi_buffer cocci_id/* drivers/platform/x86/panasonic-laptop.c 258 */;
	acpi_status cocci_id/* drivers/platform/x86/panasonic-laptop.c 242 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/panasonic-laptop.c 239 */;
	struct acpi_object_list cocci_id/* drivers/platform/x86/panasonic-laptop.c 227 */;
	union acpi_object cocci_id/* drivers/platform/x86/panasonic-laptop.c 221 */[];
	struct pcc_acpi {
		acpi_handle handle;
		unsigned long num_sifr;
		int sticky_mode;
		u32 *sinf;
		struct acpi_device *device;
		struct input_dev *input_dev;
		struct backlight_device *backlight;
	} cocci_id/* drivers/platform/x86/panasonic-laptop.c 208 */;
	const struct key_entry cocci_id/* drivers/platform/x86/panasonic-laptop.c 193 */[];
	struct acpi_driver cocci_id/* drivers/platform/x86/panasonic-laptop.c 181 */;
	int cocci_id/* drivers/platform/x86/panasonic-laptop.c 177 */(struct device *dev);
	const struct acpi_device_id cocci_id/* drivers/platform/x86/panasonic-laptop.c 167 */[];
	void cocci_id/* drivers/platform/x86/panasonic-laptop.c 165 */(struct acpi_device *device,
								       u32 event);
	int cocci_id/* drivers/platform/x86/panasonic-laptop.c 163 */(struct acpi_device *device);
	enum SINF_BITS{SINF_NUM_BATTERIES=0, SINF_LCD_TYPE, SINF_AC_MAX_BRIGHT, SINF_AC_MIN_BRIGHT, SINF_AC_CUR_BRIGHT, SINF_DC_MAX_BRIGHT, SINF_DC_MIN_BRIGHT, SINF_DC_CUR_BRIGHT, SINF_MUTE, SINF_RESERVED, SINF_ENV_STATE, SINF_STICKY_KEY=0x80,} cocci_id/* drivers/platform/x86/panasonic-laptop.c 148 */;
}
