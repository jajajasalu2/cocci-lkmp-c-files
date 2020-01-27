cocci_test_suite() {
	uint64_t cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_probed.c 45 */;
	struct core_reloc_bitfields_output *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_probed.c 44 */;
	struct core_reloc_bitfields *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_probed.c 43 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_probed.c 41 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_probed.c 41 */;
	struct core_reloc_bitfields_output {
		int64_t ub1;
		int64_t ub2;
		int64_t ub7;
		int64_t sb4;
		int64_t sb20;
		int64_t u32;
		int64_t s32;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_probed.c 30 */;
	struct core_reloc_bitfields {
		uint8_t ub1:1;
		uint8_t ub2:2;
		uint32_t ub7:7;
		int8_t sb4:4;
		int32_t sb20:20;
		uint32_t u32;
		int32_t s32;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_probed.c 16 */;
	struct {
		char in[256];
		char out[256];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_bitfields_probed.c 11 */;
}
