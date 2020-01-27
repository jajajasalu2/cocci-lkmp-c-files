cocci_test_suite() {
	unsigned int cocci_id/* drivers/soc/renesas/rmobile-sysc.c 79 */;
	struct rmobile_pm_domain *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 77 */;
	int cocci_id/* drivers/soc/renesas/rmobile-sysc.c 77 */;
	struct rmobile_pm_domain cocci_id/* drivers/soc/renesas/rmobile-sysc.c 45 */;
	struct rmobile_pm_domain {
		struct generic_pm_domain genpd;
		struct dev_power_governor *gov;
		int (*suspend)(void);
		void __iomem *base;
		unsigned int bit_shift;
	} cocci_id/* drivers/soc/renesas/rmobile-sysc.c 34 */;
	bool cocci_id/* drivers/soc/renesas/rmobile-sysc.c 317 */;
	u32 cocci_id/* drivers/soc/renesas/rmobile-sysc.c 288 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 282 */;
	void __iomem *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 280 */;
	int __init cocci_id/* drivers/soc/renesas/rmobile-sysc.c 280 */;
	const char *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 231 */;
	enum pd_types __init cocci_id/* drivers/soc/renesas/rmobile-sysc.c 217 */;
	const struct device_node *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 217 */;
	const struct of_device_id *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 194 */;
	void cocci_id/* drivers/soc/renesas/rmobile-sysc.c 191 */;
	enum pd_types cocci_id/* drivers/soc/renesas/rmobile-sysc.c 163 */;
	struct device_node *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 163 */;
	void __init cocci_id/* drivers/soc/renesas/rmobile-sysc.c 163 */;
	void *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 156 */;
	const struct of_device_id cocci_id/* drivers/soc/renesas/rmobile-sysc.c 155 */[]__initconst;
	struct special_pd {
		struct device_node *pd;
		enum pd_types type;
	} cocci_id/* drivers/soc/renesas/rmobile-sysc.c 148 */[MAX_NUM_SPECIAL_PDS]__initdata;
	enum pd_types{PD_NORMAL, PD_CPU, PD_CONSOLE, PD_DEBUG, PD_MEMCTL,} cocci_id/* drivers/soc/renesas/rmobile-sysc.c 138 */;
	struct dev_power_governor *cocci_id/* drivers/soc/renesas/rmobile-sysc.c 114 */;
}
