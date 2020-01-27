cocci_test_suite() {
	struct cpufreq_driver cocci_id/* drivers/cpufreq/speedstep-centrino.c 78 */;
	int cocci_id/* drivers/cpufreq/speedstep-centrino.c 71 */(const struct cpuinfo_x86 *c,
								  const struct cpu_id *x);
	struct cpu_model {
		const struct cpu_id *cpu_id;
		const char *model_name;
		unsigned max_freq;
		struct cpufreq_frequency_table *op_points;
	} cocci_id/* drivers/cpufreq/speedstep-centrino.c 63 */;
	void __exit cocci_id/* drivers/cpufreq/speedstep-centrino.c 557 */;
	void cocci_id/* drivers/cpufreq/speedstep-centrino.c 557 */;
	int __init cocci_id/* drivers/cpufreq/speedstep-centrino.c 550 */;
	const struct cpu_id cocci_id/* drivers/cpufreq/speedstep-centrino.c 53 */[];
	const struct x86_cpu_id cocci_id/* drivers/cpufreq/speedstep-centrino.c 522 */[];
	enum{CPU_BANIAS, CPU_DOTHAN_A1, CPU_DOTHAN_A2, CPU_DOTHAN_B0, CPU_MP4HT_D0, CPU_MP4HT_E0,} cocci_id/* drivers/cpufreq/speedstep-centrino.c 44 */;
	cpumask_var_t cocci_id/* drivers/cpufreq/speedstep-centrino.c 428 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/speedstep-centrino.c 427 */;
	unsigned int cocci_id/* drivers/cpufreq/speedstep-centrino.c 405 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/speedstep-centrino.c 403 */;
	int cocci_id/* drivers/cpufreq/speedstep-centrino.c 403 */;
	struct cpu_id {
		__u8 x86;
		__u8 x86_model;
		__u8 x86_stepping;
	} cocci_id/* drivers/cpufreq/speedstep-centrino.c 37 */;
	unsigned cocci_id/* drivers/cpufreq/speedstep-centrino.c 348 */;
	struct cpuinfo_x86 *cocci_id/* drivers/cpufreq/speedstep-centrino.c 347 */;
	const struct cpu_id *cocci_id/* drivers/cpufreq/speedstep-centrino.c 277 */;
	const struct cpuinfo_x86 *cocci_id/* drivers/cpufreq/speedstep-centrino.c 276 */;
	struct cpu_model *cocci_id/* drivers/cpufreq/speedstep-centrino.c 237 */;
	struct cpu_model cocci_id/* drivers/cpufreq/speedstep-centrino.c 210 */[];
	struct cpufreq_frequency_table cocci_id/* drivers/cpufreq/speedstep-centrino.c 108 */[];
	__typeof__(const struct cpu_id *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct cpu_model *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
