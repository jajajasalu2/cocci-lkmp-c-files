cocci_test_suite() {
	struct telem_pss_idle_stateinfo {
		const char *name;
		u32 bit_pos;
	} cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 95 */;
	void __exit cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 944 */;
	struct dentry *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 903 */;
	const struct x86_cpu_id *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 901 */;
	int __init cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 899 */;
	struct notifier_block cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 895 */;
	void *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 883 */;
	unsigned long cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 883 */;
	struct notifier_block *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 882 */;
	int cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 882 */;
	struct telemetry_susp_stats {
		u32 shlw_ctr;
		u32 deep_ctr;
		u64 shlw_res;
		u64 deep_res;
	} cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 87 */;
	u8 cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 83 */;
	u64 cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 797 */;
	u32 cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 796 */;
	struct telemetry_evtlog cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 795 */[TELEM_MAX_OS_ALLOCATED_EVENTS];
	void cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 793 */;
	const struct file_operations cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 753 */;
	struct inode *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 748 */;
	struct file *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 748 */;
	loff_t *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 731 */;
	size_t cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 731 */;
	const char __user *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 730 */;
	ssize_t cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 729 */;
	u64 *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 649 */;
	u16 cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 511 */;
	struct pci_dev *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 508 */;
	u32 cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 503 */[TELEM_IOSS_PG_EVTS];
	u32 cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 502 */[TELEM_IOSS_DX_D0IX_EVTS];
	const char *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 474 */[TELEM_MAX_OS_ALLOCATED_EVENTS];
	struct seq_file *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 471 */;
	u32 cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 337 */[TELEM_PSS_IDLE_BLOCKED_EVTS];
	const struct x86_cpu_id cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 310 */[];
	struct telemetry_debugfs_conf cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 276 */;
	struct telemetry_debugfs_conf *cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 274 */;
	struct telemetry_debugfs_conf {
		struct telemetry_susp_stats suspend_stats;
		struct dentry *telemetry_dbg_dir;
		struct telem_ioss_d0ix_stateinfo *ioss_d0ix_data;
		struct telem_pss_idle_stateinfo *pss_idle_data;
		struct telem_pcs_blkd_info *pcs_idle_blkd_data;
		struct telem_pcs_blkd_info *pcs_s0ix_blkd_data;
		struct telem_pss_wakeup_info *pss_wakeup;
		struct telem_pss_ltr_info *pss_ltr_data;
		struct telem_ioss_pg_info *ioss_pg_data;
		u8 pcs_idle_blkd_evts;
		u8 pcs_s0ix_blkd_evts;
		u8 pss_wakeup_evts;
		u8 pss_idle_evts;
		u8 pss_ltr_evts;
		u8 ioss_d0ix_evts;
		u8 ioss_pg_evts;
		u16 pss_ltr_blocking_id;
		u16 pcs_idle_blkd_id;
		u16 pcs_s0ix_blkd_id;
		u16 s0ix_total_occ_id;
		u16 s0ix_shlw_occ_id;
		u16 s0ix_deep_occ_id;
		u16 s0ix_total_res_id;
		u16 s0ix_shlw_res_id;
		u16 s0ix_deep_res_id;
		u16 pss_wakeup_id;
		u16 ioss_d0ix_id;
		u16 pstates_id;
		u16 pss_idle_id;
		u16 ioss_d3_id;
		u16 ioss_pg_id;
	} cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 236 */;
	struct telem_ioss_pg_info cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 207 */[];
	struct telem_ioss_pg_info {
		const char *name;
		u32 bit_pos;
	} cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 202 */;
	struct telem_ioss_d0ix_stateinfo cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 180 */[];
	struct telem_ioss_d0ix_stateinfo {
		const char *name;
		u32 bit_pos;
	} cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 175 */;
	struct telem_pss_wakeup_info cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 165 */[];
	struct telem_pss_wakeup_info {
		const char *name;
		u32 bit_pos;
	} cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 160 */;
	struct telem_pss_ltr_info cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 150 */[];
	struct telem_pss_ltr_info {
		const char *name;
		u32 bit_pos;
	} cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 145 */;
	struct telem_pcs_blkd_info cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 124 */[];
	struct telem_pcs_blkd_info {
		const char *name;
		u32 bit_pos;
	} cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 119 */;
	struct telem_pss_idle_stateinfo cocci_id/* drivers/platform/x86/intel_telemetry_debugfs.c 100 */[];
}
