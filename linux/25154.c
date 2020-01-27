cocci_test_suite() {
	struct isst_pkg_ctdp_level_info cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 978 */;
	struct isst_pbf_info *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 809 */;
	struct isst_pkg_ctdp_level_info *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 808 */;
	unsigned long cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 807 */;
	float cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 781 */;
	char cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 780 */[5];
	char *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 779 */;
	FILE *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 778 */;
	struct isst_pkg_ctdp cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 774 */;
	unsigned int *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 740 */;
	int (*cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 731 */)(int cpu,
										  void *arg);
	va_list cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 66 */;
	struct isst_if_msr_cmds cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 643 */;
	unsigned long long *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 641 */;
	struct _cpu_map *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 62 */;
	struct isst_if_mbox_cmds cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 568 */;
	unsigned int cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 562 */;
	unsigned char cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 562 */;
	struct _cpu_map {
		unsigned short core_id;
		unsigned short pkg_id;
		unsigned short die_id;
		unsigned short punit_cpu;
		unsigned short punit_cpu_core;
	} cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 55 */;
	struct isst_if_io_regs cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 522 */;
	int cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 44 */;
	struct isst_if_cpu_maps cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 421 */;
	const char *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 419 */;
	unsigned long long cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 40 */;
	long long cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 384 */;
	char cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 351 */[256];
	long long cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 341 */[MAX_PACKAGE_COUNT][MAX_DIE_PER_PACKAGE];
	int cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 340 */[MAX_PACKAGE_COUNT][MAX_DIE_PER_PACKAGE];
	cpu_set_t *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 322 */;
	cpu_set_t **cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 320 */;
	size_t cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 320 */;
	unsigned short cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 30 */[MAX_CPUS_IN_ONE_REQ];
	short cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 29 */;
	int cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 243 */[MAX_PACKAGE_COUNT * MAX_PACKAGE_COUNT];
	void (*cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 238 */)(int,
										   void *,
										   void *,
										   void *,
										   void *);
	struct option cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 2263 */[];
	char **cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 2257 */;
	struct process_cmd_struct *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 2178 */;
	struct process_cmd_help_struct *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 2177 */;
	struct process_cmd_help_struct cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 2170 */[];
	struct process_cmd_help_struct {
		char *feature;
		void (*process_fn)(void);
	} cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 2157 */;
	char cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 215 */[128];
	struct isst_if_platform_info cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 20 */;
	struct process_cmd_struct cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 1913 */[];
	const int cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 19 */;
	struct isst_clos_config cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 1705 */;
	int *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 1655 */;
	DIR *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 162 */;
	struct isst_fact_info cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 1453 */;
	char cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 139 */[PATH_MAX];
	struct process_cmd_struct {
		char *feature;
		char *command;
		void (*process_fn)(int arg);
		int arg;
	} cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 11 */;
	struct isst_pbf_info cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 1052 */;
	void *cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 1029 */;
	void cocci_id/* tools/power/x86/intel-speed-select/isst-config.c 1029 */;
}
