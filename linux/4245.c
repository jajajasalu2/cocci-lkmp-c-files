cocci_test_suite() {
	struct timer_list *cocci_id/* drivers/platform/x86/intel_ips.c 927 */;
	int cocci_id/* drivers/platform/x86/intel_ips.c 916 */;
	u64 cocci_id/* drivers/platform/x86/intel_ips.c 914 */;
	u32 cocci_id/* drivers/platform/x86/intel_ips.c 912 */;
	u32 *cocci_id/* drivers/platform/x86/intel_ips.c 912 */;
	struct ips_driver *cocci_id/* drivers/platform/x86/intel_ips.c 912 */;
	const u16 cocci_id/* drivers/platform/x86/intel_ips.c 901 */;
	u16 cocci_id/* drivers/platform/x86/intel_ips.c 814 */;
	u16 *cocci_id/* drivers/platform/x86/intel_ips.c 814 */;
	unsigned long cocci_id/* drivers/platform/x86/intel_ips.c 625 */;
	bool cocci_id/* drivers/platform/x86/intel_ips.c 623 */;
	void cocci_id/* drivers/platform/x86/intel_ips.c 473 */;
	bool cocci_id/* drivers/platform/x86/intel_ips.c 334 */(struct ips_driver *ips);
	struct ips_driver {
		struct device *dev;
		void __iomem *regmap;
		int irq;
		struct task_struct *monitor;
		struct task_struct *adjust;
		struct dentry *debug_root;
		struct timer_list timer;
		u16 ctv1_avg_temp;
		u16 ctv2_avg_temp;
		u16 mch_avg_temp;
		u16 mcp_avg_temp;
		u32 cpu_avg_power;
		u32 mch_avg_power;
		u16 cta_val;
		u16 pta_val;
		u16 mgta_val;
		spinlock_t turbo_status_lock;
		u16 mcp_temp_limit;
		u16 mcp_power_limit;
		u16 core_power_limit;
		u16 mch_power_limit;
		bool cpu_turbo_enabled;
		bool __cpu_turbo_on;
		bool gpu_turbo_enabled;
		bool __gpu_turbo_on;
		bool gpu_preferred;
		bool poll_turbo_status;
		bool second_cpu;
		bool turbo_toggle_allowed;
		struct ips_mcp_limits *limits;
		unsigned long (*read_mch_val)(void);
		bool (*gpu_raise)(void);
		bool (*gpu_lower)(void);
		bool (*gpu_busy)(void);
		bool (*gpu_turbo_disable)(void);
		u64 orig_turbo_limit;
		u64 orig_turbo_ratios;
	} cocci_id/* drivers/platform/x86/intel_ips.c 280 */;
	struct ips_mcp_limits cocci_id/* drivers/platform/x86/intel_ips.c 264 */;
	struct ips_mcp_limits {
		int mcp_power_limit;
		int core_power_limit;
		int mch_power_limit;
		int core_temp_limit;
		int mch_temp_limit;
	} cocci_id/* drivers/platform/x86/intel_ips.c 246 */;
	const int cocci_id/* drivers/platform/x86/intel_ips.c 237 */;
	struct pci_driver cocci_id/* drivers/platform/x86/intel_ips.c 1629 */;
	const struct pci_device_id *cocci_id/* drivers/platform/x86/intel_ips.c 1438 */;
	struct pci_dev *cocci_id/* drivers/platform/x86/intel_ips.c 1438 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/intel_ips.c 1426 */[];
	const struct dmi_system_id *cocci_id/* drivers/platform/x86/intel_ips.c 1420 */;
	const struct pci_device_id cocci_id/* drivers/platform/x86/intel_ips.c 1413 */[];
	struct ips_mcp_limits *cocci_id/* drivers/platform/x86/intel_ips.c 1300 */;
	struct seq_file *cocci_id/* drivers/platform/x86/intel_ips.c 1234 */;
	void *cocci_id/* drivers/platform/x86/intel_ips.c 1234 */;
	u8 cocci_id/* drivers/platform/x86/intel_ips.c 1153 */;
	irqreturn_t cocci_id/* drivers/platform/x86/intel_ips.c 1150 */;
}
