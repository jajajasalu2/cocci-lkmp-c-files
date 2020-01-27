cocci_test_suite() {
	u64 cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 72 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 71 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 70 */;
	struct nfp_repr *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 69 */;
	struct nfp_police_config *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 68 */;
	struct nfp_flower_repr_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 67 */;
	struct nfp_flower_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 66 */;
	struct flow_action_entry *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 65 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 63 */;
	struct tc_cls_matchall_offload *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 62 */;
	struct nfp_app *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 61 */;
	struct net_device *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 61 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 60 */;
	struct nfp_police_stats_reply {
		struct nfp_police_cfg_head head;
		__be64 pass_bytes;
		__be64 pass_pkts;
		__be64 drop_bytes;
		__be64 drop_pkts;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 52 */;
	struct nfp_police_config {
		struct nfp_police_cfg_head head;
		__be32 bkt_tkn_p;
		__be32 bkt_tkn_c;
		__be32 pbs;
		__be32 cbs;
		__be32 pir;
		__be32 cir;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 42 */;
	void cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 335 */;
	struct nfp_stat_pair *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 296 */;
	struct nfp_flower_priv cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 282 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 278 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 276 */;
	struct nfp_reprs *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 246 */;
	struct nfp_police_cfg_head cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 230 */;
	struct nfp_police_cfg_head *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 226 */;
	struct nfp_police_stats_reply *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 185 */;
	struct nfp_fl_qos cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 168 */;
	struct nfp_police_cfg_head {
		__be32 flags_opts;
		__be32 port;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 14 */;
	struct nfp_police_config cocci_id/* drivers/net/ethernet/netronome/nfp/flower/qos_conf.c 111 */;
}
