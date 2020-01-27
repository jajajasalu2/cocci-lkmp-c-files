cocci_test_suite() {
	char *cocci_id/* tools/testing/selftests/bpf/test_verifier.c 986 */;
	int cocci_id/* tools/testing/selftests/bpf/test_verifier.c 903 */[MAX_NR_MAPS];
	struct bpf_load_program_attr cocci_id/* tools/testing/selftests/bpf/test_verifier.c 901 */;
	char cocci_id/* tools/testing/selftests/bpf/test_verifier.c 867 */[80];
	bool cocci_id/* tools/testing/selftests/bpf/test_verifier.c 865 */;
	const char *cocci_id/* tools/testing/selftests/bpf/test_verifier.c 865 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/test_verifier.c 842 */;
	__u8 cocci_id/* tools/testing/selftests/bpf/test_verifier.c 841 */[TEST_DATA_LEN << 2];
	void *cocci_id/* tools/testing/selftests/bpf/test_verifier.c 839 */;
	size_t cocci_id/* tools/testing/selftests/bpf/test_verifier.c 839 */;
	struct other_val cocci_id/* tools/testing/selftests/bpf/test_verifier.c 670 */;
	struct test_val cocci_id/* tools/testing/selftests/bpf/test_verifier.c 661 */;
	struct bpf_test {
		const char *descr;
		struct bpf_insn insns[MAX_INSNS];
		struct bpf_insn *fill_insns;
		int fixup_map_hash_8b[MAX_FIXUPS];
		int fixup_map_hash_48b[MAX_FIXUPS];
		int fixup_map_hash_16b[MAX_FIXUPS];
		int fixup_map_array_48b[MAX_FIXUPS];
		int fixup_map_sockmap[MAX_FIXUPS];
		int fixup_map_sockhash[MAX_FIXUPS];
		int fixup_map_xskmap[MAX_FIXUPS];
		int fixup_map_stacktrace[MAX_FIXUPS];
		int fixup_prog1[MAX_FIXUPS];
		int fixup_prog2[MAX_FIXUPS];
		int fixup_map_in_map[MAX_FIXUPS];
		int fixup_cgroup_storage[MAX_FIXUPS];
		int fixup_percpu_cgroup_storage[MAX_FIXUPS];
		int fixup_map_spin_lock[MAX_FIXUPS];
		int fixup_map_array_ro[MAX_FIXUPS];
		int fixup_map_array_wo[MAX_FIXUPS];
		int fixup_map_array_small[MAX_FIXUPS];
		int fixup_sk_storage_map[MAX_FIXUPS];
		int fixup_map_event_output[MAX_FIXUPS];
		const char *errstr;
		const char *errstr_unpriv;
		uint32_t insn_processed;
		int prog_len;
		enum{UNDEF, ACCEPT, REJECT, VERBOSE_ACCEPT,} result,result_unpriv;
		enum bpf_prog_type prog_type;
		uint8_t flags;
		void (*fill_helper)(struct bpf_test *self);
		uint8_t runs;

#define

bpf_testdata_struct_t

struct

{

uint32_t

retval

,

retval_unpriv

;

union

{

__u8

data

[

TEST_DATA_LEN

]

;

__u64

data64

[

TEST_DATA_LEN

/

8

]

;

}

;

}



		union {
			struct {
				uint32_t retval,retval_unpriv;
				union {
					__u8 data[TEST_DATA_LEN];
					__u64 data64[TEST_DATA_LEN / 8];
				};
			}bpf_testdata_struct_t;
			struct {
				uint32_t retval,retval_unpriv;
				union {
					__u8 data[TEST_DATA_LEN];
					__u64 data64[TEST_DATA_LEN / 8];
				};
			}bpf_testdata_struct_t retvals[MAX_TEST_RUNS];
		};
		enum bpf_attach_type expected_attach_type;
	} cocci_id/* tools/testing/selftests/bpf/test_verifier.c 66 */;
	long long cocci_id/* tools/testing/selftests/bpf/test_verifier.c 651 */;
	struct bpf_insn cocci_id/* tools/testing/selftests/bpf/test_verifier.c 642 */;
	int *cocci_id/* tools/testing/selftests/bpf/test_verifier.c 619 */;
	char cocci_id/* tools/testing/selftests/bpf/test_verifier.c 616 */[UINT_MAX >> 8];
	struct bpf_create_map_attr cocci_id/* tools/testing/selftests/bpf/test_verifier.c 570 */;
	struct btf_header cocci_id/* tools/testing/selftests/bpf/test_verifier.c 540 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/test_verifier.c 526 */[];
	const char cocci_id/* tools/testing/selftests/bpf/test_verifier.c 525 */[];
	struct bpf_cgroup_storage_key cocci_id/* tools/testing/selftests/bpf/test_verifier.c 505 */;
	enum bpf_map_type cocci_id/* tools/testing/selftests/bpf/test_verifier.c 501 */;
	enum bpf_prog_type cocci_id/* tools/testing/selftests/bpf/test_verifier.c 438 */;
	struct bpf_insn cocci_id/* tools/testing/selftests/bpf/test_verifier.c 425 */[];
	uint32_t cocci_id/* tools/testing/selftests/bpf/test_verifier.c 377 */;
	int cocci_id/* tools/testing/selftests/bpf/test_verifier.c 377 */;
	const struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/test_verifier.c 357 */;
	struct bpf_test cocci_id/* tools/testing/selftests/bpf/test_verifier.c 351 */[];
	struct __sk_buff cocci_id/* tools/testing/selftests/bpf/test_verifier.c 322 */;
	struct bpf_sock_tuple cocci_id/* tools/testing/selftests/bpf/test_verifier.c 310 */;
	struct bpf_insn cocci_id/* tools/testing/selftests/bpf/test_verifier.c 211 */[2];
	uint64_t cocci_id/* tools/testing/selftests/bpf/test_verifier.c 205 */;
	unsigned int cocci_id/* tools/testing/selftests/bpf/test_verifier.c 189 */;
	struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/test_verifier.c 182 */;
	struct bpf_test *cocci_id/* tools/testing/selftests/bpf/test_verifier.c 180 */;
	void cocci_id/* tools/testing/selftests/bpf/test_verifier.c 180 */;
	struct other_val {
		long long foo;
		long long bar;
	} cocci_id/* tools/testing/selftests/bpf/test_verifier.c 128 */;
	struct test_val {
		unsigned int index;
		int foo[MAX_ENTRIES];
	} cocci_id/* tools/testing/selftests/bpf/test_verifier.c 123 */;
	char **cocci_id/* tools/testing/selftests/bpf/test_verifier.c 1136 */;
	FILE *cocci_id/* tools/testing/selftests/bpf/test_verifier.c 1080 */;
	char cocci_id/* tools/testing/selftests/bpf/test_verifier.c 1079 */[2];
	const cap_value_t cocci_id/* tools/testing/selftests/bpf/test_verifier.c 1057 */;
	cap_flag_value_t cocci_id/* tools/testing/selftests/bpf/test_verifier.c 1056 */;
	cap_t cocci_id/* tools/testing/selftests/bpf/test_verifier.c 1055 */;
}
