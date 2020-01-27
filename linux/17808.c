cocci_test_suite() {
	struct salinfo_data_saved {
		u8 *buffer;
		u64 size;
		u64 id;
		int cpu;
	} cocci_id/* arch/ia64/kernel/salinfo.c 93 */;
	struct proc_dir_entry *cocci_id/* arch/ia64/kernel/salinfo.c 84 */[ARRAY_SIZE(salinfo_entries) + ARRAY_SIZE(salinfo_log_name) + (2 * ARRAY_SIZE(salinfo_log_name)) + 1];
	char *cocci_id/* arch/ia64/kernel/salinfo.c 77 */[];
	const salinfo_entry_t cocci_id/* arch/ia64/kernel/salinfo.c 68 */[];
	struct proc_dir_entry **cocci_id/* arch/ia64/kernel/salinfo.c 595 */;
	struct proc_dir_entry *cocci_id/* arch/ia64/kernel/salinfo.c 594 */;
	void cocci_id/* arch/ia64/kernel/salinfo.c 592 */;
	int __init cocci_id/* arch/ia64/kernel/salinfo.c 591 */;
	unsigned long cocci_id/* arch/ia64/kernel/salinfo.c 586 */;
	struct seq_file *cocci_id/* arch/ia64/kernel/salinfo.c 584 */;
	void *cocci_id/* arch/ia64/kernel/salinfo.c 584 */;
	int cocci_id/* arch/ia64/kernel/salinfo.c 584 */;
	struct {
		const char *name;
		unsigned long feature;
		struct proc_dir_entry *entry;
	} cocci_id/* arch/ia64/kernel/salinfo.c 58 */;
	struct salinfo_data_saved *cocci_id/* arch/ia64/kernel/salinfo.c 566 */;
	struct salinfo_data *cocci_id/* arch/ia64/kernel/salinfo.c 548 */;
	unsigned int cocci_id/* arch/ia64/kernel/salinfo.c 545 */;
	const struct file_operations cocci_id/* arch/ia64/kernel/salinfo.c 537 */;
	struct salinfo_platform_oemdata_parms cocci_id/* arch/ia64/kernel/salinfo.c 522 */;
	u32 cocci_id/* arch/ia64/kernel/salinfo.c 500 */;
	const char __user *cocci_id/* arch/ia64/kernel/salinfo.c 495 */;
	sal_log_record_header_t *cocci_id/* arch/ia64/kernel/salinfo.c 465 */;
	long cocci_id/* arch/ia64/kernel/salinfo.c 453 */;
	u64 cocci_id/* arch/ia64/kernel/salinfo.c 438 */;
	u8 *cocci_id/* arch/ia64/kernel/salinfo.c 437 */;
	u64 *cocci_id/* arch/ia64/kernel/salinfo.c 387 */;
	char cocci_id/* arch/ia64/kernel/salinfo.c 286 */[32];
	loff_t *cocci_id/* arch/ia64/kernel/salinfo.c 283 */;
	char __user *cocci_id/* arch/ia64/kernel/salinfo.c 283 */;
	size_t cocci_id/* arch/ia64/kernel/salinfo.c 283 */;
	ssize_t cocci_id/* arch/ia64/kernel/salinfo.c 282 */;
	struct inode *cocci_id/* arch/ia64/kernel/salinfo.c 275 */;
	struct file *cocci_id/* arch/ia64/kernel/salinfo.c 275 */;
	struct timer_list *cocci_id/* arch/ia64/kernel/salinfo.c 265 */;
	void cocci_id/* arch/ia64/kernel/salinfo.c 253 */(void);
	struct timer_list cocci_id/* arch/ia64/kernel/salinfo.c 252 */;
	struct salinfo_platform_oemdata_parms *cocci_id/* arch/ia64/kernel/salinfo.c 186 */;
	struct salinfo_platform_oemdata_parms {
		const u8 *efi_guid;
		u8 **oemdata;
		u64 *oemdata_size;
	} cocci_id/* arch/ia64/kernel/salinfo.c 177 */;
	int (*cocci_id/* arch/ia64/kernel/salinfo.c 175 */)(const u8 *sect_header,
							    u8 **oemdata,
							    u64 *oemdata_size);
	struct salinfo_data cocci_id/* arch/ia64/kernel/salinfo.c 157 */[ARRAY_SIZE(salinfo_log_name)];
	struct salinfo_data {
		cpumask_t cpu_event;
		wait_queue_head_t read_wait;
		u8 *log_buffer;
		u64 log_size;
		u8 *oemdata;
		u64 oemdata_size;
		int open;
		u8 type;
		u8 saved_num;
		enum salinfo_state state:8;
		u8 padding;
		int cpu_check;
		struct salinfo_data_saved data_saved[5];
	} cocci_id/* arch/ia64/kernel/salinfo.c 141 */;
	enum salinfo_state{STATE_NO_DATA, STATE_LOG_RECORD, STATE_OEMDATA,} cocci_id/* arch/ia64/kernel/salinfo.c 135 */;
}
