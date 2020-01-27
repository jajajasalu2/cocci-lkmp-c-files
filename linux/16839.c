cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 95 */;
	struct mc13xxx *cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 94 */;
	const struct mc13xxx_buttons_platform_data *cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 93 */;
	struct platform_device *cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 91 */;
	struct mc13783_pwrb *cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 57 */;
	irqreturn_t cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 55 */;
	void *cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 55 */;
	int cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 55 */;
	struct mc13783_pwrb {
		struct input_dev *pwr;
		struct mc13xxx *mc13783;
#define MC13783_PWRB_B1_POL_INVERT (1 << 0)
#define MC13783_PWRB_B2_POL_INVERT (1 << 1)
#define MC13783_PWRB_B3_POL_INVERT (1 << 2)
					int flags;
		unsigned short keymap[3];
	} cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 32 */;
	struct platform_driver cocci_id/* drivers/input/misc/mc13783-pwrbutton.c 256 */;
}
