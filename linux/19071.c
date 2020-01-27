cocci_test_suite() {
	int cocci_id/* arch/arm/mach-footbridge/ebsa285.c 71 */;
	int __init cocci_id/* arch/arm/mach-footbridge/ebsa285.c 69 */;
	struct ebsa285_led cocci_id/* arch/arm/mach-footbridge/ebsa285.c 64 */;
	struct ebsa285_led *cocci_id/* arch/arm/mach-footbridge/ebsa285.c 63 */;
	enum led_brightness cocci_id/* arch/arm/mach-footbridge/ebsa285.c 61 */;
	struct led_classdev *cocci_id/* arch/arm/mach-footbridge/ebsa285.c 61 */;
	void cocci_id/* arch/arm/mach-footbridge/ebsa285.c 48 */;
	void __iomem *cocci_id/* arch/arm/mach-footbridge/ebsa285.c 46 */;
	unsigned char cocci_id/* arch/arm/mach-footbridge/ebsa285.c 45 */;
	const struct {
		const char *name;
		const char *trigger;
	} cocci_id/* arch/arm/mach-footbridge/ebsa285.c 36 */[];
	struct ebsa285_led {
		struct led_classdev cdev;
		u8 mask;
	} cocci_id/* arch/arm/mach-footbridge/ebsa285.c 27 */;
	const struct machine_desc cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 397 */;
}
