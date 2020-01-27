cocci_test_suite() {
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 944 */;
	struct platform_device *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 940 */;
	struct cygnus_mux_log cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 921 */;
	unsigned int cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 918 */;
	struct cygnus_mux_log *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 917 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 909 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 900 */;
	unsigned long cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 882 */;
	u32 cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 881 */;
	struct cygnus_gpio_mux *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 880 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 876 */;
	void cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 875 */;
	struct cygnus_pin_function {
		const char *name;
		const char *const*groups;
		unsigned num_groups;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 87 */;
	const struct cygnus_gpio_mux *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 852 */;
	const struct cygnus_mux *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 780 */;
	const struct cygnus_pin_group *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 777 */;
	const struct cygnus_pin_function *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 776 */;
	struct cygnus_pinctrl *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 767 */;
	unsigned *constcocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 765 */;
	const char *const**cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 764 */;
	unsigned cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 763 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 762 */;
	int cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 762 */;
	const char *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 754 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 738 */;
	struct seq_file *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 733 */;
	struct cygnus_pin_group {
		const char *name;
		const unsigned *pins;
		unsigned num_pins;
		struct cygnus_mux mux;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 73 */;
	unsigned *cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 722 */;
	const unsigned **cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 721 */;
	const struct cygnus_pin_function cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 659 */[];
	const char *constcocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 606 */[];
	struct cygnus_mux_log {
		struct cygnus_mux mux;
		bool is_configured;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 60 */;
	const struct cygnus_pin_group cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 499 */[];
	struct cygnus_mux {
		unsigned int offset;
		unsigned int shift;
		unsigned int alt;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 47 */;
	const unsigned cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 370 */[];
	struct cygnus_pin cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 164 */[];
	struct cygnus_pin {
		unsigned pin;
		char *name;
		struct cygnus_gpio_mux gpio_mux;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 144 */;
	struct cygnus_gpio_mux {
		int is_supported;
		unsigned int offset;
		unsigned int shift;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 131 */;
	struct cygnus_pinctrl {
		struct pinctrl_dev *pctl;
		struct device *dev;
		void __iomem *base0;
		void __iomem *base1;
		const struct cygnus_pin_group *groups;
		unsigned num_groups;
		const struct cygnus_pin_function *functions;
		unsigned num_functions;
		struct cygnus_mux_log *mux_log;
		spinlock_t lock;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 107 */;
	int __init cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 1014 */;
	struct platform_driver cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 1005 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/bcm/pinctrl-cygnus-mux.c 1000 */[];
}
