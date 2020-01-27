cocci_test_suite() {
	struct struct_w_typedefs {
		int_t a;
		crazy_ptr_t b;
		we_need_to_go_deeper_ptr_t c;
		how_about_this_ptr_t d;
		ptr_arr_t e;
		fn_ptr1_t f;
		printf_fn_t g;
		fn_ptr2_t h;
		fn_complex_t i;
		signal_t j;
		fn_ptr_arr1_t k;
		fn_ptr_arr2_t l;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 99 */;
	char *const *(*cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 97 */[5])();
	char *(*cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 95 */[10])(int **);
	void *(*cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 93 */)(int,
												void(*)(int));
	enum e1{A=0, B=1,} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 9 */;
	struct {
		int a;
		void (*b)(int, struct {
					int c;
				}, union {
				char d;
				int e[5];
			});
	} (*cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 78 */)(union {
				void *f;
				char g[16];
			}, struct {
			int h;
		});
	char *const *(*cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 74 */)(struct {
				int a;
			}, int(*)(int));
	void (*cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 40 */)(const char *,
											       ...);
	void (*cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 38 */)(int);
	int *cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 36 */[10];
	int *****cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 32 */;
	volatile const int *const volatile cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 30 */;
	struct root_struct *cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 226 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 226 */;
	enum{F=0, G=1, H=2,} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 22 */;
	struct root_struct {
		enum e1 _1;
		enum e2 _2;
		e2_t _2_1;
		e3_t _2_2;
		struct struct_w_typedefs _3;
		anon_struct_t _7;
		struct struct_fwd *_8;
		struct_fwd_t *_9;
		struct_fwd_ptr_t _10;
		union union_fwd *_11;
		union_fwd_t *_12;
		union_fwd_ptr_t _13;
		struct struct_with_embedded_stuff _14;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 208 */;
	enum e2 cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 20 */;
	struct struct_with_embedded_stuff {
		int a;
		struct {
			int b;
			struct {
				struct struct_with_embedded_stuff *c;
				const char *d;
			} e;
			union {
				volatile long int f;
				void *
restrict
 g;
			};
		};
		union {
			const int_t *h;
			void (*i)(char, int, void *);
		} j;
		enum{K=100, L=200,} m;
		char n[16];
		struct {
			char o;
			int p;
			void (*q)(int);
		} r[5];
		struct struct_in_struct s[10];
		int t[11];
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 177 */;
	struct struct_in_struct {
		struct struct_simple simple;
		union union_simple also_simple;
		struct {
			int a;
		} not_so_hard_as_well;
		union {
			int b;
			int c;
		} anon_union_is_good;
		struct {
			int d;
			int e;
		};
		union {
			int f;
			int g;
		};
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 157 */;
	union union_simple {
		void *ptr;
		int num;
		int_t num2;
		union union_empty u;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 150 */;
	union union_empty {
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 148 */;
	enum e2{C=100, D=-100, E=0,} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 14 */;
	struct struct_simple {
		int a;
		char b;
		const int_t *p;
		struct struct_empty s;
		enum e2 e;
		enum{ANON_VAL1=1, ANON_VAL2=2,} f;
		int arr1[13];
		enum e2 arr2[5];
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 134 */;
	struct struct_empty {
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 132 */;
	union union_fwd *cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 130 */;
	union union_fwd cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 126 */;
	struct struct_fwd *cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 124 */;
	struct struct_fwd cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 120 */;
	struct {
		int x;
		int y;
		int z;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_syntax.c 114 */;
}
