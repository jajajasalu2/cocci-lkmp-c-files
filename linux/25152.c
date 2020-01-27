cocci_test_suite() {
	double cocci_id/* tools/power/x86/turbostat/turbostat.c 94 */(unsigned int family,
								      unsigned int model);
	double cocci_id/* tools/power/x86/turbostat/turbostat.c 69 */;
	enum show_hide_mode cocci_id/* tools/power/x86/turbostat/turbostat.c 573 */;
	struct option cocci_id/* tools/power/x86/turbostat/turbostat.c 5646 */[];
	char **cocci_id/* tools/power/x86/turbostat/turbostat.c 5642 */;
	char cocci_id/* tools/power/x86/turbostat/turbostat.c 5377 */[NAME_BYTES];
	struct msr_counter cocci_id/* tools/power/x86/turbostat/turbostat.c 5319 */;
	struct msr_counter *cocci_id/* tools/power/x86/turbostat/turbostat.c 5317 */;
	enum counter_type cocci_id/* tools/power/x86/turbostat/turbostat.c 5315 */;
	enum counter_format cocci_id/* tools/power/x86/turbostat/turbostat.c 5315 */;
	enum counter_scope cocci_id/* tools/power/x86/turbostat/turbostat.c 5314 */;
	char *cocci_id/* tools/power/x86/turbostat/turbostat.c 5313 */;
	unsigned int cocci_id/* tools/power/x86/turbostat/turbostat.c 5313 */;
	int cocci_id/* tools/power/x86/turbostat/turbostat.c 5313 */;
	enum show_hide_mode{SHOW_LIST, HIDE_LIST,} cocci_id/* tools/power/x86/turbostat/turbostat.c 525 */;
	struct timezone *cocci_id/* tools/power/x86/turbostat/turbostat.c 5247 */;
	pid_t cocci_id/* tools/power/x86/turbostat/turbostat.c 5237 */;
	char *cocci_id/* tools/power/x86/turbostat/turbostat.c 518 */[MAX_DEFERRED];
	struct pkg_data cocci_id/* tools/power/x86/turbostat/turbostat.c 5104 */;
	struct core_data cocci_id/* tools/power/x86/turbostat/turbostat.c 5097 */;
	struct thread_data cocci_id/* tools/power/x86/turbostat/turbostat.c 5090 */;
	struct pkg_data **cocci_id/* tools/power/x86/turbostat/turbostat.c 5083 */;
	struct thread_data **cocci_id/* tools/power/x86/turbostat/turbostat.c 5082 */;
	struct core_data **cocci_id/* tools/power/x86/turbostat/turbostat.c 5082 */;
	void cocci_id/* tools/power/x86/turbostat/turbostat.c 5081 */;
	unsigned long long cocci_id/* tools/power/x86/turbostat/turbostat.c 507 */;
	struct cpu_topology cocci_id/* tools/power/x86/turbostat/turbostat.c 4956 */;
	const struct dirent *cocci_id/* tools/power/x86/turbostat/turbostat.c 4925 */;
	double cocci_id/* tools/power/x86/turbostat/turbostat.c 4397 */[SLM_BCLK_FREQS];
	struct msr_counter cocci_id/* tools/power/x86/turbostat/turbostat.c 398 */[];
	int *cocci_id/* tools/power/x86/turbostat/turbostat.c 39 */;
	ssize_t cocci_id/* tools/power/x86/turbostat/turbostat.c 382 */;
	off_t cocci_id/* tools/power/x86/turbostat/turbostat.c 380 */;
	FILE *cocci_id/* tools/power/x86/turbostat/turbostat.c 3487 */;
	char cocci_id/* tools/power/x86/turbostat/turbostat.c 3485 */[16];
	char cocci_id/* tools/power/x86/turbostat/turbostat.c 3484 */[64];
	int cocci_id/* tools/power/x86/turbostat/turbostat.c 3160 */(cap_user_header_t hdrp,
								     cap_user_data_t datap);
	int cocci_id/* tools/power/x86/turbostat/turbostat.c 316 */(struct thread_data *,
								    struct core_data *,
								    struct pkg_data *);
	cap_user_data_t cocci_id/* tools/power/x86/turbostat/turbostat.c 3159 */;
	struct __user_cap_data_struct cocci_id/* tools/power/x86/turbostat/turbostat.c 3158 */;
	cap_user_header_t cocci_id/* tools/power/x86/turbostat/turbostat.c 3157 */;
	struct __user_cap_header_struct cocci_id/* tools/power/x86/turbostat/turbostat.c 3156 */;
	char cocci_id/* tools/power/x86/turbostat/turbostat.c 3146 */[32];
	struct stat cocci_id/* tools/power/x86/turbostat/turbostat.c 3145 */;
	void cocci_id/* tools/power/x86/turbostat/turbostat.c 305 */(void);
	fd_set cocci_id/* tools/power/x86/turbostat/turbostat.c 3028 */;
	struct timespec cocci_id/* tools/power/x86/turbostat/turbostat.c 3027 */;
	struct timeval cocci_id/* tools/power/x86/turbostat/turbostat.c 3026 */;
	struct sigaction cocci_id/* tools/power/x86/turbostat/turbostat.c 3012 */;
	struct topo_params {
		int num_packages;
		int num_die;
		int num_cpus;
		int num_cores;
		int max_cpu_num;
		int max_node_num;
		int nodes_per_pkg;
		int cores_per_node;
		int threads_per_core;
	} cocci_id/* tools/power/x86/turbostat/turbostat.c 288 */;
	struct cpu_topology {
		int physical_package_id;
		int die_id;
		int logical_cpu_id;
		int physical_node_id;
		int logical_node_id;
		int physical_core_id;
		int thread_id;
		cpu_set_t *put_ids;
	} *cocci_id/* tools/power/x86/turbostat/turbostat.c 277 */;
	int cocci_id/* tools/power/x86/turbostat/turbostat.c 2731 */(int);
	struct system_summary {
		struct thread_data threads;
		struct core_data cores;
		struct pkg_data packages;
	} cocci_id/* tools/power/x86/turbostat/turbostat.c 271 */;
	int cocci_id/* tools/power/x86/turbostat/turbostat.c 2678 */(struct thread_data *,
								     struct core_data *,
								     struct pkg_data *,
								     struct thread_data *,
								     struct core_data *,
								     struct pkg_data *);
	size_t cocci_id/* tools/power/x86/turbostat/turbostat.c 2635 */;
	unsigned long cocci_id/* tools/power/x86/turbostat/turbostat.c 2631 */;
	struct sys_counters {
		unsigned int added_thread_counters;
		unsigned int added_core_counters;
		unsigned int added_package_counters;
		struct msr_counter *tp;
		struct msr_counter *cp;
		struct msr_counter *pp;
	} cocci_id/* tools/power/x86/turbostat/turbostat.c 262 */;
	char cocci_id/* tools/power/x86/turbostat/turbostat.c 2610 */[80];
	struct cpu_topology *cocci_id/* tools/power/x86/turbostat/turbostat.c 2608 */;
	char cocci_id/* tools/power/x86/turbostat/turbostat.c 2527 */[PATH_MAX];
	va_list cocci_id/* tools/power/x86/turbostat/turbostat.c 2526 */;
	struct msr_counter {
		unsigned int msr_num;
		char name[NAME_BYTES];
		char path[PATH_BYTES];
		unsigned int width;
		enum counter_type type;
		enum counter_format format;
		struct msr_counter *next;
		unsigned int flags;
#define FLAGS_HIDE (1 << 0)
#define FLAGS_SHOW (1 << 1)
#define SYSFS_PERCPU (1 << 1)
				} cocci_id/* tools/power/x86/turbostat/turbostat.c 248 */;
	enum counter_format{FORMAT_RAW, FORMAT_DELTA, FORMAT_PERCENT,} cocci_id/* tools/power/x86/turbostat/turbostat.c 246 */;
	enum counter_type{COUNTER_ITEMS, COUNTER_CYCLES, COUNTER_SECONDS, COUNTER_USEC,} cocci_id/* tools/power/x86/turbostat/turbostat.c 245 */;
	enum counter_scope{SCOPE_CPU, SCOPE_CORE, SCOPE_PACKAGE,} cocci_id/* tools/power/x86/turbostat/turbostat.c 244 */;
	unsigned int cocci_id/* tools/power/x86/turbostat/turbostat.c 2422 */[];
	unsigned int cocci_id/* tools/power/x86/turbostat/turbostat.c 2299 */[buckets_no];
	const unsigned int cocci_id/* tools/power/x86/turbostat/turbostat.c 2294 */;
	int cocci_id/* tools/power/x86/turbostat/turbostat.c 2052 */[16];
	char *cocci_id/* tools/power/x86/turbostat/turbostat.c 2045 */[];
	struct pkg_data {
		unsigned long long pc2;
		unsigned long long pc3;
		unsigned long long pc6;
		unsigned long long pc7;
		unsigned long long pc8;
		unsigned long long pc9;
		unsigned long long pc10;
		unsigned long long cpu_lpi;
		unsigned long long sys_lpi;
		unsigned long long pkg_wtd_core_c0;
		unsigned long long pkg_any_core_c0;
		unsigned long long pkg_any_gfxe_c0;
		unsigned long long pkg_both_core_gfxe_c0;
		long long gfx_rc6_ms;
		unsigned int gfx_mhz;
		unsigned int package_id;
		unsigned int energy_pkg;
		unsigned int energy_dram;
		unsigned int energy_cores;
		unsigned int energy_gfx;
		unsigned int rapl_pkg_perf_status;
		unsigned int rapl_dram_perf_status;
		unsigned int pkg_temp_c;
		unsigned long long counter[MAX_ADDED_COUNTERS];
	} *cocci_id/* tools/power/x86/turbostat/turbostat.c 197 */;
	struct core_data {
		unsigned long long c3;
		unsigned long long c6;
		unsigned long long c7;
		unsigned long long mc6_us;
		unsigned int core_temp_c;
		unsigned int core_energy;
		unsigned int core_id;
		unsigned long long counter[MAX_ADDED_COUNTERS];
	} *cocci_id/* tools/power/x86/turbostat/turbostat.c 186 */;
	char cocci_id/* tools/power/x86/turbostat/turbostat.c 1705 */[128 + PATH_BYTES];
	unsigned long long *cocci_id/* tools/power/x86/turbostat/turbostat.c 1699 */;
	struct thread_data {
		struct timeval tv_begin;
		struct timeval tv_end;
		struct timeval tv_delta;
		unsigned long long tsc;
		unsigned long long aperf;
		unsigned long long mperf;
		unsigned long long c1;
		unsigned long long irq_count;
		unsigned int smi_count;
		unsigned int cpu_id;
		unsigned int apic_id;
		unsigned int x2apic_id;
		unsigned int flags;
#define CPU_IS_FIRST_THREAD_IN_CORE 0x2
#define CPU_IS_FIRST_CORE_IN_PACKAGE 0x4
		unsigned long long counter[MAX_ADDED_THREAD_COUNTERS];
	} *cocci_id/* tools/power/x86/turbostat/turbostat.c 167 */;
	const char *cocci_id/* tools/power/x86/turbostat/turbostat.c 1669 */;
	cpu_set_t *cocci_id/* tools/power/x86/turbostat/turbostat.c 161 */;
	struct thread_data *cocci_id/* tools/power/x86/turbostat/turbostat.c 1410 */;
	struct pkg_data *cocci_id/* tools/power/x86/turbostat/turbostat.c 1410 */;
	struct core_data *cocci_id/* tools/power/x86/turbostat/turbostat.c 1410 */;
}
