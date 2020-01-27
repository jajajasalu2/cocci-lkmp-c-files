cocci_test_suite() {
	enum vmpressure_modes{VMPRESSURE_NO_PASSTHROUGH=0, VMPRESSURE_HIERARCHY, VMPRESSURE_LOCAL, VMPRESSURE_NUM_MODES,} cocci_id/* mm/vmpressure.c 93 */;
	enum vmpressure_levels{VMPRESSURE_LOW=0, VMPRESSURE_MEDIUM, VMPRESSURE_CRITICAL, VMPRESSURE_NUM_LEVELS,} cocci_id/* mm/vmpressure.c 86 */;
	struct cgroup_subsys_state *cocci_id/* mm/vmpressure.c 77 */;
	struct vmpressure cocci_id/* mm/vmpressure.c 72 */;
	const unsigned int cocci_id/* mm/vmpressure.c 47 */;
	const unsigned long cocci_id/* mm/vmpressure.c 38 */;
	char *cocci_id/* mm/vmpressure.c 369 */;
	enum vmpressure_modes cocci_id/* mm/vmpressure.c 367 */;
	const char *cocci_id/* mm/vmpressure.c 363 */;
	struct eventfd_ctx *cocci_id/* mm/vmpressure.c 363 */;
	int cocci_id/* mm/vmpressure.c 323 */;
	enum vmpressure_levels cocci_id/* mm/vmpressure.c 280 */;
	struct vmpressure *cocci_id/* mm/vmpressure.c 243 */;
	unsigned long cocci_id/* mm/vmpressure.c 241 */;
	gfp_t cocci_id/* mm/vmpressure.c 240 */;
	bool cocci_id/* mm/vmpressure.c 240 */;
	struct mem_cgroup *cocci_id/* mm/vmpressure.c 240 */;
	void cocci_id/* mm/vmpressure.c 240 */;
	struct work_struct *cocci_id/* mm/vmpressure.c 181 */;
	struct vmpressure_event *cocci_id/* mm/vmpressure.c 162 */;
	const enum vmpressure_levels cocci_id/* mm/vmpressure.c 159 */;
	struct vmpressure_event {
		struct eventfd_ctx *efd;
		enum vmpressure_levels level;
		enum vmpressure_modes mode;
		struct list_head node;
	} cocci_id/* mm/vmpressure.c 151 */;
	const char *const cocci_id/* mm/vmpressure.c 100 */[];
}
