cocci_test_suite() {
	struct arm64_annotate *cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 90 */;
	struct arch *cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 88 */;
	char *cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 88 */;
	int cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 88 */;
	regmatch_t cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 73 */[2];
	struct arm64_annotate {
		regex_t call_insn,jump_insn;
	} cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 7 */;
	const char *cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 69 */;
	struct ins_ops *cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 69 */;
	struct ins_ops cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 64 */;
	int cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 61 */(struct ins *ins,
									   char *bf,
									   size_t size,
									   struct ins_operands *ops,
									   int max_ins_name);
	struct map_symbol *cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 14 */;
	struct ins_operands *cocci_id/* tools/perf/arch/arm64/annotate/instructions.c 13 */;
}
