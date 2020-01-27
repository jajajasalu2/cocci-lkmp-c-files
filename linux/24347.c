cocci_test_suite() {
	void cocci_id/* net/phonet/pn_dev.c 89 */;
	struct phonet_device_list *cocci_id/* net/phonet/pn_dev.c 52 */;
	struct phonet_device *cocci_id/* net/phonet/pn_dev.c 50 */;
	struct net_device *cocci_id/* net/phonet/pn_dev.c 50 */;
	struct phonet_net *cocci_id/* net/phonet/pn_dev.c 45 */;
	struct phonet_routes *cocci_id/* net/phonet/pn_dev.c 362 */;
	struct seq_net_private cocci_id/* net/phonet/pn_dev.c 343 */;
	unsigned int cocci_id/* net/phonet/pn_dev.c 34 */;
	int __init cocci_id/* net/phonet/pn_dev.c 336 */;
	struct phonet_net cocci_id/* net/phonet/pn_dev.c 332 */;
	struct pernet_operations cocci_id/* net/phonet/pn_dev.c 328 */;
	void __net_exit cocci_id/* net/phonet/pn_dev.c 320 */;
	int __net_init cocci_id/* net/phonet/pn_dev.c 306 */;
	struct notifier_block cocci_id/* net/phonet/pn_dev.c 300 */;
	struct phonet_net {
		struct phonet_device_list pndevs;
		struct phonet_routes routes;
	} cocci_id/* net/phonet/pn_dev.c 29 */;
	void *cocci_id/* net/phonet/pn_dev.c 282 */;
	struct notifier_block *cocci_id/* net/phonet/pn_dev.c 281 */;
	unsigned long cocci_id/* net/phonet/pn_dev.c 281 */;
	struct ifreq *cocci_id/* net/phonet/pn_dev.c 241 */;
	struct phonet_routes {
		struct mutex lock;
		struct net_device __rcu *table[64];
	} cocci_id/* net/phonet/pn_dev.c 24 */;
	struct if_phonet_req cocci_id/* net/phonet/pn_dev.c 235 */;
	struct net *cocci_id/* net/phonet/pn_dev.c 209 */;
	u8 cocci_id/* net/phonet/pn_dev.c 133 */;
	int cocci_id/* net/phonet/pn_dev.c 133 */;
}
