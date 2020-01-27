cocci_test_suite() {
	char *cocci_id/* arch/s390/tools/gen_opcode_table.c 70 */[];
	struct insn_type cocci_id/* arch/s390/tools/gen_opcode_table.c 66 */[];
	struct gen_opcode {
		struct insn *insn;
		int nr;
		struct insn_group *group;
		int nr_groups;
	} cocci_id/* arch/s390/tools/gen_opcode_table.c 43 */;
	struct insn_format {
		char *format;
		int type;
	} cocci_id/* arch/s390/tools/gen_opcode_table.c 38 */;
	struct gen_opcode cocci_id/* arch/s390/tools/gen_opcode_table.c 320 */;
	char **cocci_id/* arch/s390/tools/gen_opcode_table.c 318 */;
	struct insn_group {
		struct insn_type *type;
		int offset;
		int count;
		char opcode[2];
	} cocci_id/* arch/s390/tools/gen_opcode_table.c 31 */;
	char cocci_id/* arch/s390/tools/gen_opcode_table.c 273 */[2];
	struct insn_group *cocci_id/* arch/s390/tools/gen_opcode_table.c 248 */;
	struct insn *cocci_id/* arch/s390/tools/gen_opcode_table.c 246 */;
	struct gen_opcode *cocci_id/* arch/s390/tools/gen_opcode_table.c 246 */;
	int cocci_id/* arch/s390/tools/gen_opcode_table.c 246 */;
	void cocci_id/* arch/s390/tools/gen_opcode_table.c 246 */;
	struct insn {
		struct insn_type *type;
		char opcode[STRING_SIZE_MAX];
		char name[STRING_SIZE_MAX];
		char upper[STRING_SIZE_MAX];
		char format[STRING_SIZE_MAX];
		unsigned int name_len;
	} cocci_id/* arch/s390/tools/gen_opcode_table.c 22 */;
	const void *cocci_id/* arch/s390/tools/gen_opcode_table.c 199 */;
	unsigned char cocci_id/* arch/s390/tools/gen_opcode_table.c 166 */;
	struct insn_type {
		unsigned char byte;
		unsigned char mask;
		char **format;
	} cocci_id/* arch/s390/tools/gen_opcode_table.c 16 */;
	struct insn cocci_id/* arch/s390/tools/gen_opcode_table.c 154 */;
	char cocci_id/* arch/s390/tools/gen_opcode_table.c 134 */[STRING_SIZE_MAX];
	struct insn_type *cocci_id/* arch/s390/tools/gen_opcode_table.c 132 */;
	char *cocci_id/* arch/s390/tools/gen_opcode_table.c 132 */;
}
