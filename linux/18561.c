cocci_test_suite() {
	const struct wakeup_source_info cocci_id/* arch/arm/mach-at91/pm.c 95 */[];
	struct wakeup_source_info {
		unsigned int pmc_fsmr_bit;
		unsigned int shdwc_mr_bit;
		bool set_polarity;
	} cocci_id/* arch/arm/mach-at91/pm.c 89 */;
	substring_t cocci_id/* arch/arm/mach-at91/pm.c 853 */[MAX_OPT_ARGS];
	char *cocci_id/* arch/arm/mach-at91/pm.c 850 */;
	struct at91_pm_bu {
		int suspended;
		unsigned long reserved;
		phys_addr_t canary;
		phys_addr_t resume;
	} *cocci_id/* arch/arm/mach-at91/pm.c 82 */;
	const struct pmc_info *cocci_id/* arch/arm/mach-at91/pm.c 761 */;
	void (*cocci_id/* arch/arm/mach-at91/pm.c 757 */)(void);
	void __init cocci_id/* arch/arm/mach-at91/pm.c 757 */;
	const struct of_device_id cocci_id/* arch/arm/mach-at91/pm.c 742 */[]__initconst;
	const struct pmc_info cocci_id/* arch/arm/mach-at91/pm.c 735 */[]__initconst;
	struct pmc_info {
		unsigned long uhp_udp_mask;
	} cocci_id/* arch/arm/mach-at91/pm.c 731 */;
	struct at91_pm_bu cocci_id/* arch/arm/mach-at91/pm.c 662 */;
	struct platform_device *cocci_id/* arch/arm/mach-at91/pm.c 627 */;
	struct gen_pool *cocci_id/* arch/arm/mach-at91/pm.c 625 */;
	int __init cocci_id/* arch/arm/mach-at91/pm.c 623 */;
	bool __init cocci_id/* arch/arm/mach-at91/pm.c 617 */;
	unsigned long cocci_id/* arch/arm/mach-at91/pm.c 575 */;
	phys_addr_t cocci_id/* arch/arm/mach-at91/pm.c 574 */;
	const match_table_t cocci_id/* arch/arm/mach-at91/pm.c 53 */;
	const struct ramc_info *cocci_id/* arch/arm/mach-at91/pm.c 525 */;
	void *cocci_id/* arch/arm/mach-at91/pm.c 524 */;
	int cocci_id/* arch/arm/mach-at91/pm.c 523 */;
	const struct of_device_id *cocci_id/* arch/arm/mach-at91/pm.c 522 */;
	struct device_node *cocci_id/* arch/arm/mach-at91/pm.c 521 */;
	const struct ramc_info cocci_id/* arch/arm/mach-at91/pm.c 504 */[]__initconst;
	struct ramc_info {
		void (*idle)(void);
		unsigned int memctrl;
	} cocci_id/* arch/arm/mach-at91/pm.c 499 */;
	struct at91_soc_pm cocci_id/* arch/arm/mach-at91/pm.c 46 */;
	u32 cocci_id/* arch/arm/mach-at91/pm.c 410 */;
	void cocci_id/* arch/arm/mach-at91/pm.c 406 */;
	struct at91_soc_pm {
		int (*config_shdwc_ws)(void __iomem *shdwc, u32 *mode,
				       u32 *polarity);
		int (*config_pmc_ws)(void __iomem *pmc, u32 mode,
				     u32 polarity);
		const struct of_device_id *ws_ids;
		struct at91_pm_data data;
	} cocci_id/* arch/arm/mach-at91/pm.c 39 */;
	struct platform_device cocci_id/* arch/arm/mach-at91/pm.c 377 */;
	const struct platform_suspend_ops cocci_id/* arch/arm/mach-at91/pm.c 370 */;
	void cocci_id/* arch/arm/mach-at91/pm.c 36 */(void);
	void cocci_id/* arch/arm/mach-at91/pm.c 283 */(struct at91_pm_data *pm_data);
	void (*cocci_id/* arch/arm/mach-at91/pm.c 282 */)(struct at91_pm_data *);
	suspend_state_t cocci_id/* arch/arm/mach-at91/pm.c 215 */;
	void __iomem *cocci_id/* arch/arm/mach-at91/pm.c 205 */;
	u32 *cocci_id/* arch/arm/mach-at91/pm.c 184 */;
	const struct wakeup_source_info *cocci_id/* arch/arm/mach-at91/pm.c 129 */;
	bool cocci_id/* arch/arm/mach-at91/pm.c 127 */;
	unsigned int cocci_id/* arch/arm/mach-at91/pm.c 127 */;
	const struct of_device_id cocci_id/* arch/arm/mach-at91/pm.c 116 */[];
}
