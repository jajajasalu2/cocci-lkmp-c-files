cocci_test_suite() {
	struct mlx5_wqe_ctrl_seg *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 90 */;
	enum{MLX5E_STATIC_PARAMS_CONTEXT_TLS_1_2=0x2,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 9 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 88 */;
	struct mlx5e_ktls_offload_context_tx *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 87 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 86 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 86 */;
	struct mlx5e_tx_wqe *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 86 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 85 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 76 */;
	struct mlx5_wqe_umr_ctrl_seg *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 57 */;
	struct mlx5e_umr_wqe *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 52 */;
	enum mlx5e_ktls_sync_retval cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 455 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 431 */;
	struct tls_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 430 */;
	struct mlx5e_sq_stats *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 428 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 425 */;
	struct mlx5e_tx_wqe **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 425 */;
	struct mlx5e_txqsq *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 423 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 422 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 422 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 385 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 384 */;
	struct tx_sync_info cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 335 */;
	struct mlx5_wq_cyc *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 333 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 31 */;
	struct mlx5e_sq_dma *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 302 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 299 */;
	struct mlx5e_tx_wqe_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 298 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 28 */;
	struct tls12_crypto_info_aes_gcm_128 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 27 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 263 */;
	struct mlx5e_dump_wqe *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 262 */;
	struct mlx5_wqe_data_seg *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 261 */;
	__be64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 242 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 239 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 202 */;
	struct tls_record_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 200 */;
	struct tls_offload_context_tx *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 198 */;
	struct tx_sync_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 196 */;
	enum mlx5e_ktls_sync_retval{MLX5E_KTLS_SYNC_DONE, MLX5E_KTLS_SYNC_FAIL, MLX5E_KTLS_SYNC_SKIP_NO_DATA,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 188 */;
	struct tx_sync_info {
		u64 rcd_sn;
		s32 sync_len;
		int nr_frags;
		skb_frag_t frags[MAX_SKB_FRAGS];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 181 */;
	enum{MLX5E_ENCRYPTION_STANDARD_TLS=0x1,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 13 */;
	struct page *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ktls_tx.c 107 */;
}
