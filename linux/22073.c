cocci_test_suite() {
	void __exit cocci_id/* lib/test_stackinit.c 383 */;
	void cocci_id/* lib/test_stackinit.c 37 */;
	var_type cocci_id/* lib/test_stackinit.c 36 */;
	unsigned int cocci_id/* lib/test_stackinit.c 334 */;
	int __init cocci_id/* lib/test_stackinit.c 332 */;
	uint64_t *cocci_id/* lib/test_stackinit.c 318 */;
	unsigned long cocci_id/* lib/test_stackinit.c 317 */;
	uint64_t cocci_id/* lib/test_stackinit.c 286 */;
	bool cocci_id/* lib/test_stackinit.c 283 */;
	int noinline cocci_id/* lib/test_stackinit.c 283 */;
	int cocci_id/* lib/test_stackinit.c 283 */;
	struct test_user cocci_id/* lib/test_stackinit.c 276 */;
	char *cocci_id/* lib/test_stackinit.c 27 */;
	size_t cocci_id/* lib/test_stackinit.c 27 */;
	struct test_ cocci_id/* lib/test_stackinit.c 253 */;
	void *cocci_id/* lib/test_stackinit.c 24 */;
	struct test_user {
		u8 one;
		unsigned long two;
		char __user *three;
		unsigned long four;
	} cocci_id/* lib/test_stackinit.c 234 */;
	struct test_trailing_hole {
		char *one;
		char *two;
		char *three;
		char four;
	} cocci_id/* lib/test_stackinit.c 225 */;
	struct test_big_hole {
		u8 one;
		u8 two;
		u8 three;
		struct test_aligned four;
	}__aligned(64) cocci_id/* lib/test_stackinit.c 217 */;
	struct test_aligned {
		u32 internal1;
		u64 internal2;
	}__aligned(64) cocci_id/* lib/test_stackinit.c 212 */;
	volatile u8 cocci_id/* lib/test_stackinit.c 21 */;
	struct test_small_hole {
		size_t one;
		char two;
		int three;
		unsigned long four;
	} cocci_id/* lib/test_stackinit.c 203 */;
	struct test_packed {
		unsigned long one;
		unsigned long two;
		unsigned long three;
		unsigned long four;
	} cocci_id/* lib/test_stackinit.c 195 */;
	u8 cocci_id/* lib/test_stackinit.c 15 */[MAX_VAR_SIZE];
	uintptr_t cocci_id/* lib/test_stackinit.c 133 */;
	ssize_t cocci_id/* lib/test_stackinit.c 133 */;
	u8 cocci_id/* lib/test_stackinit.c 102 */;
}
