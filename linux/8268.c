cocci_test_suite() {
	const struct ef4_farch_register_test *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 99 */;
	const ef4_qword_t *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 980 */;
	const ef4_oword_t *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 91 */;
	ef4_dword_t cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 780 */;
	void cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 76 */(struct ef4_channel *channel,
								      u32 magic);
	struct ef4_tx_queue *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 619 */;
	struct ef4_channel *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 618 */;
	ef4_oword_t cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 617 */;
	bool cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 614 */;
	ef4_qword_t *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 474 */;
	struct ef4_rx_buffer *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 473 */;
	struct ef4_rx_queue *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 471 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 471 */;
	void cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 470 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 348 */;
	struct ef4_tx_buffer *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 308 */;
	union ef4_multicast_hash *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2860 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2859 */;
	struct net_device *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2858 */;
	unsigned long cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2751 */;
	struct ef4_farch_filter_state cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2733 */;
	u32 *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2650 */;
	s32 cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2648 */;
	struct ef4_farch_filter_table *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2626 */;
	enum ef4_farch_filter_table_id cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2625 */;
	struct ef4_farch_filter_state *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2624 */;
	enum ef4_filter_priority cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2610 */;
	struct ef4_filter_spec *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2557 */;
	u64 cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 242 */;
	struct ef4_farch_filter_spec cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2329 */;
	const enum ef4_farch_filter_table_id cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2265 */[];
	const u8 cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2254 */[EF4_FARCH_FILTER_TYPE_COUNT];
	unsigned int cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 225 */;
	struct ef4_special_buffer *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 224 */;
	struct ef4_nic *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 223 */;
	int cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 223 */;
	const struct ef4_farch_filter_spec *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2229 */;
	struct ef4_farch_filter_spec *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2170 */;
	u32 cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 2169 */;
	__be16 cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1990 */;
	__be32 cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1989 */;
	const struct ef4_filter_spec *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1969 */;
	unsigned long long cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 183 */;
	u16 cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1829 */;
	void cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1822 */(struct ef4_nic *efx,
									struct ef4_farch_filter_table *table,
									unsigned int filter_idx);
	struct ef4_farch_filter_state {
		struct ef4_farch_filter_table table[EF4_FARCH_FILTER_TABLE_COUNT];
	} cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1818 */;
	struct ef4_farch_filter_table {
		enum ef4_farch_filter_table_id id;
		u32 offset;
		unsigned size;
		unsigned step;
		unsigned used;
		unsigned long *used_bitmap;
		struct ef4_farch_filter_spec *spec;
		unsigned search_limit[EF4_FARCH_FILTER_TYPE_COUNT];
	} cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1807 */;
	struct ef4_farch_filter_spec {
		u8 type:4;
		u8 priority:4;
		u8 flags;
		u16 dmaq_id;
		u32 data[3];
	} cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1799 */;
	enum ef4_farch_filter_index{EF4_FARCH_FILTER_INDEX_UC_DEF, EF4_FARCH_FILTER_INDEX_MC_DEF, EF4_FARCH_FILTER_SIZE_RX_DEF,} cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1793 */;
	enum ef4_farch_filter_table_id{EF4_FARCH_FILTER_TABLE_RX_IP=0, EF4_FARCH_FILTER_TABLE_RX_MAC, EF4_FARCH_FILTER_TABLE_RX_DEF, EF4_FARCH_FILTER_TABLE_TX_MAC, EF4_FARCH_FILTER_TABLE_COUNT,} cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1785 */;
	enum ef4_farch_filter_type{EF4_FARCH_FILTER_TCP_FULL=0, EF4_FARCH_FILTER_TCP_WILD, EF4_FARCH_FILTER_UDP_FULL, EF4_FARCH_FILTER_UDP_WILD, EF4_FARCH_FILTER_MAC_FULL=4, EF4_FARCH_FILTER_MAC_WILD, EF4_FARCH_FILTER_UC_DEF=8, EF4_FARCH_FILTER_MC_DEF, EF4_FARCH_FILTER_TYPE_COUNT,} cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1773 */;
	ef4_qword_t cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1654 */;
	size_t cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1618 */;
	struct ef4_msi_context *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1587 */;
	void *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1501 */;
	ef4_oword_t *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1448 */;
	struct falcon_nic_data *cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1447 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/sfc/falcon/farch.c 1445 */;
}
