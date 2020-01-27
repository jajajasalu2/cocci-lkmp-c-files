cocci_test_suite() {
	bool cocci_id/* drivers/gpio/gpio-winbond.c 722 */;
	struct isa_driver cocci_id/* drivers/gpio/gpio-winbond.c 684 */;
	struct device *cocci_id/* drivers/gpio/gpio-winbond.c 611 */;
	unsigned int cocci_id/* drivers/gpio/gpio-winbond.c 589 */;
	unsigned long cocci_id/* drivers/gpio/gpio-winbond.c 586 */;
	int cocci_id/* drivers/gpio/gpio-winbond.c 586 */;
	const struct winbond_gpio_port_conflict *cocci_id/* drivers/gpio/gpio-winbond.c 524 */;
	const struct winbond_gpio_info *cocci_id/* drivers/gpio/gpio-winbond.c 523 */;
	void cocci_id/* drivers/gpio/gpio-winbond.c 496 */;
	struct gpio_chip cocci_id/* drivers/gpio/gpio-winbond.c 485 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-winbond.c 408 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-winbond.c 406 */;
	const struct winbond_gpio_info **cocci_id/* drivers/gpio/gpio-winbond.c 352 */;
	unsigned int *cocci_id/* drivers/gpio/gpio-winbond.c 351 */;
	const struct winbond_gpio_info cocci_id/* drivers/gpio/gpio-winbond.c 251 */[6];
	struct winbond_gpio_info {
		u8 dev;
		u8 enablereg;
		u8 enablebit;
		u8 outputreg;
		u8 outputppbit;
		u8 ioreg;
		u8 invreg;
		u8 datareg;
		struct winbond_gpio_port_conflict conflict;
	} cocci_id/* drivers/gpio/gpio-winbond.c 239 */;
	struct winbond_gpio_port_conflict {
		const char *name;
		u8 dev;
		u8 testreg;
		u8 testbit;
		bool warnonly;
	} cocci_id/* drivers/gpio/gpio-winbond.c 217 */;
	u8 cocci_id/* drivers/gpio/gpio-winbond.c 191 */;
	struct winbond_gpio_params cocci_id/* drivers/gpio/gpio-winbond.c 140 */;
	struct winbond_gpio_params {
		unsigned long base;
		unsigned long gpios;
		unsigned long ppgpios;
		unsigned long odgpios;
		bool pledgpio;
		bool beepgpio;
		bool i2cgpio;
	} cocci_id/* drivers/gpio/gpio-winbond.c 130 */;
}
