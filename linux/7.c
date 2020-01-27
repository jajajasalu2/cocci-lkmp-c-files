cocci_test_suite() {
	uint64_t cocci_id/* scripts/dtc/checks.c 954 */;
	char cocci_id/* scripts/dtc/checks.c 878 */[5];
	unsigned int cocci_id/* scripts/dtc/checks.c 847 */;
	struct property *cocci_id/* scripts/dtc/checks.c 688 */;
	struct node *cocci_id/* scripts/dtc/checks.c 686 */;
	struct dt_info *cocci_id/* scripts/dtc/checks.c 685 */;
	struct check *cocci_id/* scripts/dtc/checks.c 685 */;
	void cocci_id/* scripts/dtc/checks.c 685 */;
	fdt32_t *cocci_id/* scripts/dtc/checks.c 599 */;
	struct property **cocci_id/* scripts/dtc/checks.c 548 */;
	cell_t cocci_id/* scripts/dtc/checks.c 514 */;
	struct label *cocci_id/* scripts/dtc/checks.c 444 */;
	struct marker *cocci_id/* scripts/dtc/checks.c 416 */;
	const char *cocci_id/* scripts/dtc/checks.c 415 */;
	struct check {
		const char *name;
		check_fn fn;
		void *data;
		bool warn,error;
		enum checkstatus status;
		bool inprogress;
		int num_prereqs;
		struct check **prereq;
	} cocci_id/* scripts/dtc/checks.c 31 */;
	void (*cocci_id/* scripts/dtc/checks.c 29 */)(struct check *c,
						      struct dt_info *dti,
						      struct node *node);
	struct check cocci_id/* scripts/dtc/checks.c 27 */;
	enum checkstatus{UNCHECKED=0, PREREQ, PASSED, FAILED,} cocci_id/* scripts/dtc/checks.c 20 */;
	struct check *cocci_id/* scripts/dtc/checks.c 1758 */[];
	char cocci_id/* scripts/dtc/checks.c 1671 */[9];
	int cocci_id/* scripts/dtc/checks.c 1646 */;
	const struct bus_type cocci_id/* scripts/dtc/checks.c 1612 */;
	char *cocci_id/* scripts/dtc/checks.c 1512 */;
	struct provider cocci_id/* scripts/dtc/checks.c 1491 */;
	struct provider *cocci_id/* scripts/dtc/checks.c 1428 */;
	const struct provider *cocci_id/* scripts/dtc/checks.c 1351 */;
	struct provider {
		const char *prop_name;
		const char *cell_name;
		bool optional;
	} cocci_id/* scripts/dtc/checks.c 1341 */;
	bool cocci_id/* scripts/dtc/checks.c 1183 */;
	cell_t *cocci_id/* scripts/dtc/checks.c 1024 */;
	uint32_t cocci_id/* scripts/dtc/checks.c 1022 */;
	char cocci_id/* scripts/dtc/checks.c 1021 */[17];
}
