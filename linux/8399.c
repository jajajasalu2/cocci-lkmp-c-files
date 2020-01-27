cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 94 */;
	struct nfp_fl_lag *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 86 */;
	unsigned int cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 86 */;
	void *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 633 */;
	unsigned long cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 633 */;
	struct nfp_flower_priv cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 604 */;
	struct nfp_fl_lag_group {
		unsigned int group_id;
		u8 group_inst;
		struct list_head list;
		struct net_device *master_ndev;
		bool dirty;
		bool offloaded;
		bool to_remove;
		bool to_destroy;
		unsigned int slave_cnt;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 60 */;
	unsigned long *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 595 */;
	struct nfp_repr *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 594 */;
	struct nfp_flower_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 593 */;
	struct nfp_flower_repr_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 592 */;
	struct netdev_lag_lower_state_info *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 591 */;
	struct netdev_notifier_changelowerstate_info *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 589 */;
	struct net_device *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 588 */;
	bool cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 514 */;
	struct nfp_fl_lag_group *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 511 */;
	struct netdev_lag_upper_info *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 510 */;
	struct netdev_notifier_changeupper_info *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 507 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 505 */;
	struct nfp_flower_cmsg_lag_config {
		u8 ctrl_flags;
		u8 reserved[2];
		u8 ttl;
		__be32 pkt_number;
		__be32 batch_ver;
		__be32 group_id;
		__be32 group_inst;
		__be32 members[];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 37 */;
	struct nfp_fl_lag cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 274 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 268 */;
	enum nfp_fl_lag_batch cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 266 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 264 */;
	__be32 cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 213 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 210 */;
	unsigned long int cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 208 */;
	struct nfp_flower_cmsg_lag_config *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 206 */;
	enum nfp_fl_lag_batch *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 204 */;
	struct net_device **cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 203 */;
	enum nfp_fl_lag_batch{NFP_FL_LAG_BATCH_FIRST, NFP_FL_LAG_BATCH_MEMBER, NFP_FL_LAG_BATCH_FINISHED,} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 20 */;
	struct nfp_app *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 185 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 160 */;
	struct nfp_fl_pre_lag *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/lag_conf.c 159 */;
}