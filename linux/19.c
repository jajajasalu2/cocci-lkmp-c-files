cocci_test_suite() {
	struct node *cocci_id/* scripts/dtc/flattree.c 809 */;
	struct reserve_info *cocci_id/* scripts/dtc/flattree.c 808 */;
	struct inbuf cocci_id/* scripts/dtc/flattree.c 805 */;
	struct fdt_header *cocci_id/* scripts/dtc/flattree.c 803 */;
	char *cocci_id/* scripts/dtc/flattree.c 802 */;
	fdt32_t cocci_id/* scripts/dtc/flattree.c 798 */;
	struct dt_info *cocci_id/* scripts/dtc/flattree.c 795 */;
	uint64_t cocci_id/* scripts/dtc/flattree.c 697 */;
	struct property *cocci_id/* scripts/dtc/flattree.c 663 */;
	struct data *cocci_id/* scripts/dtc/flattree.c 65 */;
	struct inbuf *cocci_id/* scripts/dtc/flattree.c 576 */;
	struct inbuf {
		char *base,*limit,*ptr;
	} cocci_id/* scripts/dtc/flattree.c 565 */;
	unsigned int cocci_id/* scripts/dtc/flattree.c 523 */;
	struct version_info *cocci_id/* scripts/dtc/flattree.c 448 */;
	struct fdt_reserve_entry cocci_id/* scripts/dtc/flattree.c 407 */;
	struct fdt_header cocci_id/* scripts/dtc/flattree.c 353 */;
	struct emitter {
		void (*cell)(void *, cell_t);
		void (*string)(void *, const char *, int);
		void (*align)(void *, int);
		void (*data)(void *, struct data);
		void (*beginnode)(void *, struct label *labels);
		void (*endnode)(void *, struct label *labels);
		void (*property)(void *, struct label *labels);
	} cocci_id/* scripts/dtc/flattree.c 35 */;
	bool cocci_id/* scripts/dtc/flattree.c 241 */;
	struct emitter *cocci_id/* scripts/dtc/flattree.c 235 */;
	struct emitter cocci_id/* scripts/dtc/flattree.c 210 */;
	struct label *cocci_id/* scripts/dtc/flattree.c 171 */;
	struct version_info {
		int version;
		int last_comp_version;
		int hdr_size;
		int flags;
	} cocci_id/* scripts/dtc/flattree.c 17 */[];
	fdt32_t *cocci_id/* scripts/dtc/flattree.c 159 */;
	uint32_t cocci_id/* scripts/dtc/flattree.c 158 */;
	struct marker *cocci_id/* scripts/dtc/flattree.c 153 */;
	struct data cocci_id/* scripts/dtc/flattree.c 149 */;
	FILE *cocci_id/* scripts/dtc/flattree.c 144 */;
	void *cocci_id/* scripts/dtc/flattree.c 142 */;
	int cocci_id/* scripts/dtc/flattree.c 142 */;
	void cocci_id/* scripts/dtc/flattree.c 142 */;
	const char *cocci_id/* scripts/dtc/flattree.c 132 */;
	cell_t cocci_id/* scripts/dtc/flattree.c 123 */;
}
