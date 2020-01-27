cocci_test_suite() {
	struct pcs_conf_vals cocci_id/* drivers/pinctrl/pinctrl-single.c 934 */;
	const struct pcs_conf_type cocci_id/* drivers/pinctrl/pinctrl-single.c 904 */[];
	struct pcs_conf_vals *cocci_id/* drivers/pinctrl/pinctrl-single.c 903 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-single.c 902 */;
	struct pcs_function {
		const char *name;
		struct pcs_func_vals *vals;
		unsigned nvals;
		const char **pgnames;
		int npgnames;
		struct pcs_conf_vals *conf;
		int nconfs;
		struct list_head node;
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 88 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-single.c 874 */[4];
	int cocci_id/* drivers/pinctrl/pinctrl-single.c 856 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-single.c 855 */[2];
	const char *cocci_id/* drivers/pinctrl/pinctrl-single.c 852 */;
	struct pcs_device *cocci_id/* drivers/pinctrl/pinctrl-single.c 851 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-single.c 851 */;
	unsigned long **cocci_id/* drivers/pinctrl/pinctrl-single.c 843 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-single.c 832 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-single.c 831 */;
	struct pcs_conf_vals **cocci_id/* drivers/pinctrl/pinctrl-single.c 831 */;
	void cocci_id/* drivers/pinctrl/pinctrl-single.c 831 */;
	struct pcs_function *cocci_id/* drivers/pinctrl/pinctrl-single.c 767 */;
	const char **cocci_id/* drivers/pinctrl/pinctrl-single.c 764 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-single.c 763 */;
	struct pcs_func_vals *cocci_id/* drivers/pinctrl/pinctrl-single.c 762 */;
	struct pcs_function **cocci_id/* drivers/pinctrl/pinctrl-single.c 760 */;
	struct pcs_conf_type {
		const char *name;
		enum pin_config_param param;
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 74 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-single.c 677 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/pinctrl-single.c 661 */;
	struct pcs_soc_data *cocci_id/* drivers/pinctrl/pinctrl-single.c 660 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-single.c 641 */;
	struct pcs_conf_vals {
		enum pin_config_param param;
		unsigned val;
		unsigned enable;
		unsigned disable;
		unsigned mask;
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 61 */;
	const unsigned *cocci_id/* drivers/pinctrl/pinctrl-single.c 588 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-single.c 529 */;
	struct pcs_func_vals {
		void __iomem *reg;
		unsigned val;
		unsigned mask;
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 46 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-single.c 444 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-single.c 421 */;
	struct pcs_gpiofunc_range cocci_id/* drivers/pinctrl/pinctrl-single.c 392 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-single.c 379 */;
	struct function_desc *cocci_id/* drivers/pinctrl/pinctrl-single.c 317 */;
	const struct pinctrl_setting_mux *cocci_id/* drivers/pinctrl/pinctrl-single.c 316 */;
	struct pin_desc *cocci_id/* drivers/pinctrl/pinctrl-single.c 315 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-single.c 302 */;
	int cocci_id/* drivers/pinctrl/pinctrl-single.c 298 */(struct pinctrl_dev *pctldev,
							       struct device_node *np_config,
							       struct pinctrl_map **map,
							       unsigned *num_maps);
	struct pinctrl_map *cocci_id/* drivers/pinctrl/pinctrl-single.c 290 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-single.c 289 */;
	size_t cocci_id/* drivers/pinctrl/pinctrl-single.c 277 */;
	struct seq_file *cocci_id/* drivers/pinctrl/pinctrl-single.c 271 */;
	void __maybe_unused cocci_id/* drivers/pinctrl/pinctrl-single.c 255 */;
	void __iomem *cocci_id/* drivers/pinctrl/pinctrl-single.c 240 */;
	unsigned __maybe_unused cocci_id/* drivers/pinctrl/pinctrl-single.c 240 */;
	struct lock_class_key cocci_id/* drivers/pinctrl/pinctrl-single.c 226 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-single.c 216 */[];
	int cocci_id/* drivers/pinctrl/pinctrl-single.c 213 */(struct pinctrl_dev *pctldev,
							       unsigned pin,
							       unsigned long *configs,
							       unsigned num_configs);
	int cocci_id/* drivers/pinctrl/pinctrl-single.c 211 */(struct pinctrl_dev *pctldev,
							       unsigned pin,
							       unsigned long *config);
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-single.c 1950 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-single.c 1938 */[];
	const struct pcs_soc_data cocci_id/* drivers/pinctrl/pinctrl-single.c 1934 */;
	const struct pcs_soc_data *cocci_id/* drivers/pinctrl/pinctrl-single.c 1757 */;
	struct resource *cocci_id/* drivers/pinctrl/pinctrl-single.c 1755 */;
	struct pcs_pdata *cocci_id/* drivers/pinctrl/pinctrl-single.c 1754 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-single.c 1751 */;
	__be32 *cocci_id/* drivers/pinctrl/pinctrl-single.c 1736 */;
	struct pcs_device {
		struct resource *res;
		void __iomem *base;
		void *saved_vals;
		unsigned size;
		struct device *dev;
		struct device_node *np;
		struct pinctrl_dev *pctl;
		unsigned flags;
#define PCS_CONTEXT_LOSS_OFF (1 << 3)
#define PCS_QUIRK_SHARED_IRQ (1 << 2)
#define PCS_FEAT_IRQ (1 << 1)
#define PCS_FEAT_PINCONF (1 << 0)
						struct property *missing_nr_pinctrl_cells;
		struct pcs_soc_data socdata;
		raw_spinlock_t lock;
		struct mutex mutex;
		unsigned width;
		unsigned fmask;
		unsigned fshift;
		unsigned foff;
		unsigned fmax;
		bool bits_per_mux;
		unsigned bits_per_pin;
		struct pcs_data pins;
		struct list_head gpiofuncs;
		struct list_head irqs;
		struct irq_chip chip;
		struct irq_domain *domain;
		struct pinctrl_desc desc;
		unsigned (*read)(void __iomem *reg);
		void (*write)(unsigned val, void __iomem *reg);
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 173 */;
	struct property *cocci_id/* drivers/pinctrl/pinctrl-single.c 1716 */;
	pm_message_t cocci_id/* drivers/pinctrl/pinctrl-single.c 1668 */;
	u16 *cocci_id/* drivers/pinctrl/pinctrl-single.c 1644 */;
	u32 *cocci_id/* drivers/pinctrl/pinctrl-single.c 1643 */;
	u64 *cocci_id/* drivers/pinctrl/pinctrl-single.c 1642 */;
	const struct irq_domain_ops cocci_id/* drivers/pinctrl/pinctrl-single.c 1536 */;
	irq_hw_number_t cocci_id/* drivers/pinctrl/pinctrl-single.c 1508 */;
	struct irq_domain *cocci_id/* drivers/pinctrl/pinctrl-single.c 1507 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/pinctrl-single.c 1498 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/pinctrl-single.c 1495 */;
	irqreturn_t cocci_id/* drivers/pinctrl/pinctrl-single.c 1480 */;
	void *cocci_id/* drivers/pinctrl/pinctrl-single.c 1480 */;
	struct pcs_interrupt cocci_id/* drivers/pinctrl/pinctrl-single.c 1458 */;
	struct pcs_interrupt *cocci_id/* drivers/pinctrl/pinctrl-single.c 1455 */;
	struct pcs_device cocci_id/* drivers/pinctrl/pinctrl-single.c 1453 */;
	struct list_head *cocci_id/* drivers/pinctrl/pinctrl-single.c 1450 */;
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-single.c 1403 */;
	const bool cocci_id/* drivers/pinctrl/pinctrl-single.c 1366 */;
	struct pcs_interrupt {
		void __iomem *reg;
		irq_hw_number_t hwirq;
		unsigned int irq;
		struct list_head node;
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 1352 */;
	struct pcs_soc_data {
		unsigned flags;
		int irq;
		unsigned irq_enable_mask;
		unsigned irq_status_mask;
		void (*rearm)(void);
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 135 */;
	struct pcs_gpiofunc_range *cocci_id/* drivers/pinctrl/pinctrl-single.c 1321 */;
	struct of_phandle_args cocci_id/* drivers/pinctrl/pinctrl-single.c 1320 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/pinctrl-single.c 1232 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-single.c 1232 */;
	struct pcs_data {
		struct pinctrl_pin_desc *pa;
		int cur;
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 122 */;
	struct pcs_gpiofunc_range {
		unsigned offset;
		unsigned npins;
		unsigned gpiofunc;
		struct list_head node;
	} cocci_id/* drivers/pinctrl/pinctrl-single.c 106 */;
}
