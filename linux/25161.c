cocci_test_suite() {
	struct pst_header *cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 86 */;
	struct psb_header *cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 85 */;
	char *cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 82 */;
	int cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 82 */;
	void cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 82 */;
	u_int cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 57 */;
	struct pst_header {
		u_int32_t cpuid;
		u_char fsb;
		u_char maxfid;
		u_char startvid;
		u_char numpstates;
	}__packed cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 49 */;
	struct psb_header {
		char signature[10];
		u_char version;
		u_char flags;
		u_short settlingtime;
		u_char res1;
		u_char numpst;
	}__packed cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 40 */;
	const int cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 26 */[32];
	long cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 24 */;
	char *cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 149 */[];
	struct option cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 136 */[];
	struct pst_header cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 128 */;
	struct psb_header cocci_id/* tools/power/cpupower/debug/i386/dump_psb.c 104 */;
}
