cocci_test_suite() {
	unsigned int cocci_id/* drivers/cpufreq/powernow-k7.c 93 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/powernow-k7.c 91 */;
	const int cocci_id/* drivers/cpufreq/powernow-k7.c 78 */[32];
	void __exit cocci_id/* drivers/cpufreq/powernow-k7.c 682 */;
	int __init cocci_id/* drivers/cpufreq/powernow-k7.c 674 */;
	struct cpufreq_driver cocci_id/* drivers/cpufreq/powernow-k7.c 661 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/powernow-k7.c 647 */;
	union msr_fidvidstatus cocci_id/* drivers/cpufreq/powernow-k7.c 595 */;
	const struct dmi_system_id cocci_id/* drivers/cpufreq/powernow-k7.c 581 */[];
	union powernow_acpi_control_t {
		struct {
			unsigned long fid:5,vid:5,sgtc:20,res1:2;
		} bits;
		unsigned long val;
	} cocci_id/* drivers/cpufreq/powernow-k7.c 58 */;
	const struct dmi_system_id *cocci_id/* drivers/cpufreq/powernow-k7.c 567 */;
	int cocci_id/* drivers/cpufreq/powernow-k7.c 567 */;
	char *cocci_id/* drivers/cpufreq/powernow-k7.c 502 */;
	struct pst_s {
		u32 cpuid;
		u8 fsbspeed;
		u8 maxfid;
		u8 startvid;
		u8 numpstates;
	} cocci_id/* drivers/cpufreq/powernow-k7.c 49 */;
	struct pst_s *cocci_id/* drivers/cpufreq/powernow-k7.c 450 */;
	struct psb_s *cocci_id/* drivers/cpufreq/powernow-k7.c 449 */;
	struct psb_s {
		u8 signature[10];
		u8 tableversion;
		u8 flags;
		u16 settlingtime;
		u8 reserved1;
		u8 numpst;
	} cocci_id/* drivers/cpufreq/powernow-k7.c 40 */;
	u32 cocci_id/* drivers/cpufreq/powernow-k7.c 360 */;
	struct acpi_processor_px *cocci_id/* drivers/cpufreq/powernow-k7.c 353 */;
	unsigned long cocci_id/* drivers/cpufreq/powernow-k7.c 350 */;
	union powernow_acpi_control_t cocci_id/* drivers/cpufreq/powernow-k7.c 300 */;
	struct acpi_processor_performance *cocci_id/* drivers/cpufreq/powernow-k7.c 294 */;
	struct cpufreq_freqs cocci_id/* drivers/cpufreq/powernow-k7.c 251 */;
	union msr_fidvidctl cocci_id/* drivers/cpufreq/powernow-k7.c 220 */;
	void cocci_id/* drivers/cpufreq/powernow-k7.c 218 */;
	u8 cocci_id/* drivers/cpufreq/powernow-k7.c 175 */;
	unsigned char *cocci_id/* drivers/cpufreq/powernow-k7.c 171 */;
	struct cpuinfo_x86 *cocci_id/* drivers/cpufreq/powernow-k7.c 119 */;
	const struct x86_cpu_id cocci_id/* drivers/cpufreq/powernow-k7.c 111 */[];
	char cocci_id/* drivers/cpufreq/powernow-k7.c 100 */;
}
