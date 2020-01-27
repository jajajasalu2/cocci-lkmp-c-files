cocci_test_suite() {
	int __init cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 914 */;
	struct platform_driver cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 906 */;
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 849 */;
	enum iproc_pinconf_ctrl_type cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 781 */;
	struct resource *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 775 */;
	struct device *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 774 */;
	struct platform_device *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 772 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 762 */[];
	enum iproc_pinconf_ctrl_type{IOCTRL_TYPE_AON=1, IOCTRL_TYPE_CDRU, IOCTRL_TYPE_INVALID,} cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 75 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 731 */;
	struct pinctrl_desc *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 730 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 715 */;
	enum iproc_pinconf_param{IPROC_PINCONF_DRIVE_STRENGTH=0, IPROC_PINCONF_BIAS_DISABLE, IPROC_PINCONF_BIAS_PULL_UP, IPROC_PINCONF_BIAS_PULL_DOWN, IPROC_PINCON_MAX,} cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 67 */;
	u16 cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 619 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 617 */;
	unsigned long *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 614 */;
	u16 *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 582 */;
	u32 cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 518 */;
	void __iomem *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 515 */;
	bool *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 513 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 459 */;
	const char *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 453 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 453 */;
	int cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 444 */;
	const enum pin_config_param cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 389 */[];
	unsigned long cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 327 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 324 */;
	void cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 313 */;
	struct irq_data *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 196 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 167 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 163 */;
	unsigned cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 155 */;
	bool cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 154 */;
	struct iproc_gpio *cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 154 */;
	unsigned int cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 154 */;
	struct iproc_gpio {
		struct device *dev;
		void __iomem *base;
		void __iomem *io_ctrl;
		enum iproc_pinconf_ctrl_type io_ctrl_type;
		raw_spinlock_t lock;
		struct irq_chip irqchip;
		struct gpio_chip gc;
		unsigned num_banks;
		bool pinmux_is_supported;
		enum pin_config_param *pinconf_disable;
		unsigned int nr_pinconf_disable;
		struct pinctrl_dev *pctl;
		struct pinctrl_desc pctldesc;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-iproc-gpio.c 100 */;
}
