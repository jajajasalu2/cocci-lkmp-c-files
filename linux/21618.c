cocci_test_suite() {
	struct {
		unsigned long rate;
		unsigned long cfg;
		unsigned long div;
	} cocci_id/* arch/unicore32/kernel/clock.c 96 */[];
	unsigned long cocci_id/* arch/unicore32/kernel/clock.c 90 */;
	struct clk *cocci_id/* arch/unicore32/kernel/clock.c 85 */;
	void cocci_id/* arch/unicore32/kernel/clock.c 85 */;
	int cocci_id/* arch/unicore32/kernel/clock.c 79 */;
	const char *cocci_id/* arch/unicore32/kernel/clock.c 57 */;
	struct device *cocci_id/* arch/unicore32/kernel/clock.c 57 */;
	struct clk cocci_id/* arch/unicore32/kernel/clock.c 42 */;
	u32 cocci_id/* arch/unicore32/kernel/clock.c 325 */;
	int __init cocci_id/* arch/unicore32/kernel/clock.c 322 */;
	struct {
		unsigned long prate;
		unsigned long drate;
	} cocci_id/* arch/unicore32/kernel/clock.c 301 */[];
	struct clk {
		struct list_head node;
		unsigned long rate;
		const char *name;
	} cocci_id/* arch/unicore32/kernel/clock.c 27 */;
	struct {
		unsigned long prate;
		unsigned long rate;
	} cocci_id/* arch/unicore32/kernel/clock.c 233 */[];
	struct {
		unsigned long mrate;
		unsigned long prate;
	} cocci_id/* arch/unicore32/kernel/clock.c 114 */[];
}
