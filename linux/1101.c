cocci_test_suite() {
	struct pxa_freqs cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 95 */[];
	struct cpufreq_frequency_table cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 88 */[NUM_PXA25x_TURBO_FREQS + 1];
	struct cpufreq_frequency_table cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 86 */[NUM_PXA25x_RUN_FREQS + 1];
	const struct pxa_freqs cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 61 */[];
	struct pxa_freqs {
		unsigned int khz;
		int vmin;
		int vmax;
	} cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 52 */;
	struct pxa_cpufreq_data cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 50 */;
	struct pxa_cpufreq_data {
		struct clk *clk_core;
	} cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 47 */;
	struct regulator *cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 40 */;
	unsigned int cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 33 */;
	void __exit cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 315 */;
	int cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 304 */;
	int __init cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 302 */;
	struct cpufreq_driver cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 292 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 232 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 228 */;
	struct pxa_cpufreq_data *cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 183 */;
	const struct pxa_freqs **cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 152 */;
	struct cpufreq_frequency_table **cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 151 */;
	void cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 151 */;
	const struct pxa_freqs *cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 113 */;
	unsigned cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 109 */(int info);
	struct cpufreq_frequency_table cocci_id/* drivers/cpufreq/pxa2xx-cpufreq.c 106 */[NUM_PXA27x_FREQS + 1];
}
