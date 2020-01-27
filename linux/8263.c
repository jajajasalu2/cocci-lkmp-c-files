cocci_test_suite() {
	struct efx_ef10_filter_table {
		u32 rx_match_mcdi_flags[MC_CMD_GET_PARSER_DISP_INFO_OUT_SUPPORTED_MATCHES_MAXNUM * 2];
		unsigned int rx_match_count;
		struct rw_semaphore lock;
		struct {
			unsigned long spec;
#define EFX_EF10_FILTER_FLAG_AUTO_OLD 2UL
#define EFX_EF10_FILTER_FLAGS 3UL
			u64 handle;
		} *entry;
		struct efx_ef10_dev_addr dev_uc_list[EFX_EF10_FILTER_DEV_UC_MAX];
		struct efx_ef10_dev_addr dev_mc_list[EFX_EF10_FILTER_DEV_MC_MAX];
		int dev_uc_count;
		int dev_mc_count;
		bool uc_promisc;
		bool mc_promisc;
		bool mc_promisc_last;
		bool mc_overflow;
		bool vlan_filter;
		struct list_head vlan_list;
	} cocci_id/* drivers/net/ethernet/sfc/ef10.c 90 */;
	struct efx_ef10_dev_addr {
		u8 addr[ETH_ALEN];
	} cocci_id/* drivers/net/ethernet/sfc/ef10.c 86 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/sfc/ef10.c 780 */;
	struct efx_ef10_filter_vlan {
		struct list_head list;
		u16 vid;
		u16 uc[EFX_EF10_FILTER_DEV_UC_MAX];
		u16 mc[EFX_EF10_FILTER_DEV_MC_MAX];
		u16 default_filters[EFX_EF10_NUM_DEFAULT_FILTERS];
	} cocci_id/* drivers/net/ethernet/sfc/ef10.c 78 */;
	const struct efx_nic_type cocci_id/* drivers/net/ethernet/sfc/ef10.c 6718 */;
	char cocci_id/* drivers/net/ethernet/sfc/ef10.c 6477 */[8];
	struct efx_udp_tunnel cocci_id/* drivers/net/ethernet/sfc/ef10.c 6473 */;
	size_t cocci_id/* drivers/net/ethernet/sfc/ef10.c 6461 */;
	struct efx_ef10_nic_data *cocci_id/* drivers/net/ethernet/sfc/ef10.c 6460 */;
	__be16 cocci_id/* drivers/net/ethernet/sfc/ef10.c 6458 */;
	struct efx_udp_tunnel *cocci_id/* drivers/net/ethernet/sfc/ef10.c 6457 */;
	struct efx_nic *cocci_id/* drivers/net/ethernet/sfc/ef10.c 6457 */;
	struct netdev_phys_item_id *cocci_id/* drivers/net/ethernet/sfc/ef10.c 6310 */;
	struct hwtstamp_config *cocci_id/* drivers/net/ethernet/sfc/ef10.c 6273 */;
	int (*cocci_id/* drivers/net/ethernet/sfc/ef10.c 6247 */)(struct efx_channel *channel, bool temp);
	const struct efx_ef10_nvram_type_info *cocci_id/* drivers/net/ethernet/sfc/ef10.c 6066 */;
	struct efx_mcdi_mtd_partition *cocci_id/* drivers/net/ethernet/sfc/ef10.c 6060 */;
	const struct efx_ef10_nvram_type_info cocci_id/* drivers/net/ethernet/sfc/ef10.c 6037 */[];
	struct efx_ef10_nvram_type_info {
		u16 type,type_mask;
		u8 port;
		const char *name;
	} cocci_id/* drivers/net/ethernet/sfc/ef10.c 6031 */;
	struct efx_self_tests *cocci_id/* drivers/net/ethernet/sfc/ef10.c 6006 */;
	enum efx_ef10_default_filters{EFX_EF10_BCAST, EFX_EF10_UCDEF, EFX_EF10_MCDEF, EFX_EF10_VXLAN4_UCDEF, EFX_EF10_VXLAN4_MCDEF, EFX_EF10_VXLAN6_UCDEF, EFX_EF10_VXLAN6_MCDEF, EFX_EF10_NVGRE4_UCDEF, EFX_EF10_NVGRE4_MCDEF, EFX_EF10_NVGRE6_UCDEF, EFX_EF10_NVGRE6_MCDEF, EFX_EF10_GENEVE4_UCDEF, EFX_EF10_GENEVE4_MCDEF, EFX_EF10_GENEVE6_UCDEF, EFX_EF10_GENEVE6_MCDEF, EFX_EF10_NUM_DEFAULT_FILTERS,} cocci_id/* drivers/net/ethernet/sfc/ef10.c 57 */;
	struct efx_ef10_vlan *cocci_id/* drivers/net/ethernet/sfc/ef10.c 549 */;
	u16 cocci_id/* drivers/net/ethernet/sfc/ef10.c 546 */;
	int cocci_id/* drivers/net/ethernet/sfc/ef10.c 546 */;
	enum efx_ef10_default_filters cocci_id/* drivers/net/ethernet/sfc/ef10.c 5420 */[];
	const char *cocci_id/* drivers/net/ethernet/sfc/ef10.c 5392 */;
	enum efx_encap_type cocci_id/* drivers/net/ethernet/sfc/ef10.c 5357 */;
	u16 *cocci_id/* drivers/net/ethernet/sfc/ef10.c 5285 */;
	u8 cocci_id/* drivers/net/ethernet/sfc/ef10.c 5282 */[ETH_ALEN];
	struct efx_filter_spec cocci_id/* drivers/net/ethernet/sfc/ef10.c 5281 */;
	enum efx_filter_flags cocci_id/* drivers/net/ethernet/sfc/ef10.c 5280 */;
	struct efx_ef10_dev_addr *cocci_id/* drivers/net/ethernet/sfc/ef10.c 5279 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/sfc/ef10.c 5254 */;
	struct net_device *cocci_id/* drivers/net/ethernet/sfc/ef10.c 5253 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/ef10.c 5203 */;
	struct efx_ef10_filter_table *cocci_id/* drivers/net/ethernet/sfc/ef10.c 5202 */;
	struct efx_ef10_filter_vlan *cocci_id/* drivers/net/ethernet/sfc/ef10.c 5200 */;
	struct efx_ef10_vlan {
		struct list_head list;
		u16 vid;
	} cocci_id/* drivers/net/ethernet/sfc/ef10.c 52 */;
	void cocci_id/* drivers/net/ethernet/sfc/ef10.c 5199 */;
	uint16_t *cocci_id/* drivers/net/ethernet/sfc/ef10.c 5180 */;
	char *cocci_id/* drivers/net/ethernet/sfc/ef10.c 509 */;
	struct device_attribute *cocci_id/* drivers/net/ethernet/sfc/ef10.c 508 */;
	struct device *cocci_id/* drivers/net/ethernet/sfc/ef10.c 507 */;
	ssize_t cocci_id/* drivers/net/ethernet/sfc/ef10.c 507 */;
	enum efx_filter_match_flags cocci_id/* drivers/net/ethernet/sfc/ef10.c 4899 */;
	struct efx_arfs_rule *cocci_id/* drivers/net/ethernet/sfc/ef10.c 4761 */;
	u32 *cocci_id/* drivers/net/ethernet/sfc/ef10.c 4725 */;
	s32 cocci_id/* drivers/net/ethernet/sfc/ef10.c 4700 */;
	enum efx_filter_priority cocci_id/* drivers/net/ethernet/sfc/ef10.c 4669 */;
	const struct efx_filter_spec *cocci_id/* drivers/net/ethernet/sfc/ef10.c 4647 */;
	u64 *cocci_id/* drivers/net/ethernet/sfc/ef10.c 4200 */;
	u64 cocci_id/* drivers/net/ethernet/sfc/ef10.c 4152 */;
	efx_dword_t *cocci_id/* drivers/net/ethernet/sfc/ef10.c 4152 */;
	u8 cocci_id/* drivers/net/ethernet/sfc/ef10.c 4094 */;
	unsigned long cocci_id/* drivers/net/ethernet/sfc/ef10.c 4049 */;
	const struct efx_ef10_filter_table *cocci_id/* drivers/net/ethernet/sfc/ef10.c 4037 */;
	struct efx_filter_spec *cocci_id/* drivers/net/ethernet/sfc/ef10.c 4028 */;
	const u8 *cocci_id/* drivers/net/ethernet/sfc/ef10.c 4021 */;
	struct efx_tx_queue *cocci_id/* drivers/net/ethernet/sfc/ef10.c 3963 */;
	efx_dword_t cocci_id/* drivers/net/ethernet/sfc/ef10.c 3889 */;
	const efx_qword_t *cocci_id/* drivers/net/ethernet/sfc/ef10.c 3536 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/sfc/ef10.c 3274 */;
	struct efx_channel *cocci_id/* drivers/net/ethernet/sfc/ef10.c 3240 */;
	efx_qword_t cocci_id/* drivers/net/ethernet/sfc/ef10.c 3236 */;
	efx_mcdi_async_completer cocci_id/* drivers/net/ethernet/sfc/ef10.c 3199 */;
	efx_qword_t *cocci_id/* drivers/net/ethernet/sfc/ef10.c 3166 */;
	struct efx_rx_buffer *cocci_id/* drivers/net/ethernet/sfc/ef10.c 3165 */;
	struct efx_rx_queue *cocci_id/* drivers/net/ethernet/sfc/ef10.c 3163 */;
	const u32 *cocci_id/* drivers/net/ethernet/sfc/ef10.c 3015 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/ef10.c 2734 */;
	u32 cocci_id/* drivers/net/ethernet/sfc/ef10.c 2731 */;
	unsigned *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2724 */;
	struct efx_rss_context *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2723 */;
	bool cocci_id/* drivers/net/ethernet/sfc/ef10.c 2722 */;
	enum{EFX_EF10_TEST=1, EFX_EF10_REFILL,} cocci_id/* drivers/net/ethernet/sfc/ef10.c 24 */;
	struct ipv6hdr *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2354 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2331 */;
	struct tcphdr *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2330 */;
	struct efx_tx_buffer *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2329 */;
	bool *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2327 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2326 */;
	efx_oword_t cocci_id/* drivers/net/ethernet/sfc/ef10.c 2314 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/sfc/ef10.c 2252 */;
	void *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2252 */;
	struct efx_msi_context *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2234 */;
	const efx_dword_t cocci_id/* drivers/net/ethernet/sfc/ef10.c 2169 */;
	const efx_dword_t *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2169 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/sfc/ef10.c 2129 */;
	struct efx_buffer cocci_id/* drivers/net/ethernet/sfc/ef10.c 2002 */;
	__le64 *cocci_id/* drivers/net/ethernet/sfc/ef10.c 1947 */;
	__le64 cocci_id/* drivers/net/ethernet/sfc/ef10.c 1945 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/sfc/ef10.c 1873 */;
	u8 *cocci_id/* drivers/net/ethernet/sfc/ef10.c 1863 */;
	u64 cocci_id/* drivers/net/ethernet/sfc/ef10.c 1826 */[2];
	unsigned long *cocci_id/* drivers/net/ethernet/sfc/ef10.c 1823 */;
	const struct efx_hw_stat_desc cocci_id/* drivers/net/ethernet/sfc/ef10.c 1589 */[EF10_STAT_COUNT];
	enum{EF10_RESET_PORT=((ETH_RESET_MAC | ETH_RESET_PHY) << ETH_RESET_SHARED_SHIFT), EF10_RESET_MC=((ETH_RESET_DMA | ETH_RESET_FILTER | ETH_RESET_OFFLOAD | ETH_RESET_MAC | ETH_RESET_PHY | ETH_RESET_MGMT) << ETH_RESET_SHARED_SHIFT),} cocci_id/* drivers/net/ethernet/sfc/ef10.c 1528 */;
	enum reset_type cocci_id/* drivers/net/ethernet/sfc/ef10.c 1518 */;
	void __iomem *cocci_id/* drivers/net/ethernet/sfc/ef10.c 1297 */;
	int cocci_id/* drivers/net/ethernet/sfc/ef10.c 128 */(struct efx_nic *efx, bool unloading);
	void cocci_id/* drivers/net/ethernet/sfc/ef10.c 127 */(struct efx_nic *efx, u16 vid);
	void cocci_id/* drivers/net/ethernet/sfc/ef10.c 125 */(struct efx_nic *efx, struct efx_ef10_filter_vlan *vlan);
	int cocci_id/* drivers/net/ethernet/sfc/ef10.c 124 */(struct efx_nic *efx, u16 vid);
	void cocci_id/* drivers/net/ethernet/sfc/ef10.c 123 */(struct efx_nic *efx);
	unsigned int *cocci_id/* drivers/net/ethernet/sfc/ef10.c 1122 */;
	struct ef10_vf *cocci_id/* drivers/net/ethernet/sfc/ef10.c 1065 */;
}