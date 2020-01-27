cocci_test_suite() {
	unsigned long cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 961 */;
	struct pmf_cmd *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 96 */;
	struct pmf_irq_client *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 921 */;
	const u32 *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 815 */;
	char cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 814 */[64];
	struct pmf_device *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 812 */;
	u32 cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 809 */;
	const char *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 809 */;
	struct pmf_function *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 808 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 808 */;
	typeof(*func) cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 798 */;
	void cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 766 */;
	struct pmf_function cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 761 */;
	struct pmf_cmd {
		const void *cmdptr;
		const void *cmdend;
		struct pmf_function *func;
		void *instdata;
		struct pmf_args *args;
		int error;
	} cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 70 */;
	const int cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 685 */;
	struct property *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 683 */;
	u8 *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 670 */;
	unsigned int cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 638 */;
	u32 *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 637 */;
	void *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 636 */;
	int cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 636 */;
	struct pmf_cmd cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 583 */;
	struct pmf_handlers *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 580 */;
	struct pmf_device cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 553 */;
	struct kref *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 551 */;
	struct pmf_device {
		struct list_head link;
		struct device_node *node;
		struct pmf_handlers *handlers;
		struct list_head functions;
		struct kref ref;
	} cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 539 */;
	pmf_cmd_parser_t cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 502 */[PMF_CMD_COUNT];
	int (*cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 500 */)(struct pmf_cmd *cmd,
									      struct pmf_handlers *h);
	u16 cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 248 */;
	u8 cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 149 */;
	const void *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 108 */;
	struct pmf_args *cocci_id/* arch/powerpc/platforms/powermac/pfunc_core.c 1009 */;
}
