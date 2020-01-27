cocci_test_suite() {
	unsigned int cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 78 */;
	struct cpufreq_policy *cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 76 */;
	void cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 71 */;
	struct spu_gov_info_struct cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 52 */;
	unsigned long cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 50 */;
	struct work_struct *cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 46 */;
	struct spu_gov_info_struct *cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 31 */;
	int cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 31 */;
	struct spu_gov_info_struct {
		unsigned long busy_spus;
		struct cpufreq_policy *policy;
		struct delayed_work work;
		unsigned int poll_int;
	} cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 23 */;
	void __exit cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 144 */;
	int __init cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 134 */;
	struct cpufreq_governor cocci_id/* arch/powerpc/platforms/cell/cpufreq_spudemand.c 123 */;
	__typeof__(struct spu_gov_info_struct) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
