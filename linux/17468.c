cocci_test_suite() {
	long cocci_id/* arch/powerpc/platforms/pseries/ras.c 791 */;
	struct machine_check_event cocci_id/* arch/powerpc/platforms/pseries/ras.c 772 */;
	struct machine_check_event *cocci_id/* arch/powerpc/platforms/pseries/ras.c 712 */;
	char *cocci_id/* arch/powerpc/platforms/pseries/ras.c 700 */;
	struct irq_work *cocci_id/* arch/powerpc/platforms/pseries/ras.c 695 */;
	u8 cocci_id/* arch/powerpc/platforms/pseries/ras.c 507 */;
	struct pseries_mc_errorlog *cocci_id/* arch/powerpc/platforms/pseries/ras.c 503 */;
	struct pseries_errorlog *cocci_id/* arch/powerpc/platforms/pseries/ras.c 502 */;
	unsigned long cocci_id/* arch/powerpc/platforms/pseries/ras.c 501 */;
	struct mce_error_info cocci_id/* arch/powerpc/platforms/pseries/ras.c 500 */;
	__be64 cocci_id/* arch/powerpc/platforms/pseries/ras.c 478 */;
	int cocci_id/* arch/powerpc/platforms/pseries/ras.c 445 */;
	unsigned long *cocci_id/* arch/powerpc/platforms/pseries/ras.c 425 */;
	struct rtas_error_log *cocci_id/* arch/powerpc/platforms/pseries/ras.c 423 */;
	struct pt_regs *cocci_id/* arch/powerpc/platforms/pseries/ras.c 423 */;
	struct pseries_mc_errorlog {
		__be32 fru_id;
		__be32 proc_id;
		u8 error_type;
		u8 sub_err_type;
		u8 reserved_1[6];
		__be64 effective_address;
		__be64 logical_address;
	}__packed cocci_id/* arch/powerpc/platforms/pseries/ras.c 42 */;
	void cocci_id/* arch/powerpc/platforms/pseries/ras.c 403 */;
	irqreturn_t cocci_id/* arch/powerpc/platforms/pseries/ras.c 38 */(int irq,
									  void *dev_id);
	irqreturn_t cocci_id/* arch/powerpc/platforms/pseries/ras.c 317 */;
	void *cocci_id/* arch/powerpc/platforms/pseries/ras.c 317 */;
	struct pseries_hp_errorlog *cocci_id/* arch/powerpc/platforms/pseries/ras.c 288 */;
	struct irq_work cocci_id/* arch/powerpc/platforms/pseries/ras.c 27 */;
	void cocci_id/* arch/powerpc/platforms/pseries/ras.c 26 */(struct irq_work *work);
	struct epow_errorlog *cocci_id/* arch/powerpc/platforms/pseries/ras.c 227 */;
	unsigned char cocci_id/* arch/powerpc/platforms/pseries/ras.c 21 */[RTAS_ERROR_LOG_MAX];
	struct epow_errorlog {
		unsigned char sensor_value;
		unsigned char event_modifier;
		unsigned char extended_modifier;
		unsigned char reserved;
		unsigned char platform_reason;
	} cocci_id/* arch/powerpc/platforms/pseries/ras.c 208 */;
	char cocci_id/* arch/powerpc/platforms/pseries/ras.c 176 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/pseries/ras.c 148 */;
	int __init cocci_id/* arch/powerpc/platforms/pseries/ras.c 146 */;
	const struct pseries_mc_errorlog *cocci_id/* arch/powerpc/platforms/pseries/ras.c 106 */;
}
