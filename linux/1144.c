cocci_test_suite() {
	const struct x86_cpu_id cocci_id/* drivers/cpufreq/acpi-cpufreq.c 993 */[];
	void __exit cocci_id/* drivers/cpufreq/acpi-cpufreq.c 974 */;
	struct freq_attr **cocci_id/* drivers/cpufreq/acpi-cpufreq.c 953 */;
	u64 cocci_id/* drivers/cpufreq/acpi-cpufreq.c 94 */;
	void cocci_id/* drivers/cpufreq/acpi-cpufreq.c 922 */;
	bool cocci_id/* drivers/cpufreq/acpi-cpufreq.c 91 */;
	void __init cocci_id/* drivers/cpufreq/acpi-cpufreq.c 897 */;
	enum cpuhp_state cocci_id/* drivers/cpufreq/acpi-cpufreq.c 895 */;
	struct freq_attr *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 873 */[];
	struct acpi_cpufreq_data *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 839 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 837 */;
	u32 cocci_id/* drivers/cpufreq/acpi-cpufreq.c 744 */;
	struct cpufreq_driver cocci_id/* drivers/cpufreq/acpi-cpufreq.c 68 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 637 */;
	struct acpi_processor_performance *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 636 */;
	unsigned int cocci_id/* drivers/cpufreq/acpi-cpufreq.c 630 */;
	struct acpi_processor_performance __percpu *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 61 */;
	struct cpuinfo_x86 *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 609 */;
	int cocci_id/* drivers/cpufreq/acpi-cpufreq.c 609 */;
	const struct dmi_system_id cocci_id/* drivers/cpufreq/acpi-cpufreq.c 596 */[];
	const struct dmi_system_id *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 590 */;
	struct acpi_processor_performance cocci_id/* drivers/cpufreq/acpi-cpufreq.c 560 */;
	int __init cocci_id/* drivers/cpufreq/acpi-cpufreq.c 555 */;
	struct acpi_cpufreq_data {
		unsigned int resume;
		unsigned int cpu_feature;
		unsigned int acpi_perf_cpu;
		cpumask_var_t freqdomain_cpus;
		void (*cpu_freq_write)(struct acpi_pct_register *reg, u32 val);
		u32 (*cpu_freq_read)(struct acpi_pct_register *reg);
	} cocci_id/* drivers/cpufreq/acpi-cpufreq.c 51 */;
	unsigned long cocci_id/* drivers/cpufreq/acpi-cpufreq.c 489 */;
	const struct cpumask *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 410 */;
	enum{UNDEFINED_CAPABLE=0, SYSTEM_INTEL_MSR_CAPABLE, SYSTEM_AMD_MSR_CAPABLE, SYSTEM_IO_CAPABLE,} cocci_id/* drivers/cpufreq/acpi-cpufreq.c 38 */;
	struct drv_cmd cocci_id/* drivers/cpufreq/acpi-cpufreq.c 305 */;
	struct drv_cmd *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 297 */;
	struct drv_cmd {
		struct acpi_pct_register *reg;
		u32 val;
		union {
			void (*write)(struct acpi_pct_register *reg, u32 val);
			u32 (*read)(struct acpi_pct_register *reg);
		} func;
	} cocci_id/* drivers/cpufreq/acpi-cpufreq.c 285 */;
	struct acpi_pct_register *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 259 */;
	unsigned cocci_id/* drivers/cpufreq/acpi-cpufreq.c 227 */;
	char *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 169 */;
	ssize_t cocci_id/* drivers/cpufreq/acpi-cpufreq.c 169 */;
	size_t cocci_id/* drivers/cpufreq/acpi-cpufreq.c 152 */;
	const char *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 151 */;
	long cocci_id/* drivers/cpufreq/acpi-cpufreq.c 131 */;
	void *cocci_id/* drivers/cpufreq/acpi-cpufreq.c 121 */;
	const struct acpi_device_id cocci_id/* drivers/cpufreq/acpi-cpufreq.c 1000 */[];
}
