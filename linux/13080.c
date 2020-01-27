cocci_test_suite() {
	unsigned long *cocci_id/* drivers/soc/fsl/qe/gpio.c 83 */;
	u32 cocci_id/* drivers/soc/fsl/qe/gpio.c 57 */;
	struct qe_pio_regs __iomem *cocci_id/* drivers/soc/fsl/qe/gpio.c 56 */;
	struct qe_gpio_chip cocci_id/* drivers/soc/fsl/qe/gpio.c 41 */;
	struct gpio_chip *cocci_id/* drivers/soc/fsl/qe/gpio.c 307 */;
	struct of_mm_gpio_chip *cocci_id/* drivers/soc/fsl/qe/gpio.c 306 */;
	struct qe_gpio_chip *cocci_id/* drivers/soc/fsl/qe/gpio.c 305 */;
	int cocci_id/* drivers/soc/fsl/qe/gpio.c 304 */;
	struct device_node *cocci_id/* drivers/soc/fsl/qe/gpio.c 301 */;
	int __init cocci_id/* drivers/soc/fsl/qe/gpio.c 299 */;
	void cocci_id/* drivers/soc/fsl/qe/gpio.c 299 */;
	bool cocci_id/* drivers/soc/fsl/qe/gpio.c 252 */;
	struct qe_pio_regs *cocci_id/* drivers/soc/fsl/qe/gpio.c 248 */;
	struct qe_gpio_chip {
		struct of_mm_gpio_chip mm_gc;
		spinlock_t lock;
		unsigned long pin_flags[QE_PIO_PINS];
#define QE_PIN_REQUESTED 0
		u32 cpdata;
		struct qe_pio_regs saved_regs;
	} cocci_id/* drivers/soc/fsl/qe/gpio.c 24 */;
	const int cocci_id/* drivers/soc/fsl/qe/gpio.c 226 */;
	struct qe_pin *cocci_id/* drivers/soc/fsl/qe/gpio.c 222 */;
	struct qe_pin {
		struct qe_gpio_chip *controller;
		int num;
	} cocci_id/* drivers/soc/fsl/qe/gpio.c 141 */;
	unsigned long cocci_id/* drivers/soc/fsl/qe/gpio.c 113 */;
	unsigned int cocci_id/* drivers/soc/fsl/qe/gpio.c 109 */;
}
