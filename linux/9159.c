cocci_test_suite() {
	const struct cyclecounter *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 95 */;
	enum hwtstamp_tx_types cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 911 */;
	enum hwtstamp_rx_filters *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 908 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 907 */;
	const struct hwtstamp_config *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 906 */;
	struct hwtstamp_config *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 900 */;
	struct mlxsw_sp_ptp_state *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 885 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 806 */[MLXSW_REG_QPSC_LEN];
	const struct mlxsw_sp1_ptp_shaper_params *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 805 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 77 */;
	struct mlxsw_core *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 76 */;
	const struct mlxsw_sp1_ptp_shaper_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 753 */[];
	struct mlxsw_sp1_ptp_shaper_params {
		u32 ethtool_speed;
		enum mlxsw_reg_qpsc_port_speed port_speed;
		u8 shaper_time_exp;
		u8 shaper_time_mantissa;
		u8 shaper_inc;
		u8 shaper_bs;
		u8 port_to_shaper_credits;
		int ing_timestamp_inc;
		int egr_timestamp_inc;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 741 */;
	struct ptp_system_timestamp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 74 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 735 */[MLXSW_REG_MTPPPC_LEN];
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 73 */;
	struct mlxsw_sp_ptp_clock *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 73 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 720 */[MLXSW_REG_MOGCR_LEN];
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 711 */[MLXSW_REG_MTPTPT_LEN];
	enum mlxsw_reg_mtptpt_trap_id cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 708 */;
	struct mlxsw_sp_ptp_state cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 687 */;
	struct rhashtable_iter cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 683 */;
	struct mlxsw_sp_ptp_port_dir_stats *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 633 */;
	struct mlxsw_sp_ptp_clock {
		struct mlxsw_core *core;
		spinlock_t lock;
		struct cyclecounter cycles;
		struct timecounter tc;
		u32 nominal_c_mult;
		struct ptp_clock *ptp;
		struct ptp_clock_info ptp_info;
		unsigned long overflow_period;
		struct delayed_work overflow_work;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 61 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 586 */;
	struct mlxsw_sp1_ptp_unmatched cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 56 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 55 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 546 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 545 */;
	struct mlxsw_sp1_ptp_unmatched *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 502 */;
	struct mlxsw_sp1_ptp_unmatched {
		struct mlxsw_sp1_ptp_key key;
		struct rhlist_head ht_node;
		struct rcu_head rcu;
		struct sk_buff *skb;
		u64 timestamp;
		u32 gc_cycle;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 46 */;
	struct skb_shared_hwtstamps cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 459 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 456 */;
	struct mlxsw_sp1_ptp_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 455 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 454 */;
	struct skb_shared_hwtstamps *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 429 */;
	struct rhlist_head *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 395 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 392 */;
	struct mlxsw_sp1_ptp_key {
		u8 local_port;
		u8 message_type;
		u16 sequence_id;
		u8 domain_number;
		bool ingress;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 38 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 317 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 313 */;
	struct mlxsw_sp_ptp_state {
		struct mlxsw_sp *mlxsw_sp;
		struct rhltable unmatched_ht;
		spinlock_t unmatched_lock;
		struct delayed_work ht_gc_dw;
		u32 gc_cycle;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 30 */;
	struct device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 251 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 239 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 237 */;
	const struct ptp_clock_info cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 227 */;
	const struct timespec64 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 213 */;
	struct timespec64 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 195 */;
	s64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 180 */;
	s32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 158 */;
	struct mlxsw_sp_ptp_clock cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 154 */;
	struct ptp_clock_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 151 */;
	long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 151 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 130 */[MLXSW_REG_MTPPS_LEN];
	ptrdiff_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1159 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1158 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1156 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1156 */;
	struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1155 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1155 */;
	u8 **cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1144 */;
	const struct timecounter *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 114 */;
	const struct mlxsw_sp_ptp_port_stat cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1127 */[];
	struct mlxsw_sp_ptp_port_stats cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1123 */;
	struct mlxsw_sp_ptp_port_stat {
		char str[ETH_GSTRING_LEN];
		ptrdiff_t offset;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1115 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1098 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 107 */[MLXSW_REG_MTUTC_LEN];
	enum hwtstamp_rx_filters cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1069 */;
	struct mlxsw_sp_port cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1055 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1020 */[MLXSW_REG_PTYS_LEN];
	const struct mlxsw_sp_port_type_speed_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1018 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_ptp.c 1010 */[MLXSW_REG_QEEC_LEN];
}
