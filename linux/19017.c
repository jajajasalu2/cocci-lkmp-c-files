cocci_test_suite() {
	struct mfp_pin cocci_id/* arch/arm/plat-pxa/mfp.c 99 */[MFP_PIN_MAX];
	struct mfp_pin {
		unsigned long config;
		unsigned long mfpr_off;
		unsigned long mfpr_run;
		unsigned long mfpr_lpm;
	} cocci_id/* arch/arm/plat-pxa/mfp.c 92 */;
	struct mfp_addr_map *cocci_id/* arch/arm/plat-pxa/mfp.c 240 */;
	void __init cocci_id/* arch/arm/plat-pxa/mfp.c 240 */;
	void __iomem *cocci_id/* arch/arm/plat-pxa/mfp.c 229 */;
	unsigned long *cocci_id/* arch/arm/plat-pxa/mfp.c 161 */;
	int cocci_id/* arch/arm/plat-pxa/mfp.c 161 */;
	unsigned long cocci_id/* arch/arm/plat-pxa/mfp.c 153 */;
	struct mfp_pin *cocci_id/* arch/arm/plat-pxa/mfp.c 150 */;
	void cocci_id/* arch/arm/plat-pxa/mfp.c 150 */;
	const unsigned long cocci_id/* arch/arm/plat-pxa/mfp.c 122 */[];
}
