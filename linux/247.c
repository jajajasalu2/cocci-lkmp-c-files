cocci_test_suite() {
	struct hwlat_data {
		struct mutex lock;
		u64 count;
		u64 sample_window;
		u64 sample_width;
	} cocci_id/* kernel/trace/trace_hwlat.c 89 */;
	struct hwlat_sample {
		u64 seqnum;
		u64 duration;
		u64 outer_duration;
		u64 nmi_total_ts;
		struct timespec64 timestamp;
		int nmi_count;
	} cocci_id/* kernel/trace/trace_hwlat.c 79 */;
	unsigned long cocci_id/* kernel/trace/trace_hwlat.c 64 */;
	struct tracer cocci_id/* kernel/trace/trace_hwlat.c 615 */;
	struct dentry *cocci_id/* kernel/trace/trace_hwlat.c 60 */;
	struct task_struct *cocci_id/* kernel/trace/trace_hwlat.c 58 */;
	const struct file_operations cocci_id/* kernel/trace/trace_hwlat.c 509 */;
	const char __user *cocci_id/* kernel/trace/trace_hwlat.c 447 */;
	u64 *cocci_id/* kernel/trace/trace_hwlat.c 414 */;
	char cocci_id/* kernel/trace/trace_hwlat.c 413 */[U64STR_SIZE];
	loff_t *cocci_id/* kernel/trace/trace_hwlat.c 411 */;
	size_t cocci_id/* kernel/trace/trace_hwlat.c 411 */;
	struct file *cocci_id/* kernel/trace/trace_hwlat.c 410 */;
	char __user *cocci_id/* kernel/trace/trace_hwlat.c 410 */;
	ssize_t cocci_id/* kernel/trace/trace_hwlat.c 410 */;
	void *cocci_id/* kernel/trace/trace_hwlat.c 319 */;
	struct cpumask *cocci_id/* kernel/trace/trace_hwlat.c 275 */;
	bool cocci_id/* kernel/trace/trace_hwlat.c 271 */;
	struct cpumask cocci_id/* kernel/trace/trace_hwlat.c 270 */;
	struct hwlat_sample cocci_id/* kernel/trace/trace_hwlat.c 239 */;
	u64 cocci_id/* kernel/trace/trace_hwlat.c 172 */;
	s64 cocci_id/* kernel/trace/trace_hwlat.c 171 */;
	time_type cocci_id/* kernel/trace/trace_hwlat.c 170 */;
	struct trace_array *cocci_id/* kernel/trace/trace_hwlat.c 169 */;
	int cocci_id/* kernel/trace/trace_hwlat.c 167 */;
	void cocci_id/* kernel/trace/trace_hwlat.c 167 */;
	struct hwlat_entry *cocci_id/* kernel/trace/trace_hwlat.c 109 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/trace_hwlat.c 108 */;
	struct ring_buffer *cocci_id/* kernel/trace/trace_hwlat.c 107 */;
	struct trace_event_call *cocci_id/* kernel/trace/trace_hwlat.c 106 */;
	struct hwlat_sample *cocci_id/* kernel/trace/trace_hwlat.c 103 */;
}
