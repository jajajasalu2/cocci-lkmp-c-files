cocci_test_suite() {
	int cocci_id/* arch/arm/mach-s3c64xx/irq-pm.c 85 */;
	struct irq_grp_save *cocci_id/* arch/arm/mach-s3c64xx/irq-pm.c 84 */;
	void cocci_id/* arch/arm/mach-s3c64xx/irq-pm.c 82 */;
	u32 cocci_id/* arch/arm/mach-s3c64xx/irq-pm.c 59 */[SERIAL_SAMSUNG_UARTS];
	struct irq_grp_save {
		u32 fltcon;
		u32 con;
		u32 mask;
	} cocci_id/* arch/arm/mach-s3c64xx/irq-pm.c 47 */[5];
	struct sleep_save cocci_id/* arch/arm/mach-s3c64xx/irq-pm.c 36 */[];
	struct syscore_ops cocci_id/* arch/arm/mach-s3c64xx/irq-pm.c 103 */;
}
