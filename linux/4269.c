cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/platform/x86/acerhdf.c 83 */;
	void __exit cocci_id/* drivers/platform/x86/acerhdf.c 798 */;
	char cocci_id/* drivers/platform/x86/acerhdf.c 78 */[16];
	unsigned int cocci_id/* drivers/platform/x86/acerhdf.c 74 */;
	struct fancmd cocci_id/* drivers/platform/x86/acerhdf.c 687 */;
	const struct bios_settings *cocci_id/* drivers/platform/x86/acerhdf.c 622 */;
	const char *cocci_id/* drivers/platform/x86/acerhdf.c 621 */;
	int __init cocci_id/* drivers/platform/x86/acerhdf.c 619 */;
	struct platform_driver cocci_id/* drivers/platform/x86/acerhdf.c 594 */;
	const struct dev_pm_ops cocci_id/* drivers/platform/x86/acerhdf.c 589 */;
	struct device *cocci_id/* drivers/platform/x86/acerhdf.c 568 */;
	const struct thermal_cooling_device_ops cocci_id/* drivers/platform/x86/acerhdf.c 561 */;
	unsigned long cocci_id/* drivers/platform/x86/acerhdf.c 527 */;
	unsigned long *cocci_id/* drivers/platform/x86/acerhdf.c 513 */;
	struct thermal_zone_device_ops cocci_id/* drivers/platform/x86/acerhdf.c 487 */;
	int *cocci_id/* drivers/platform/x86/acerhdf.c 480 */;
	enum thermal_trip_type *cocci_id/* drivers/platform/x86/acerhdf.c 443 */;
	enum thermal_device_mode cocci_id/* drivers/platform/x86/acerhdf.c 432 */;
	enum thermal_device_mode *cocci_id/* drivers/platform/x86/acerhdf.c 414 */;
	struct thermal_cooling_device *cocci_id/* drivers/platform/x86/acerhdf.c 368 */;
	struct thermal_zone_device *cocci_id/* drivers/platform/x86/acerhdf.c 367 */;
	int cocci_id/* drivers/platform/x86/acerhdf.c 367 */;
	unsigned char cocci_id/* drivers/platform/x86/acerhdf.c 299 */;
	void cocci_id/* drivers/platform/x86/acerhdf.c 297 */;
	u8 cocci_id/* drivers/platform/x86/acerhdf.c 284 */;
	struct thermal_zone_params cocci_id/* drivers/platform/x86/acerhdf.c 266 */;
	const struct bios_settings cocci_id/* drivers/platform/x86/acerhdf.c 145 */[]__initconst;
	struct ctrl_settings cocci_id/* drivers/platform/x86/acerhdf.c 142 */;
	struct ctrl_settings {
		u8 fanreg;
		u8 tempreg;
		struct fancmd cmd;
		int mcmd_enable;
	} cocci_id/* drivers/platform/x86/acerhdf.c 135 */;
	struct bios_settings {
		const char *vendor;
		const char *product;
		const char *version;
		u8 fanreg;
		u8 tempreg;
		struct fancmd cmd;
		int mcmd_enable;
	} cocci_id/* drivers/platform/x86/acerhdf.c 124 */;
	const struct manualcmd cocci_id/* drivers/platform/x86/acerhdf.c 118 */;
	struct manualcmd {
		u8 mreg;
		u8 moff;
	} cocci_id/* drivers/platform/x86/acerhdf.c 112 */;
	struct fancmd {
		u8 cmd_off;
		u8 cmd_auto;
	} cocci_id/* drivers/platform/x86/acerhdf.c 107 */;
}
