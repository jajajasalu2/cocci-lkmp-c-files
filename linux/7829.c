cocci_test_suite() {
	struct team_port *cocci_id/* drivers/net/team/team_mode_loadbalance.c 87 */;
	struct lb_port_priv *cocci_id/* drivers/net/team/team_mode_loadbalance.c 87 */;
	struct lb_port_priv {
		struct lb_stats __percpu *pcpu_stats;
		struct lb_stats_info stats_info;
	} cocci_id/* drivers/net/team/team_mode_loadbalance.c 82 */;
	struct lb_priv *cocci_id/* drivers/net/team/team_mode_loadbalance.c 77 */;
	void __exit cocci_id/* drivers/net/team/team_mode_loadbalance.c 704 */;
	struct lb_priv {
		struct bpf_prog __rcu *fp;
		lb_select_tx_port_func_t __rcu *select_tx_port_func;
		struct lb_pcpu_stats __percpu *pcpu_stats;
		struct lb_priv_ex *ex;
	} cocci_id/* drivers/net/team/team_mode_loadbalance.c 70 */;
	int __init cocci_id/* drivers/net/team/team_mode_loadbalance.c 699 */;
	struct lb_port_priv cocci_id/* drivers/net/team/team_mode_loadbalance.c 694 */;
	struct lb_priv cocci_id/* drivers/net/team/team_mode_loadbalance.c 693 */;
	const struct team_mode cocci_id/* drivers/net/team/team_mode_loadbalance.c 690 */;
	const struct team_mode_ops cocci_id/* drivers/net/team/team_mode_loadbalance.c 680 */;
	struct lb_pcpu_stats *cocci_id/* drivers/net/team/team_mode_loadbalance.c 626 */;
	struct lb_pcpu_stats cocci_id/* drivers/net/team/team_mode_loadbalance.c 619 */;
	lb_select_tx_port_func_t *cocci_id/* drivers/net/team/team_mode_loadbalance.c 606 */;
	struct lb_priv_ex {
		struct team *team;
		struct lb_port_mapping tx_hash_to_port_mapping[LB_TX_HASHTABLE_SIZE];
		struct sock_fprog_kern *orig_fprog;
		struct {
			unsigned int refresh_interval;
			struct delayed_work refresh_dw;
			struct lb_stats_info info[LB_TX_HASHTABLE_SIZE];
		} stats;
	} cocci_id/* drivers/net/team/team_mode_loadbalance.c 59 */;
	const struct team_option cocci_id/* drivers/net/team/team_mode_loadbalance.c 560 */[];
	struct lb_port_mapping {
		struct team_port __rcu *port;
		struct team_option_inst_info *opt_inst_info;
	} cocci_id/* drivers/net/team/team_mode_loadbalance.c 54 */;
	struct lb_priv_ex cocci_id/* drivers/net/team/team_mode_loadbalance.c 488 */;
	struct lb_stats_info {
		struct lb_stats stats;
		struct lb_stats last_stats;
		struct team_option_inst_info *opt_inst_info;
	} cocci_id/* drivers/net/team/team_mode_loadbalance.c 48 */;
	struct lb_priv_ex *cocci_id/* drivers/net/team/team_mode_loadbalance.c 479 */;
	struct work_struct *cocci_id/* drivers/net/team/team_mode_loadbalance.c 475 */;
	struct lb_stats cocci_id/* drivers/net/team/team_mode_loadbalance.c 466 */;
	unsigned int cocci_id/* drivers/net/team/team_mode_loadbalance.c 465 */;
	struct u64_stats_sync *cocci_id/* drivers/net/team/team_mode_loadbalance.c 463 */;
	struct lb_stats *cocci_id/* drivers/net/team/team_mode_loadbalance.c 461 */;
	struct team *cocci_id/* drivers/net/team/team_mode_loadbalance.c 451 */;
	bool cocci_id/* drivers/net/team/team_mode_loadbalance.c 450 */;
	struct lb_stats_info *cocci_id/* drivers/net/team/team_mode_loadbalance.c 450 */;
	struct lb_pcpu_stats {
		struct lb_stats hash_stats[LB_TX_HASHTABLE_SIZE];
		struct u64_stats_sync syncp;
	} cocci_id/* drivers/net/team/team_mode_loadbalance.c 43 */;
	struct team_option_inst_info *cocci_id/* drivers/net/team/team_mode_loadbalance.c 405 */;
	struct lb_stats {
		u64 tx_bytes;
	} cocci_id/* drivers/net/team/team_mode_loadbalance.c 39 */;
	struct bpf_prog *cocci_id/* drivers/net/team/team_mode_loadbalance.c 327 */;
	struct team_port *cocci_id/* drivers/net/team/team_mode_loadbalance.c 32 */(struct team *,
										    struct lb_priv *,
										    struct sk_buff *,
										    unsigned char);
	void cocci_id/* drivers/net/team/team_mode_loadbalance.c 281 */;
	struct sock_filter cocci_id/* drivers/net/team/team_mode_loadbalance.c 266 */;
	struct sock_filter *cocci_id/* drivers/net/team/team_mode_loadbalance.c 264 */;
	struct sock_fprog_kern *cocci_id/* drivers/net/team/team_mode_loadbalance.c 263 */;
	const void *cocci_id/* drivers/net/team/team_mode_loadbalance.c 261 */;
	u32 cocci_id/* drivers/net/team/team_mode_loadbalance.c 260 */;
	struct sock_fprog_kern **cocci_id/* drivers/net/team/team_mode_loadbalance.c 260 */;
	int cocci_id/* drivers/net/team/team_mode_loadbalance.c 260 */;
	struct team_gsetter_ctx *cocci_id/* drivers/net/team/team_mode_loadbalance.c 245 */;
	const unsigned char *cocci_id/* drivers/net/team/team_mode_loadbalance.c 22 */;
	char *cocci_id/* drivers/net/team/team_mode_loadbalance.c 201 */;
	unsigned char *cocci_id/* drivers/net/team/team_mode_loadbalance.c 195 */;
	uint32_t cocci_id/* drivers/net/team/team_mode_loadbalance.c 194 */;
	struct sk_buff *cocci_id/* drivers/net/team/team_mode_loadbalance.c 191 */;
	const struct lb_select_tx_port *cocci_id/* drivers/net/team/team_mode_loadbalance.c 181 */;
	const char *cocci_id/* drivers/net/team/team_mode_loadbalance.c 176 */;
	rx_handler_result_t cocci_id/* drivers/net/team/team_mode_loadbalance.c 17 */;
	const struct lb_select_tx_port cocci_id/* drivers/net/team/team_mode_loadbalance.c 150 */[];
	struct lb_select_tx_port {
		char *name;
		lb_select_tx_port_func_t *func;
	} cocci_id/* drivers/net/team/team_mode_loadbalance.c 145 */;
	unsigned char cocci_id/* drivers/net/team/team_mode_loadbalance.c 123 */;
	struct lb_port_mapping *cocci_id/* drivers/net/team/team_mode_loadbalance.c 106 */;
}
