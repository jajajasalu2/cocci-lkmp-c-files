cocci_test_suite() {
	struct core_reloc_bitfields_output *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 51 */;
	struct core_reloc_bitfields *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 50 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 48 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 48 */;
	struct trace_sys_enter {
		struct pt_regs *regs;
		long id;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 42 */;
	struct pt_regs cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 40 */;
	struct core_reloc_bitfields_output {
		int64_t ub1;
		int64_t ub2;
		int64_t ub7;
		int64_t sb4;
		int64_t sb20;
		int64_t u32;
		int64_t s32;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 30 */;
	struct core_reloc_bitfields {
		uint8_t ub1:1;
		uint8_t ub2:2;
		uint32_t ub7:7;
		int8_t sb4:4;
		int32_t sb20:20;
		uint32_t u32;
		int32_t s32;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 16 */;
	struct {
		char in[256];
		char out[256];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_direct.c 11 */;
}
