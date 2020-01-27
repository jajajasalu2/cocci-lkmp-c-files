cocci_test_suite() {
	unsigned int cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 88 */;
	struct irq_data *cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 86 */;
	unsigned char cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 79 */;
	u8 cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 67 */;
	struct icp_ipl __iomem *cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 45 */[NR_CPUS];
	u32 cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 330 */;
	struct device_node *cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 329 */;
	int __init cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 327 */;
	const struct icp_ops cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 315 */;
	struct resource cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 297 */;
	struct icp_ipl {
		union {
			u32 word;
			u8 bytes[4];
		} xirr_poll;
		union {
			u32 word;
			u8 bytes[4];
		} xirr;
		u32 dummy;
		union {
			u32 word;
			u8 bytes[4];
		} qirr;
		u32 link_a;
		u32 link_b;
		u32 link_c;
	} cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 26 */;
	const __be32 *cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 259 */;
	unsigned int *cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 256 */;
	char *cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 214 */;
	unsigned long cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 211 */;
	irqreturn_t cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 199 */;
	void *cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 199 */;
	void __iomem *cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 156 */;
	int cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 141 */;
	void cocci_id/* arch/powerpc/sysdev/xics/icp-native.c 141 */;
}
