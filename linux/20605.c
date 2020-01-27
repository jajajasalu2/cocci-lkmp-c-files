cocci_test_suite() {
	struct imr_regs {
		u32 addr_lo;
		u32 addr_hi;
		u32 rmask;
		u32 wmask;
	} cocci_id/* arch/x86/platform/intel-quark/imr.c 64 */;
	int __init cocci_id/* arch/x86/platform/intel-quark/imr.c 579 */;
	const struct x86_cpu_id cocci_id/* arch/x86/platform/intel-quark/imr.c 569 */[]__initconst;
	unsigned long cocci_id/* arch/x86/platform/intel-quark/imr.c 539 */;
	void __init cocci_id/* arch/x86/platform/intel-quark/imr.c 535 */;
	struct imr_device cocci_id/* arch/x86/platform/intel-quark/imr.c 44 */;
	struct imr_regs cocci_id/* arch/x86/platform/intel-quark/imr.c 411 */;
	struct imr_device *cocci_id/* arch/x86/platform/intel-quark/imr.c 410 */;
	unsigned int cocci_id/* arch/x86/platform/intel-quark/imr.c 409 */;
	bool cocci_id/* arch/x86/platform/intel-quark/imr.c 408 */;
	phys_addr_t cocci_id/* arch/x86/platform/intel-quark/imr.c 405 */;
	int cocci_id/* arch/x86/platform/intel-quark/imr.c 405 */;
	size_t cocci_id/* arch/x86/platform/intel-quark/imr.c 405 */;
	struct imr_device {
		bool init;
		struct mutex lock;
		int max_imr;
		int reg_base;
	} cocci_id/* arch/x86/platform/intel-quark/imr.c 37 */;
	struct imr_regs *cocci_id/* arch/x86/platform/intel-quark/imr.c 282 */;
	void cocci_id/* arch/x86/platform/intel-quark/imr.c 234 */;
	struct seq_file *cocci_id/* arch/x86/platform/intel-quark/imr.c 185 */;
	void *cocci_id/* arch/x86/platform/intel-quark/imr.c 185 */;
	u32 cocci_id/* arch/x86/platform/intel-quark/imr.c 108 */;
}
