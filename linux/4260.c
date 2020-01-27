cocci_test_suite() {
	struct quirk_entry cocci_id/* drivers/platform/x86/alienware-wmi.c 90 */;
	void __exit cocci_id/* drivers/platform/x86/alienware-wmi.c 843 */;
	void cocci_id/* drivers/platform/x86/alienware-wmi.c 843 */;
	int __init cocci_id/* drivers/platform/x86/alienware-wmi.c 774 */;
	const struct attribute_group cocci_id/* drivers/platform/x86/alienware-wmi.c 672 */;
	struct attribute *cocci_id/* drivers/platform/x86/alienware-wmi.c 667 */[];
	u32 *cocci_id/* drivers/platform/x86/alienware-wmi.c 652 */;
	struct wmax_basic_args cocci_id/* drivers/platform/x86/alienware-wmi.c 647 */;
	struct device *cocci_id/* drivers/platform/x86/alienware-wmi.c 642 */;
	ssize_t cocci_id/* drivers/platform/x86/alienware-wmi.c 642 */;
	struct quirk_entry *cocci_id/* drivers/platform/x86/alienware-wmi.c 59 */;
	struct quirk_entry {
		u8 num_zones;
		u8 hdmi_mux;
		u8 amplifier;
		u8 deepslp;
	} cocci_id/* drivers/platform/x86/alienware-wmi.c 52 */;
	union acpi_object *cocci_id/* drivers/platform/x86/alienware-wmi.c 509 */;
	u32 cocci_id/* drivers/platform/x86/alienware-wmi.c 506 */;
	int *cocci_id/* drivers/platform/x86/alienware-wmi.c 506 */;
	struct wmax_basic_args *cocci_id/* drivers/platform/x86/alienware-wmi.c 505 */;
	u8 cocci_id/* drivers/platform/x86/alienware-wmi.c 492 */;
	struct platform_device *cocci_id/* drivers/platform/x86/alienware-wmi.c 490 */;
	struct platform_zone cocci_id/* drivers/platform/x86/alienware-wmi.c 463 */;
	enum WMAX_CONTROL_STATES{WMAX_RUNNING=0xFF, WMAX_BOOTING=0, WMAX_SUSPEND=3,} cocci_id/* drivers/platform/x86/alienware-wmi.c 46 */;
	struct attribute *cocci_id/* drivers/platform/x86/alienware-wmi.c 457 */;
	struct device_attribute cocci_id/* drivers/platform/x86/alienware-wmi.c 451 */;
	char cocci_id/* drivers/platform/x86/alienware-wmi.c 432 */[10];
	size_t cocci_id/* drivers/platform/x86/alienware-wmi.c 409 */;
	enum LEGACY_CONTROL_STATES{LEGACY_RUNNING=1, LEGACY_BOOTING=0, LEGACY_SUSPEND=3,} cocci_id/* drivers/platform/x86/alienware-wmi.c 40 */;
	struct led_classdev cocci_id/* drivers/platform/x86/alienware-wmi.c 388 */;
	enum led_brightness cocci_id/* drivers/platform/x86/alienware-wmi.c 383 */;
	struct led_classdev *cocci_id/* drivers/platform/x86/alienware-wmi.c 383 */;
	struct wmax_brightness_args cocci_id/* drivers/platform/x86/alienware-wmi.c 357 */;
	enum INTERFACE_FLAGS{LEGACY, WMAX,} cocci_id/* drivers/platform/x86/alienware-wmi.c 35 */;
	acpi_size cocci_id/* drivers/platform/x86/alienware-wmi.c 295 */;
	struct wmax_led_args cocci_id/* drivers/platform/x86/alienware-wmi.c 287 */;
	struct legacy_led_args cocci_id/* drivers/platform/x86/alienware-wmi.c 286 */;
	struct acpi_buffer cocci_id/* drivers/platform/x86/alienware-wmi.c 285 */;
	char *cocci_id/* drivers/platform/x86/alienware-wmi.c 284 */;
	acpi_status cocci_id/* drivers/platform/x86/alienware-wmi.c 283 */;
	struct platform_zone *cocci_id/* drivers/platform/x86/alienware-wmi.c 280 */;
	int cocci_id/* drivers/platform/x86/alienware-wmi.c 280 */;
	struct device_attribute *cocci_id/* drivers/platform/x86/alienware-wmi.c 263 */;
	union color_union {
		struct color_platform cp;
		int package;
	} cocci_id/* drivers/platform/x86/alienware-wmi.c 243 */;
	long unsigned int cocci_id/* drivers/platform/x86/alienware-wmi.c 241 */;
	const char *cocci_id/* drivers/platform/x86/alienware-wmi.c 239 */;
	struct attribute_group cocci_id/* drivers/platform/x86/alienware-wmi.c 228 */;
	struct platform_driver cocci_id/* drivers/platform/x86/alienware-wmi.c 222 */;
	struct attribute **cocci_id/* drivers/platform/x86/alienware-wmi.c 219 */;
	struct wmax_led_args {
		u32 led_mask;
		struct color_platform colors;
		u8 state;
	}__packed cocci_id/* drivers/platform/x86/alienware-wmi.c 211 */;
	struct legacy_led_args {
		struct color_platform colors;
		u8 brightness;
		u8 state;
	}__packed cocci_id/* drivers/platform/x86/alienware-wmi.c 205 */;
	struct wmax_basic_args {
		u8 arg;
	} cocci_id/* drivers/platform/x86/alienware-wmi.c 201 */;
	struct wmax_brightness_args {
		u32 led_mask;
		u32 percentage;
	} cocci_id/* drivers/platform/x86/alienware-wmi.c 196 */;
	struct platform_zone {
		u8 location;
		struct device_attribute *attr;
		struct color_platform colors;
	} cocci_id/* drivers/platform/x86/alienware-wmi.c 190 */;
	struct color_platform {
		u8 blue;
		u8 green;
		u8 red;
	}__packed cocci_id/* drivers/platform/x86/alienware-wmi.c 184 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/alienware-wmi.c 117 */[]__initconst;
	const struct dmi_system_id *cocci_id/* drivers/platform/x86/alienware-wmi.c 111 */;
}
