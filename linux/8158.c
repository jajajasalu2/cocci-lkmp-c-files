cocci_test_suite() {
	enum nsim_resource_id cocci_id/* drivers/net/netdevsim/fib.c 42 */;
	u64 cocci_id/* drivers/net/netdevsim/fib.c 41 */;
	struct nsim_fib_data {
		struct notifier_block fib_nb;
		struct nsim_per_fib_data ipv4;
		struct nsim_per_fib_data ipv6;
	} cocci_id/* drivers/net/netdevsim/fib.c 35 */;
	struct nsim_per_fib_data {
		struct nsim_fib_entry fib;
		struct nsim_fib_entry rules;
	} cocci_id/* drivers/net/netdevsim/fib.c 30 */;
	void cocci_id/* drivers/net/netdevsim/fib.c 293 */;
	struct nsim_fib_data *cocci_id/* drivers/net/netdevsim/fib.c 250 */;
	struct devlink *cocci_id/* drivers/net/netdevsim/fib.c 250 */;
	struct nsim_fib_entry {
		u64 max;
		u64 num;
	} cocci_id/* drivers/net/netdevsim/fib.c 25 */;
	enum nsim_resource_id cocci_id/* drivers/net/netdevsim/fib.c 233 */[];
	struct nsim_fib_data cocci_id/* drivers/net/netdevsim/fib.c 193 */;
	struct notifier_block *cocci_id/* drivers/net/netdevsim/fib.c 191 */;
	void *cocci_id/* drivers/net/netdevsim/fib.c 166 */;
	unsigned long cocci_id/* drivers/net/netdevsim/fib.c 165 */;
	struct fib_notifier_info *cocci_id/* drivers/net/netdevsim/fib.c 148 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/netdevsim/fib.c 129 */;
	bool cocci_id/* drivers/net/netdevsim/fib.c 128 */;
	struct nsim_fib_entry *cocci_id/* drivers/net/netdevsim/fib.c 128 */;
	int cocci_id/* drivers/net/netdevsim/fib.c 128 */;
}
