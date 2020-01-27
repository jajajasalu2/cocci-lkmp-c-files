cocci_test_suite() {
	struct appldata_os_data *cocci_id/* arch/s390/appldata/appldata_os.c 99 */;
	int cocci_id/* arch/s390/appldata/appldata_os.c 98 */;
	void *cocci_id/* arch/s390/appldata/appldata_os.c 96 */;
	void cocci_id/* arch/s390/appldata/appldata_os.c 96 */;
	struct appldata_ops cocci_id/* arch/s390/appldata/appldata_os.c 83 */;
	struct appldata_os_data {
		u64 timestamp;
		u32 sync_count_1;
		u32 sync_count_2;
		u32 nr_cpus;
		u32 per_cpu_size;
		u32 cpu_offset;
		u32 nr_running;
		u32 nr_threads;
		u32 avenrun[3];
		u32 nr_iowait;
		struct appldata_os_per_cpu os_cpu[0];
	}__attribute__((packed)) cocci_id/* arch/s390/appldata/appldata_os.c 56 */;
	struct appldata_os_per_cpu {
		u32 per_cpu_user;
		u32 per_cpu_nice;
		u32 per_cpu_system;
		u32 per_cpu_idle;
		u32 per_cpu_irq;
		u32 per_cpu_softirq;
		u32 per_cpu_iowait;
		u32 per_cpu_steal;
		u32 cpu_id;
	}__attribute__((packed)) cocci_id/* arch/s390/appldata/appldata_os.c 40 */;
	void __exit cocci_id/* arch/s390/appldata/appldata_os.c 205 */;
	int __init cocci_id/* arch/s390/appldata/appldata_os.c 168 */;
	unsigned long cocci_id/* arch/s390/appldata/appldata_os.c 142 */;
	struct appldata_os_per_cpu cocci_id/* arch/s390/appldata/appldata_os.c 137 */;
	struct appldata_os_data cocci_id/* arch/s390/appldata/appldata_os.c 136 */;
	unsigned int cocci_id/* arch/s390/appldata/appldata_os.c 100 */;
}
