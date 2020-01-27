cocci_test_suite() {
	struct addr_map_symbol *cocci_id/* tools/perf/util/annotate.c 983 */;
	struct ins_ops cocci_id/* tools/perf/util/annotate.c 96 */;
	struct sym_hist *cocci_id/* tools/perf/util/annotate.c 874 */;
	struct symbol *cocci_id/* tools/perf/util/annotate.c 872 */;
	struct perf_sample *cocci_id/* tools/perf/util/annotate.c 870 */;
	struct annotated_source *cocci_id/* tools/perf/util/annotate.c 869 */;
	struct map_symbol *cocci_id/* tools/perf/util/annotate.c 868 */;
	unsigned cocci_id/* tools/perf/util/annotate.c 820 */;
	struct cyc_hist *cocci_id/* tools/perf/util/annotate.c 818 */;
	struct cyc_hist cocci_id/* tools/perf/util/annotate.c 797 */;
	const size_t cocci_id/* tools/perf/util/annotate.c 795 */;
	struct sym_hist_entry cocci_id/* tools/perf/util/annotate.c 776 */;
	struct sym_hist cocci_id/* tools/perf/util/annotate.c 776 */;
	size_t cocci_id/* tools/perf/util/annotate.c 761 */;
	struct arch {
		const char *name;
		struct ins *instructions;
		size_t nr_instructions;
		size_t nr_instructions_allocated;
		struct ins_ops *(*associate_instruction_ops)(struct arch *arch,
							     const char *name);
		bool sorted_instructions;
		bool initialized;
		void *priv;
		unsigned int model;
		unsigned int family;
		int (*init)(struct arch *arch, char *cpuid);
		bool (*ins_is_fused)(struct arch *arch, const char *ins1,
				     const char *ins2);
		struct {
			char comment_char;
			char skip_functions_char;
		} objdump;
	} cocci_id/* tools/perf/util/annotate.c 76 */;
	int cocci_id/* tools/perf/util/annotate.c 74 */(char *line,
							const char **namep,
							char **rawp);
	struct arch cocci_id/* tools/perf/util/annotate.c 738 */;
	void cocci_id/* tools/perf/util/annotate.c 73 */(struct arch *arch);
	struct ins_ops *cocci_id/* tools/perf/util/annotate.c 72 */(struct arch *arch,
								    const char *name);
	const struct arch *cocci_id/* tools/perf/util/annotate.c 715 */;
	regex_t cocci_id/* tools/perf/util/annotate.c 70 */;
	struct ins cocci_id/* tools/perf/util/annotate.c 692 */;
	const int cocci_id/* tools/perf/util/annotate.c 685 */;
	struct ins *cocci_id/* tools/perf/util/annotate.c 684 */;
	struct ins_ops *cocci_id/* tools/perf/util/annotate.c 682 */;
	struct arch *cocci_id/* tools/perf/util/annotate.c 682 */;
	const struct ins *cocci_id/* tools/perf/util/annotate.c 669 */;
	struct annotation_options cocci_id/* tools/perf/util/annotate.c 62 */;
	unsigned char cocci_id/* tools/perf/util/annotate.c 55 */;
	u64 *cocci_id/* tools/perf/util/annotate.c 451 */;
	char **cocci_id/* tools/perf/util/annotate.c 451 */;
	char *cocci_id/* tools/perf/util/annotate.c 3182 */;
	struct annotation_options *cocci_id/* tools/perf/util/annotate.c 3180 */;
	const struct option *cocci_id/* tools/perf/util/annotate.c 3177 */;
	bool *cocci_id/* tools/perf/util/annotate.c 3143 */;
	int *cocci_id/* tools/perf/util/annotate.c 3138 */;
	struct annotation_config cocci_id/* tools/perf/util/annotate.c 3131 */;
	struct annotation_config *cocci_id/* tools/perf/util/annotate.c 3123 */;
	const struct annotation_config *cocci_id/* tools/perf/util/annotate.c 3115 */;
	const void *cocci_id/* tools/perf/util/annotate.c 3113 */;
	struct annotation_config {
		const char *name;
		void *value;
	} cocci_id/* tools/perf/util/annotate.c 3097 */[];
	struct annotation_write_ops *cocci_id/* tools/perf/util/annotate.c 3041 */;
	u64 cocci_id/* tools/perf/util/annotate.c 2992 */;
	char cocci_id/* tools/perf/util/annotate.c 2954 */[32];
	char cocci_id/* tools/perf/util/annotate.c 2892 */[256];
	void (*cocci_id/* tools/perf/util/annotate.c 2885 */)(void *obj,
							      int graph);
	void (*cocci_id/* tools/perf/util/annotate.c 2884 */)(void *obj,
							      const char *fmt,
							      ...);
	int (*cocci_id/* tools/perf/util/annotate.c 2883 */)(void *obj,
							     int nr,
							     bool current);
	void (*cocci_id/* tools/perf/util/annotate.c 2882 */)(void *obj,
							      double percent,
							      bool current);
	int (*cocci_id/* tools/perf/util/annotate.c 2881 */)(void *obj,
							     int color);
	unsigned int cocci_id/* tools/perf/util/annotate.c 2880 */;
	struct annotation_line *cocci_id/* tools/perf/util/annotate.c 2878 */;
	struct annotation *cocci_id/* tools/perf/util/annotate.c 2878 */;
	struct rb_root cocci_id/* tools/perf/util/annotate.c 2717 */;
	struct map *cocci_id/* tools/perf/util/annotate.c 2712 */;
	struct disasm_line *cocci_id/* tools/perf/util/annotate.c 2613 */;
	FILE *cocci_id/* tools/perf/util/annotate.c 2582 */;
	char cocci_id/* tools/perf/util/annotate.c 2506 */[1024];
	struct annotation_write_ops cocci_id/* tools/perf/util/annotate.c 2480 */;
	va_list cocci_id/* tools/perf/util/annotate.c 2454 */;
	const char *cocci_id/* tools/perf/util/annotate.c 2452 */;
	void *cocci_id/* tools/perf/util/annotate.c 2452 */;
	void cocci_id/* tools/perf/util/annotate.c 2452 */;
	struct addr_map_symbol cocci_id/* tools/perf/util/annotate.c 245 */;
	int cocci_id/* tools/perf/util/annotate.c 2447 */;
	bool cocci_id/* tools/perf/util/annotate.c 2442 */;
	double cocci_id/* tools/perf/util/annotate.c 2436 */;
	typeof(*queue) cocci_id/* tools/perf/util/annotate.c 2423 */;
	struct ins_operands *cocci_id/* tools/perf/util/annotate.c 241 */;
	char cocci_id/* tools/perf/util/annotate.c 2355 */[512];
	struct list_head *cocci_id/* tools/perf/util/annotate.c 2323 */;
	struct annotation_line cocci_id/* tools/perf/util/annotate.c 2242 */;
	struct rb_node *cocci_id/* tools/perf/util/annotate.c 2238 */;
	struct rb_node **cocci_id/* tools/perf/util/annotate.c 2237 */;
	struct rb_root *cocci_id/* tools/perf/util/annotate.c 2234 */;
	struct perf_env *cocci_id/* tools/perf/util/annotate.c 2156 */;
	struct annotate_args cocci_id/* tools/perf/util/annotate.c 2151 */;
	struct arch **cocci_id/* tools/perf/util/annotate.c 2147 */;
	struct annotation_data *cocci_id/* tools/perf/util/annotate.c 2126 */;
	struct hists *cocci_id/* tools/perf/util/annotate.c 2125 */;
	s64 cocci_id/* tools/perf/util/annotate.c 2109 */;
	char cocci_id/* tools/perf/util/annotate.c 1956 */[KMOD_DECOMP_LEN];
	struct child_process cocci_id/* tools/perf/util/annotate.c 1930 */;
	const char *cocci_id/* tools/perf/util/annotate.c 1922 */[];
	struct kcore_extract cocci_id/* tools/perf/util/annotate.c 1915 */;
	size_t *cocci_id/* tools/perf/util/annotate.c 1851 */;
	const struct bpf_line_info *cocci_id/* tools/perf/util/annotate.c 1783 */;
	__u8 *cocci_id/* tools/perf/util/annotate.c 1765 */;
	struct btf_node *cocci_id/* tools/perf/util/annotate.c 1760 */;
	fprintf_ftype cocci_id/* tools/perf/util/annotate.c 1739 */;
	bfd *cocci_id/* tools/perf/util/annotate.c 1716 */;
	struct btf *cocci_id/* tools/perf/util/annotate.c 1711 */;
	struct disassemble_info cocci_id/* tools/perf/util/annotate.c 1708 */;
	disassembler_ftype cocci_id/* tools/perf/util/annotate.c 1706 */;
	struct bpf_prog_info_node *cocci_id/* tools/perf/util/annotate.c 1704 */;
	struct bpf_prog_linfo *cocci_id/* tools/perf/util/annotate.c 1703 */;
	struct bpf_prog_info_linear *cocci_id/* tools/perf/util/annotate.c 1702 */;
	char cocci_id/* tools/perf/util/annotate.c 1643 */[PATH_MAX];
	struct dso *cocci_id/* tools/perf/util/annotate.c 1641 */;
	struct arch cocci_id/* tools/perf/util/annotate.c 161 */[];
	char cocci_id/* tools/perf/util/annotate.c 1600 */[SBUILD_ID_SIZE + 15];
	regmatch_t cocci_id/* tools/perf/util/annotate.c 1503 */[2];
	struct disasm_line cocci_id/* tools/perf/util/annotate.c 1378 */;
	const u64 cocci_id/* tools/perf/util/annotate.c 1362 */;
	struct block_range *cocci_id/* tools/perf/util/annotate.c 1277 */;
	struct annotate_args *cocci_id/* tools/perf/util/annotate.c 1177 */;
	struct annotate_args {
		size_t privsize;
		struct arch *arch;
		struct map_symbol ms;
		struct evsel *evsel;
		struct annotation_options *options;
		s64 offset;
		char *line;
		int line_nr;
	} cocci_id/* tools/perf/util/annotate.c 1145 */;
	char cocci_id/* tools/perf/util/annotate.c 1119 */;
	const char **cocci_id/* tools/perf/util/annotate.c 1117 */;
	struct hist_entry *cocci_id/* tools/perf/util/annotate.c 1100 */;
	struct evsel *cocci_id/* tools/perf/util/annotate.c 1095 */;
	float cocci_id/* tools/perf/util/annotate.c 1037 */;
}
