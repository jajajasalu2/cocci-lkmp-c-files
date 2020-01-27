cocci_test_suite() {
	char cocci_id/* arch/arc/plat-axs10x/axs10x.c 95 */[32];
	union ver {
		struct {
#ifdef CONFIG_CPU_BIG_ENDIAN
			unsigned int pad:11,y:12,m:4,d:5;
#else
			unsigned int d:5,m:4,y:12,pad:11;
#endif
		};
		unsigned int val;
	} cocci_id/* arch/arc/plat-axs10x/axs10x.c 76 */;
	const char *cocci_id/* arch/arc/plat-axs10x/axs10x.c 74 */;
	char cocci_id/* arch/arc/plat-axs10x/axs10x.c 383 */[TASK_COMM];
	char cocci_id/* arch/arc/plat-axs10x/axs10x.c 382 */[TASK_PID];
	const char *cocci_id/* arch/arc/plat-axs10x/axs10x.c 355 */[]__initconst;
	u32 *cocci_id/* arch/arc/plat-axs10x/axs10x.c 321 */;
	const struct fdt_property *cocci_id/* arch/arc/plat-axs10x/axs10x.c 317 */;
	u32 cocci_id/* arch/arc/plat-axs10x/axs10x.c 315 */;
	void __iomem *cocci_id/* arch/arc/plat-axs10x/axs10x.c 258 */;
	int cocci_id/* arch/arc/plat-axs10x/axs10x.c 255 */;
	void __init cocci_id/* arch/arc/plat-axs10x/axs10x.c 253 */;
	void cocci_id/* arch/arc/plat-axs10x/axs10x.c 253 */;
	unsigned int cocci_id/* arch/arc/plat-axs10x/axs10x.c 231 */;
	void __init cocci_id/* arch/arc/plat-axs10x/axs10x.c 228 */;
	const struct aperture cocci_id/* arch/arc/plat-axs10x/axs10x.c 186 */[16];
	struct aperture {
		unsigned int slave_sel:4,slave_off:4,pad:24;
	} cocci_id/* arch/arc/plat-axs10x/axs10x.c 137 */;
	const struct machine_desc cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 397 */;
}
