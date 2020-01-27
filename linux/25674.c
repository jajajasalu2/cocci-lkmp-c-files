cocci_test_suite() {
	int cocci_id/* tools/perf/util/genelf_debug.c 54 */;
	char *cocci_id/* tools/perf/util/genelf_debug.c 51 */;
	struct buffer_ext cocci_id/* tools/perf/util/genelf_debug.c 489 */;
	Elf_Shdr *cocci_id/* tools/perf/util/genelf_debug.c 488 */;
	Elf_Scn *cocci_id/* tools/perf/util/genelf_debug.c 487 */;
	Elf_Data *cocci_id/* tools/perf/util/genelf_debug.c 486 */;
	uint64_t cocci_id/* tools/perf/util/genelf_debug.c 484 */;
	Elf *cocci_id/* tools/perf/util/genelf_debug.c 484 */;
	const char *cocci_id/* tools/perf/util/genelf_debug.c 46 */;
	struct compilation_unit_header cocci_id/* tools/perf/util/genelf_debug.c 458 */;
	struct compilation_unit_header *cocci_id/* tools/perf/util/genelf_debug.c 447 */;
	size_t cocci_id/* tools/perf/util/genelf_debug.c 445 */;
	struct buffer_ext *cocci_id/* tools/perf/util/genelf_debug.c 444 */;
	void cocci_id/* tools/perf/util/genelf_debug.c 443 */;
	struct debug_line_header cocci_id/* tools/perf/util/genelf_debug.c 419 */;
	void *cocci_id/* tools/perf/util/genelf_debug.c 406 */;
	struct debug_line_header *cocci_id/* tools/perf/util/genelf_debug.c 401 */;
	unsigned long cocci_id/* tools/perf/util/genelf_debug.c 399 */;
	struct debug_entry *cocci_id/* tools/perf/util/genelf_debug.c 398 */;
	struct buffer_ext {
		size_t cur_pos;
		size_t max_sz;
		void *data;
	} cocci_id/* tools/perf/util/genelf_debug.c 39 */;
	int8_t cocci_id/* tools/perf/util/genelf_debug.c 37 */;
	uint8_t cocci_id/* tools/perf/util/genelf_debug.c 36 */;
	int16_t cocci_id/* tools/perf/util/genelf_debug.c 35 */;
	int32_t cocci_id/* tools/perf/util/genelf_debug.c 34 */;
	uint16_t cocci_id/* tools/perf/util/genelf_debug.c 33 */;
	uint32_t cocci_id/* tools/perf/util/genelf_debug.c 32 */;
	unsigned int cocci_id/* tools/perf/util/genelf_debug.c 294 */;
	long cocci_id/* tools/perf/util/genelf_debug.c 255 */;
	ubyte cocci_id/* tools/perf/util/genelf_debug.c 220 */;
	uword cocci_id/* tools/perf/util/genelf_debug.c 179 */;
	ubyte cocci_id/* tools/perf/util/genelf_debug.c 156 */[];
	const struct debug_line_header cocci_id/* tools/perf/util/genelf_debug.c 145 */;
	struct compilation_unit_header {
		uword total_length;
		uhalf version;
		uword debug_abbrev_offset;
		ubyte pointer_size;
	}__packed cocci_id/* tools/perf/util/genelf_debug.c 135 */;
	struct debug_line_header {
		uword total_length;
		uhalf version;
		uword prolog_length;
		ubyte minimum_instruction_length;
		ubyte default_is_stmt;
		sbyte line_base;
		ubyte line_range;
		ubyte opcode_base;
	}__packed cocci_id/* tools/perf/util/genelf_debug.c 102 */;
}
