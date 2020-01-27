cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 903 */[MLX5_ST_SZ_DW(qpts_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 89 */[MLX5_ST_SZ_DW(mcam_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 857 */[MLX5_ST_SZ_DW(mtppse_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 841 */[MLX5_ST_SZ_DW(mtpps_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 839 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 824 */[MLX5_ST_SZ_DW(pcmr_reg)];
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 821 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 821 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 779 */[MLX5_ST_SZ_DW(query_wol_rol_out)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 778 */[MLX5_ST_SZ_DW(query_wol_rol_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 77 */[MLX5_ST_SZ_DW(pcam_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 767 */[MLX5_ST_SZ_DW(set_wol_rol_out)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 766 */[MLX5_ST_SZ_DW(set_wol_rol_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 718 */[MLX5_ST_SZ_DW(qetc_reg)];
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 715 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 600 */[MLX5_ST_SZ_DW(qtct_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 555 */[MLX5_ST_SZ_DW(dcbx_param)];
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 43 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 426 */[MLX5_ST_SZ_DW(pfcc_reg)];
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 401 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 401 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 38 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 377 */[MLX5_ST_SZ_DW(pvlc_reg)];
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 36 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 36 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 36 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 323 */[MLX5_ST_SZ_DW(mcia_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 279 */[MLX5_ST_SZ_DW(pmlp_reg)];
	int *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 277 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 263 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 236 */[MLX5_ST_SZ_DW(pmtu_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 219 */[MLX5_ST_SZ_DW(paos_reg)];
	enum mlx5_port_status *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 217 */;
	enum mlx5_port_status cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 203 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 176 */[MLX5_ST_SZ_DW(ptys_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 148 */[MLX5_ST_SZ_DW(mlcr_reg)];
	struct mlx5_reg_pcap cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 122 */;
	struct mlx5_reg_pcap {
		u8 rsvd0;
		u8 port_num;
		u8 rsvd1[2];
		__be32 caps_127_96;
		__be32 caps_95_64;
		__be32 caps_63_32;
		__be32 caps_31_0;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 110 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/port.c 101 */[MLX5_ST_SZ_DW(qcam_reg)];
}