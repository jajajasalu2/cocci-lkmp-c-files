cocci_test_suite() {
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 81 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 516 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 515 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 513 */;
	const struct xfrmdev_ops cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 505 */;
	struct mlx5e_ipsec_sa_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 470 */;
	struct mlx5e_ipsec_modify_state_work cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 469 */;
	struct mlx5e_ipsec_modify_state_work *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 468 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 467 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 465 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 465 */;
	struct mlx5e_ipsec_modify_state_work {
		struct work_struct work;
		struct mlx5_accel_esp_xfrm_attrs attrs;
		struct mlx5e_ipsec_sa_entry *sa_entry;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 459 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 444 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 444 */;
	struct mlx5e_ipsec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 431 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 287 */[4];
	struct mlx5_accel_esp_xfrm_attrs cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 285 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 157 */;
	struct crypto_aead *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 156 */;
	struct aead_geniv_ctx *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 155 */;
	struct aes_gcm_keymat *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 154 */;
	struct xfrm_state *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 153 */;
	struct mlx5_accel_esp_xfrm_attrs *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 151 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 120 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 119 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 118 */;
	struct xfrm_replay_state_esn *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_accel/ipsec.c 117 */;
}
