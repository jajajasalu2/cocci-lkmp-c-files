cocci_test_suite() {
	void __init cocci_id/* lib/random32.c 44 */(void);
	struct rnd_state cocci_id/* lib/random32.c 430 */;
	struct prandom_test2 {
		u32 seed;
		u32 iteration;
		u32 result;
	} cocci_id/* lib/random32.c 316 */[];
	struct prandom_test1 {
		u32 seed;
		u32 result;
	} cocci_id/* lib/random32.c 306 */[];
	unsigned long cocci_id/* lib/random32.c 266 */;
	bool cocci_id/* lib/random32.c 264 */;
	u32 cocci_id/* lib/random32.c 247 */[4];
	struct rnd_state __percpu *cocci_id/* lib/random32.c 241 */;
	void __init cocci_id/* lib/random32.c 235 */;
	struct timer_list *cocci_id/* lib/random32.c 220 */;
	void cocci_id/* lib/random32.c 216 */(struct timer_list *unused);
	int cocci_id/* lib/random32.c 200 */;
	int __init cocci_id/* lib/random32.c 198 */;
	unsigned int cocci_id/* lib/random32.c 153 */;
	u32 cocci_id/* lib/random32.c 151 */;
	void cocci_id/* lib/random32.c 151 */;
	struct rnd_state *cocci_id/* lib/random32.c 129 */;
	void *cocci_id/* lib/random32.c 127 */;
	size_t cocci_id/* lib/random32.c 127 */;
	u8 cocci_id/* lib/random32.c 114 */;
	u32 *cocci_id/* lib/random32.c 106 */;
	u8 *cocci_id/* lib/random32.c 103 */;
	per_cpu__net_rand_state DEFINE_PER_CPU(struct rnd_state,
					       net_rand_state) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
