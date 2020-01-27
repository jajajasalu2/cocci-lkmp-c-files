cocci_test_suite() {
	unsigned int cocci_id/* net/core/fib_notifier.c 85 */;
	void (*cocci_id/* net/core/fib_notifier.c 84 */)(struct notifier_block *nb);
	bool cocci_id/* net/core/fib_notifier.c 83 */;
	struct netlink_ext_ack *cocci_id/* net/core/fib_notifier.c 61 */;
	struct fib_notifier_info *cocci_id/* net/core/fib_notifier.c 20 */;
	int __init cocci_id/* net/core/fib_notifier.c 194 */;
	void cocci_id/* net/core/fib_notifier.c 194 */;
	struct fib_notifier_net cocci_id/* net/core/fib_notifier.c 191 */;
	enum fib_event_type cocci_id/* net/core/fib_notifier.c 19 */;
	struct pernet_operations cocci_id/* net/core/fib_notifier.c 187 */;
	void __net_exit cocci_id/* net/core/fib_notifier.c 180 */;
	struct notifier_block *cocci_id/* net/core/fib_notifier.c 18 */;
	int __net_init cocci_id/* net/core/fib_notifier.c 171 */;
	const struct fib_notifier_ops *cocci_id/* net/core/fib_notifier.c 143 */;
	struct fib_notifier_net *cocci_id/* net/core/fib_notifier.c 132 */;
	struct net *cocci_id/* net/core/fib_notifier.c 130 */;
	struct fib_notifier_net {
		struct list_head fib_notifier_ops;
		struct atomic_notifier_head fib_chain;
	} cocci_id/* net/core/fib_notifier.c 13 */;
	struct fib_notifier_ops *cocci_id/* net/core/fib_notifier.c 129 */;
	int cocci_id/* net/core/fib_notifier.c 129 */;
}
