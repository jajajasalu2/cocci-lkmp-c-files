cocci_test_suite() {
	const struct rcar_sysc_ch *cocci_id/* drivers/soc/renesas/rcar-sysc.c 98 */;
	u32 cocci_id/* drivers/soc/renesas/rcar-sysc.c 66 */;
	void __iomem *cocci_id/* drivers/soc/renesas/rcar-sysc.c 64 */;
	struct rcar_sysc_ch {
		u16 chan_offs;
		u8 chan_bit;
		u8 isr_bit;
	} cocci_id/* drivers/soc/renesas/rcar-sysc.c 58 */;
	u8 cocci_id/* drivers/soc/renesas/rcar-sysc.c 444 */;
	unsigned int cocci_id/* drivers/soc/renesas/rcar-sysc.c 444 */;
	struct rcar_sysc_area *cocci_id/* drivers/soc/renesas/rcar-sysc.c 443 */;
	void __init cocci_id/* drivers/soc/renesas/rcar-sysc.c 443 */;
	struct rcar_sysc_pd *cocci_id/* drivers/soc/renesas/rcar-sysc.c 397 */;
	const struct rcar_sysc_area *cocci_id/* drivers/soc/renesas/rcar-sysc.c 396 */;
	int cocci_id/* drivers/soc/renesas/rcar-sysc.c 355 */;
	struct device_node *cocci_id/* drivers/soc/renesas/rcar-sysc.c 352 */;
	struct rcar_pm_domains *cocci_id/* drivers/soc/renesas/rcar-sysc.c 351 */;
	const struct of_device_id *cocci_id/* drivers/soc/renesas/rcar-sysc.c 350 */;
	const struct rcar_sysc_info *cocci_id/* drivers/soc/renesas/rcar-sysc.c 349 */;
	int __init cocci_id/* drivers/soc/renesas/rcar-sysc.c 347 */;
	void cocci_id/* drivers/soc/renesas/rcar-sysc.c 347 */;
	struct genpd_onecell_data *cocci_id/* drivers/soc/renesas/rcar-sysc.c 345 */;
	struct rcar_pm_domains {
		struct genpd_onecell_data onecell_data;
		struct generic_pm_domain *domains[RCAR_PD_ALWAYS_ON + 1];
	} cocci_id/* drivers/soc/renesas/rcar-sysc.c 340 */;
	const struct of_device_id cocci_id/* drivers/soc/renesas/rcar-sysc.c 275 */[]__initconst;
	const char *cocci_id/* drivers/soc/renesas/rcar-sysc.c 214 */;
	bool cocci_id/* drivers/soc/renesas/rcar-sysc.c 209 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/renesas/rcar-sysc.c 193 */;
	struct rcar_sysc_pd cocci_id/* drivers/soc/renesas/rcar-sysc.c 190 */;
	struct rcar_sysc_pd {
		struct generic_pm_domain genpd;
		struct rcar_sysc_ch ch;
		unsigned int flags;
		char name[];
	} cocci_id/* drivers/soc/renesas/rcar-sysc.c 181 */;
	unsigned long cocci_id/* drivers/soc/renesas/rcar-sysc.c 103 */;
}
