cocci_test_suite() {
	const char **cocci_id/* drivers/pinctrl/pinctrl-rza1.c 986 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 985 */;
	struct rza1_mux_conf *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 982 */;
	struct rza1_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 981 */;
	struct rza1_swio_pin {
		u16 pin:4;
		u16 port:4;
		u16 func:4;
		u16 input:1;
	} cocci_id/* drivers/pinctrl/pinctrl-rza1.c 98 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 979 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/pinctrl-rza1.c 978 */;
	struct rza1_bidir_entry {
		const unsigned int npins;
		const struct rza1_bidir_pin *pins;
	} cocci_id/* drivers/pinctrl/pinctrl-rza1.c 90 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-rza1.c 893 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 889 */;
	struct property *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 853 */;
	int cocci_id/* drivers/pinctrl/pinctrl-rza1.c 850 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/pinctrl-rza1.c 831 */;
	struct rza1_bidir_pin {
		u8 pin:4;
		u8 func:4;
	} cocci_id/* drivers/pinctrl/pinctrl-rza1.c 81 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 783 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-rza1.c 631 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-rza1.c 608 */;
	void __iomem *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 590 */;
	struct rza1_port *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 587 */;
	u16 cocci_id/* drivers/pinctrl/pinctrl-rza1.c 577 */;
	const struct rza1_swio_entry *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 549 */;
	const struct rza1_pinmux_conf *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 547 */;
	const struct rza1_swio_pin *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 525 */;
	const struct rza1_bidir_pin *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 508 */;
	const struct rza1_bidir_entry *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 505 */;
	struct rza1_pinctrl {
		struct device *dev;
		struct mutex mutex;
		void __iomem *base;
		unsigned int nport;
		struct rza1_port *ports;
		struct pinctrl_pin_desc *pins;
		struct pinctrl_desc desc;
		struct pinctrl_dev *pctl;
		const void *data;
	} cocci_id/* drivers/pinctrl/pinctrl-rza1.c 482 */;
	struct rza1_port {
		spinlock_t lock;
		unsigned int id;
		void __iomem *base;
		struct pinctrl_pin_desc *pins;
	} cocci_id/* drivers/pinctrl/pinctrl-rza1.c 462 */;
	struct rza1_mux_conf {
		u16 id;
		u8 port;
		u8 pin;
		u8 mux_func;
		u8 mux_flags;
		u8 value;
	} cocci_id/* drivers/pinctrl/pinctrl-rza1.c 443 */;
	const struct rza1_pinmux_conf cocci_id/* drivers/pinctrl/pinctrl-rza1.c 297 */;
	const struct rza1_swio_entry cocci_id/* drivers/pinctrl/pinctrl-rza1.c 292 */[];
	const struct rza1_bidir_entry cocci_id/* drivers/pinctrl/pinctrl-rza1.c 280 */[RZA1_NPORTS];
	const struct rza1_swio_pin cocci_id/* drivers/pinctrl/pinctrl-rza1.c 258 */[];
	int __init cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1416 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1408 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1394 */[];
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1359 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1294 */;
	const struct rza1_bidir_pin cocci_id/* drivers/pinctrl/pinctrl-rza1.c 125 */[];
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1246 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1186 */;
	struct of_phandle_args cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1184 */;
	struct rza1_pinmux_conf {
		const struct rza1_bidir_entry *bidir_entries;
		const struct rza1_swio_entry *swio_entries;
	} cocci_id/* drivers/pinctrl/pinctrl-rza1.c 116 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1152 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1152 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1140 */;
	struct group_desc *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1117 */;
	struct function_desc *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1116 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1092 */;
	struct pinctrl_map *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1087 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1086 */;
	void cocci_id/* drivers/pinctrl/pinctrl-rza1.c 1086 */;
	struct rza1_swio_entry {
		const unsigned int npins;
		const struct rza1_swio_pin *pins;
	} cocci_id/* drivers/pinctrl/pinctrl-rza1.c 108 */;
}
