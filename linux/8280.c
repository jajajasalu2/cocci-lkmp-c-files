cocci_test_suite() {
	const efx_qword_t *cocci_id/* drivers/net/ethernet/sfc/farch.c 968 */;
	const efx_oword_t *cocci_id/* drivers/net/ethernet/sfc/farch.c 93 */;
	void cocci_id/* drivers/net/ethernet/sfc/farch.c 78 */(struct efx_channel *channel,
							       u32 magic);
	efx_dword_t cocci_id/* drivers/net/ethernet/sfc/farch.c 773 */;
	struct efx_tx_queue *cocci_id/* drivers/net/ethernet/sfc/farch.c 601 */;
	struct efx_channel *cocci_id/* drivers/net/ethernet/sfc/farch.c 600 */;
	efx_oword_t cocci_id/* drivers/net/ethernet/sfc/farch.c 599 */;
	bool cocci_id/* drivers/net/ethernet/sfc/farch.c 596 */;
	efx_qword_t *cocci_id/* drivers/net/ethernet/sfc/farch.c 462 */;
	struct efx_rx_buffer *cocci_id/* drivers/net/ethernet/sfc/farch.c 461 */;
	struct efx_rx_queue *cocci_id/* drivers/net/ethernet/sfc/farch.c 459 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/farch.c 459 */;
	void cocci_id/* drivers/net/ethernet/sfc/farch.c 458 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/sfc/farch.c 357 */;
	struct efx_tx_buffer *cocci_id/* drivers/net/ethernet/sfc/farch.c 317 */;
	union efx_multicast_hash *cocci_id/* drivers/net/ethernet/sfc/farch.c 2956 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/sfc/farch.c 2955 */;
	struct net_device *cocci_id/* drivers/net/ethernet/sfc/farch.c 2954 */;
	struct efx_filter_spec cocci_id/* drivers/net/ethernet/sfc/farch.c 2916 */;
	struct efx_arfs_rule *cocci_id/* drivers/net/ethernet/sfc/farch.c 2915 */;
	unsigned long cocci_id/* drivers/net/ethernet/sfc/farch.c 2823 */;
	struct efx_farch_filter_state cocci_id/* drivers/net/ethernet/sfc/farch.c 2790 */;
	u32 *cocci_id/* drivers/net/ethernet/sfc/farch.c 2707 */;
	s32 cocci_id/* drivers/net/ethernet/sfc/farch.c 2705 */;
	struct efx_farch_filter_table *cocci_id/* drivers/net/ethernet/sfc/farch.c 2683 */;
	enum efx_farch_filter_table_id cocci_id/* drivers/net/ethernet/sfc/farch.c 2682 */;
	struct efx_farch_filter_state *cocci_id/* drivers/net/ethernet/sfc/farch.c 2681 */;
	enum efx_filter_priority cocci_id/* drivers/net/ethernet/sfc/farch.c 2667 */;
	struct efx_filter_spec *cocci_id/* drivers/net/ethernet/sfc/farch.c 2616 */;
	u64 cocci_id/* drivers/net/ethernet/sfc/farch.c 251 */;
	struct efx_farch_filter_spec cocci_id/* drivers/net/ethernet/sfc/farch.c 2388 */;
	const enum efx_farch_filter_table_id cocci_id/* drivers/net/ethernet/sfc/farch.c 2324 */[];
	const u8 cocci_id/* drivers/net/ethernet/sfc/farch.c 2313 */[EFX_FARCH_FILTER_TYPE_COUNT];
	struct siena_nic_data *cocci_id/* drivers/net/ethernet/sfc/farch.c 230 */;
	const struct efx_farch_filter_spec *cocci_id/* drivers/net/ethernet/sfc/farch.c 2288 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/farch.c 227 */;
	struct efx_special_buffer *cocci_id/* drivers/net/ethernet/sfc/farch.c 226 */;
	struct efx_nic *cocci_id/* drivers/net/ethernet/sfc/farch.c 225 */;
	int cocci_id/* drivers/net/ethernet/sfc/farch.c 225 */;
	struct efx_farch_filter_spec *cocci_id/* drivers/net/ethernet/sfc/farch.c 2229 */;
	u32 cocci_id/* drivers/net/ethernet/sfc/farch.c 2228 */;
	__be16 cocci_id/* drivers/net/ethernet/sfc/farch.c 2049 */;
	__be32 cocci_id/* drivers/net/ethernet/sfc/farch.c 2048 */;
	const struct efx_filter_spec *cocci_id/* drivers/net/ethernet/sfc/farch.c 2029 */;
	u16 cocci_id/* drivers/net/ethernet/sfc/farch.c 1889 */;
	void cocci_id/* drivers/net/ethernet/sfc/farch.c 1882 */(struct efx_nic *efx,
								 struct efx_farch_filter_table *table,
								 unsigned int filter_idx);
	struct efx_farch_filter_state {
		struct rw_semaphore lock;
		struct efx_farch_filter_table table[EFX_FARCH_FILTER_TABLE_COUNT];
	} cocci_id/* drivers/net/ethernet/sfc/farch.c 1877 */;
	struct efx_farch_filter_table {
		enum efx_farch_filter_table_id id;
		u32 offset;
		unsigned size;
		unsigned step;
		unsigned used;
		unsigned long *used_bitmap;
		struct efx_farch_filter_spec *spec;
		unsigned search_limit[EFX_FARCH_FILTER_TYPE_COUNT];
	} cocci_id/* drivers/net/ethernet/sfc/farch.c 1866 */;
	struct efx_farch_filter_spec {
		u8 type:4;
		u8 priority:4;
		u8 flags;
		u16 dmaq_id;
		u32 data[3];
	} cocci_id/* drivers/net/ethernet/sfc/farch.c 1858 */;
	enum efx_farch_filter_index{EFX_FARCH_FILTER_INDEX_UC_DEF, EFX_FARCH_FILTER_INDEX_MC_DEF, EFX_FARCH_FILTER_SIZE_RX_DEF,} cocci_id/* drivers/net/ethernet/sfc/farch.c 1852 */;
	unsigned long long cocci_id/* drivers/net/ethernet/sfc/farch.c 185 */;
	enum efx_farch_filter_table_id{EFX_FARCH_FILTER_TABLE_RX_IP=0, EFX_FARCH_FILTER_TABLE_RX_MAC, EFX_FARCH_FILTER_TABLE_RX_DEF, EFX_FARCH_FILTER_TABLE_TX_MAC, EFX_FARCH_FILTER_TABLE_COUNT,} cocci_id/* drivers/net/ethernet/sfc/farch.c 1844 */;
	enum efx_farch_filter_type{EFX_FARCH_FILTER_TCP_FULL=0, EFX_FARCH_FILTER_TCP_WILD, EFX_FARCH_FILTER_UDP_FULL, EFX_FARCH_FILTER_UDP_WILD, EFX_FARCH_FILTER_MAC_FULL=4, EFX_FARCH_FILTER_MAC_WILD, EFX_FARCH_FILTER_UC_DEF=8, EFX_FARCH_FILTER_MC_DEF, EFX_FARCH_FILTER_TYPE_COUNT,} cocci_id/* drivers/net/ethernet/sfc/farch.c 1832 */;
	efx_qword_t cocci_id/* drivers/net/ethernet/sfc/farch.c 1682 */;
	size_t cocci_id/* drivers/net/ethernet/sfc/farch.c 1644 */;
	struct efx_msi_context *cocci_id/* drivers/net/ethernet/sfc/farch.c 1596 */;
	void *cocci_id/* drivers/net/ethernet/sfc/farch.c 1510 */;
	efx_oword_t *cocci_id/* drivers/net/ethernet/sfc/farch.c 1459 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/sfc/farch.c 1457 */;
	const struct efx_farch_register_test *cocci_id/* drivers/net/ethernet/sfc/farch.c 101 */;
}
