cocci_test_suite() {
	struct mlx5e_tls_metadata cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 84 */;
	struct ethhdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 82 */;
	struct mlx5e_tls_metadata *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 81 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 79 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 79 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 79 */;
	struct mlx5e_tls_metadata {
		union {
			struct recv_metadata_content recv;
			struct send_metadata_content send;
			unsigned char raw[6];
		}__packed content;
		__be16 ethertype;
	}__packed cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 67 */;
	struct send_metadata_content {
		__be32 syndrome_swid;
		__be16 first_seq;
	}__packed cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 61 */;
	struct recv_metadata_content {
		u8 syndrome;
		u8 reserved;
		__be32 sync_seq;
	}__packed cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 55 */;
	struct sync_info {
		u64 rcd_sn;
		s32 sync_len;
		int nr_frags;
		skb_frag_t frags[MAX_SKB_FRAGS];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 48 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 359 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 356 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 355 */;
	struct ipv6hdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 331 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 323 */;
	struct sock *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 313 */;
	struct tls_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 267 */;
	struct sync_info cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 195 */;
	struct mlx5e_tls *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 192 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 191 */;
	struct mlx5e_tx_wqe **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 190 */;
	struct mlx5e_txqsq *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 189 */;
	struct ethhdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 175 */;
	struct tcphdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 150 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 149 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 148 */;
	__be64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 145 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 144 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 143 */;
	s32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 107 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 106 */;
	struct tls_record_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 105 */;
	struct sync_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 102 */;
	struct mlx5e_tls_offload_context_tx *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/tls_rxtx.c 101 */;
}
