cocci_test_suite() {
	enum mlxsw_sp_qdisc_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 67 */;
	struct tc_prio_qopt_offload *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 668 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 66 */;
	struct mlxsw_sp_qdisc *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 66 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 65 */;
	struct tc_prio_qopt_offload_graft_params *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 642 */;
	struct mlxsw_sp_qdisc_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 624 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 568 */;
	struct mlxsw_sp_qdisc_stats *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 566 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 565 */;
	struct tc_qopt_offload_stats *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 563 */;
	struct tc_prio_qopt_offload_params *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 495 */;
	struct mlxsw_sp_qdisc {
		u32 handle;
		u8 tclass_num;
		u8 prio_bitmap;
		union {
			struct red_stats red;
		} xstats_base;
		struct mlxsw_sp_qdisc_stats {
			u64 tx_bytes;
			u64 tx_packets;
			u64 drops;
			u64 overlimits;
			u64 backlog;
		} stats_base;
		struct mlxsw_sp_qdisc_ops *ops;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 47 */;
	struct tc_red_qopt_offload *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 441 */;
	struct red_stats *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 363 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 361 */;
	struct tc_red_qopt_offload_params *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 300 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 299 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 246 */[MLXSW_REG_CWTPM_LEN];
	struct mlxsw_sp_qdisc_ops {
		enum mlxsw_sp_qdisc_type type;
		int (*check_params)(struct mlxsw_sp_port *mlxsw_sp_port,
				    struct mlxsw_sp_qdisc *mlxsw_sp_qdisc,
				    void *params);
		int (*replace)(struct mlxsw_sp_port *mlxsw_sp_port,
			       struct mlxsw_sp_qdisc *mlxsw_sp_qdisc,
			       void *params);
		int (*destroy)(struct mlxsw_sp_port *mlxsw_sp_port,
			       struct mlxsw_sp_qdisc *mlxsw_sp_qdisc);
		int (*get_stats)(struct mlxsw_sp_port *mlxsw_sp_port,
				 struct mlxsw_sp_qdisc *mlxsw_sp_qdisc,
				 struct tc_qopt_offload_stats *stats_ptr);
		int (*get_xstats)(struct mlxsw_sp_port *mlxsw_sp_port,
				  struct mlxsw_sp_qdisc *mlxsw_sp_qdisc,
				  void *xstats_ptr);
		void (*clean_stats)(struct mlxsw_sp_port *mlxsw_sp_port,
				    struct mlxsw_sp_qdisc *mlxsw_sp_qdisc);
		void (*unoffload)(struct mlxsw_sp_port *mlxsw_sp_port,
				  struct mlxsw_sp_qdisc *mlxsw_sp_qdisc,
				  void *params);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 23 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 221 */[MLXSW_REG_CWTP_LEN];
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 203 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 200 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 200 */;
	struct mlxsw_sp_port_xstats *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 199 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 198 */;
	enum mlxsw_sp_qdisc_type{MLXSW_SP_QDISC_NO_QDISC, MLXSW_SP_QDISC_RED, MLXSW_SP_QDISC_PRIO,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 17 */;
	struct mlxsw_sp_qdisc_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 133 */;
	struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_qdisc.c 113 */;
}
