cocci_test_suite() {
	unsigned int cocci_id/* arch/powerpc/platforms/4xx/cpm.c 92 */;
	struct cpm_idle_mode cocci_id/* arch/powerpc/platforms/4xx/cpm.c 53 */[];
	struct cpm_idle_mode {
		unsigned int enabled;
		const char *name;
	} cocci_id/* arch/powerpc/platforms/4xx/cpm.c 48 */;
	struct cpm cocci_id/* arch/powerpc/platforms/4xx/cpm.c 46 */;
	struct cpm {
		dcr_host_t dcr_host;
		unsigned int dcr_offset[3];
		unsigned int powersave_off;
		unsigned int unused;
		unsigned int idle_doze;
		unsigned int standby;
		unsigned int suspend;
	} cocci_id/* arch/powerpc/platforms/4xx/cpm.c 36 */;
	int __init cocci_id/* arch/powerpc/platforms/4xx/cpm.c 246 */;
	const unsigned int *cocci_id/* arch/powerpc/platforms/4xx/cpm.c 238 */;
	const char *cocci_id/* arch/powerpc/platforms/4xx/cpm.c 235 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/4xx/cpm.c 234 */;
	int cocci_id/* arch/powerpc/platforms/4xx/cpm.c 234 */;
	const struct platform_suspend_ops cocci_id/* arch/powerpc/platforms/4xx/cpm.c 229 */;
	suspend_state_t cocci_id/* arch/powerpc/platforms/4xx/cpm.c 215 */;
	void cocci_id/* arch/powerpc/platforms/4xx/cpm.c 180 */;
	unsigned long cocci_id/* arch/powerpc/platforms/4xx/cpm.c 169 */;
	struct device *cocci_id/* arch/powerpc/platforms/4xx/cpm.c 168 */;
	struct kobj_attribute cocci_id/* arch/powerpc/platforms/4xx/cpm.c 163 */;
	size_t cocci_id/* arch/powerpc/platforms/4xx/cpm.c 144 */;
	struct kobj_attribute *cocci_id/* arch/powerpc/platforms/4xx/cpm.c 125 */;
	char *cocci_id/* arch/powerpc/platforms/4xx/cpm.c 125 */;
	struct kobject *cocci_id/* arch/powerpc/platforms/4xx/cpm.c 124 */;
	ssize_t cocci_id/* arch/powerpc/platforms/4xx/cpm.c 124 */;
}
