cocci_test_suite() {
	u16 cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 977 */;
	u32 cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 976 */;
	unsigned long cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 975 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 974 */;
	struct chv_pinctrl *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 973 */;
	unsigned long *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 971 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 970 */;
	unsigned int cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 970 */;
	int cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 970 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 960 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 923 */;
	struct chv_pingroup {
		const char *name;
		const unsigned int *pins;
		size_t npins;
		struct chv_alternate_function altfunc;
		const struct chv_alternate_function *overrides;
		size_t noverrides;
	} cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 92 */;
	void cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 853 */;
	const struct chv_alternate_function *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 811 */;
	const struct chv_pingroup *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 792 */;
	unsigned int *constcocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 779 */;
	const char *const**cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 778 */;
	const char *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 768 */;
	struct chv_alternate_function {
		unsigned int pin;
		u8 mode;
		bool invert_oe;
	} cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 76 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 754 */;
	struct seq_file *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 721 */;
	const unsigned int **cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 712 */;
	unsigned int *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 712 */;
	const struct chv_community *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 650 */[];
	const struct intel_function cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 617 */[];
	const char *constcocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 609 */[];
	const struct chv_pingroup cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 599 */[];
	const unsigned cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 587 */[];
	const struct chv_community cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 514 */;
	const struct chv_gpio_pinrange cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 509 */[];
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 481 */[];
	const struct chv_alternate_function cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 292 */[];
	void __exit cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1890 */;
	int __init cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1884 */;
	struct platform_driver cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1874 */;
	const struct acpi_device_id cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1868 */[];
	const struct dev_pm_ops cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1863 */;
	const struct chv_pin_context *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1822 */;
	struct device *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1805 */;
	struct chv_pin_context *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1784 */;
	struct acpi_device *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1694 */;
	struct platform_device *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1691 */;
	void *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1671 */;
	acpi_physical_address cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1670 */;
	u64 *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1670 */;
	acpi_status cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1669 */;
	struct chv_pinctrl {
		struct device *dev;
		struct pinctrl_desc pctldesc;
		struct pinctrl_dev *pctldev;
		struct gpio_chip chip;
		struct irq_chip irqchip;
		void __iomem *regs;
		unsigned int irq;
		unsigned int intr_lines[16];
		const struct chv_community *community;
		u32 saved_intmask;
		struct chv_pin_context *saved_pin_context;
	} cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 162 */;
	const struct chv_gpio_pinrange *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1590 */;
	const struct chv_community *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1589 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1586 */;
	const struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1546 */;
	const struct dmi_system_id cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1503 */[];
	struct irq_chip *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1477 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1473 */;
	struct chv_pin_context {
		u32 padctrl0;
		u32 padctrl1;
	} cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 139 */;
	irq_flow_handler_t cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1385 */;
	unsigned cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1369 */;
	struct irq_data *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1318 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1307 */;
	struct chv_community {
		const char *uid;
		const struct pinctrl_pin_desc *pins;
		size_t npins;
		const struct chv_pingroup *groups;
		size_t ngroups;
		const struct intel_function *functions;
		size_t nfunctions;
		const struct chv_gpio_pinrange *gpio_ranges;
		size_t ngpio_ranges;
		size_t nirqs;
		acpi_adr_space_type acpi_space_id;
	} cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 125 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1232 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1224 */;
	const unsigned int *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1188 */;
	void __iomem *cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1119 */;
	bool cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 1117 */;
	struct chv_gpio_pinrange {
		unsigned int base;
		unsigned int npins;
	} cocci_id/* drivers/pinctrl/intel/pinctrl-cherryview.c 106 */;
}