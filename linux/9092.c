cocci_test_suite() {
	struct ethhdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 91 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 88 */;
	struct mlx5e_ipsec_metadata *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 88 */;
	__be16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 83 */;
	__be16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 81 */[MAX_LSO_MSS];
	struct mlx5e_ipsec_metadata {
		unsigned char syndrome;
		union {
			unsigned char raw[5];
			struct mlx5e_ipsec_rx_metadata rx;
			struct mlx5e_ipsec_tx_metadata tx;
		}__packed content;
		__be16 ethertype;
	}__packed cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 65 */;
	struct mlx5e_ipsec_tx_metadata {
		__be16 mss_inv;
		__be16 seq;
		u8 esp_next_proto;
	}__packed cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 59 */;
	enum{MLX5E_IPSEC_TX_SYNDROME_OFFLOAD=0x8, MLX5E_IPSEC_TX_SYNDROME_OFFLOAD_WITH_LSO_TCP=0x9,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 54 */;
	struct mlx5e_ipsec_rx_metadata {
		unsigned char nexthdr;
		__be32 sa_handle;
	}__packed cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 49 */;
	enum{MLX5E_IPSEC_RX_SYNDROME_DECRYPTED=0x11, MLX5E_IPSEC_RX_SYNDROME_AUTH_FAILED=0x12, MLX5E_IPSEC_RX_SYNDROME_BAD_PROTO=0x17,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 43 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 381 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 380 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 378 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 365 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 364 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 342 */;
	struct sec_path *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 298 */;
	struct xfrm_offload *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 296 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 295 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 292 */;
	struct xfrm_state *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 291 */;
	struct mlx5e_ipsec_sa_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 243 */;
	struct mlx5e_tx_wqe *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 237 */;
	struct tcphdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 207 */;
	struct ip_esp_hdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 206 */;
	struct ip_esp_hdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 198 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 197 */;
	__be64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 194 */;
	__u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 172 */;
	struct xfrm_replay_state_esn *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 171 */;
	struct mlx5e_swp_spec cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 139 */;
	struct mlx5_wqe_eth_seg *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 136 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 115 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 113 */;
	struct ipv6hdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 112 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 111 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec_rxtx.c 109 */;
}
