cocci_test_suite() {
	efx_dword_t cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 947 */;
	efx_oword_t cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 946 */;
	struct efx_buffer *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 940 */;
	struct vfdi_req cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 922 */;
	unsigned long long cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 907 */;
	struct efx_memcpy_req cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 875 */[2];
	struct vfdi_req *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 874 */;
	const efx_vfdi_op_t cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 859 */[VFDI_OP_LIMIT];
	int (*cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 857 */)(struct siena_vf *vf);
	struct siena_vf {
		struct efx_nic *efx;
		unsigned int pci_rid;
		char pci_name[13];
		unsigned int index;
		struct work_struct req;
		u64 req_addr;
		int req_type;
		unsigned req_seqno;
		unsigned msg_seqno;
		bool busy;
		struct efx_buffer buf;
		unsigned buftbl_base;
		bool rx_filtering;
		enum efx_filter_flags rx_filter_flags;
		unsigned rx_filter_qid;
		int rx_filter_id;
		enum efx_vf_tx_filter_mode tx_filter_mode;
		int tx_filter_id;
		struct vfdi_endpoint addr;
		u64 status_addr;
		struct mutex status_lock;
		u64 *peer_page_addrs;
		unsigned peer_page_count;
		u64 evq0_addrs[EFX_MAX_VF_EVQ_SIZE * sizeof(efx_qword_t) / EFX_BUF_SIZE];
		unsigned evq0_count;
		wait_queue_head_t flush_waitq;
		struct mutex txq_lock;
		unsigned long txq_mask[VI_MASK_LENGTH];
		unsigned txq_count;
		unsigned long rxq_mask[VI_MASK_LENGTH];
		unsigned rxq_count;
		unsigned long rxq_retry_mask[VI_MASK_LENGTH];
		atomic_t rxq_retry_count;
		struct work_struct reset_work;
	} cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 84 */;
	struct siena_vf **cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 510 */;
	bool cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 498 */;
	u64 *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 477 */;
	struct vfdi_status cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 419 */;
	efx_qword_t cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 407 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 406 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 405 */;
	struct efx_endpoint_page *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 404 */;
	struct efx_memcpy_req cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 403 */[4];
	struct vfdi_status *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 402 */;
	struct siena_nic_data *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 401 */;
	struct efx_nic *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 400 */;
	struct siena_vf *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 398 */;
	void cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 398 */;
	struct efx_filter_spec cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 347 */;
	enum efx_vf_tx_filter_mode{VF_TX_FILTER_OFF, VF_TX_FILTER_AUTO, VF_TX_FILTER_ON,} cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 32 */;
	u32 cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 247 */;
	struct efx_memcpy_req *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 240 */;
	size_t cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 201 */;
	unsigned *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 196 */;
	struct workqueue_struct *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 188 */;
	u16 cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1659 */;
	struct ifla_vf_info *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1655 */;
	u8 cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1611 */;
	u8 *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1593 */;
	int cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1576 */;
	struct efx_buffer cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1554 */;
	struct efx_endpoint_page {
		struct list_head link;
		void *ptr;
		dma_addr_t addr;
	} cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 154 */;
	u64 cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1436 */;
	struct efx_local_addr {
		struct list_head link;
		u8 addr[ETH_ALEN];
	} cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 142 */;
	efx_qword_t *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1401 */;
	struct efx_channel *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1401 */;
	struct net_device *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1287 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1241 */;
	struct efx_memcpy_req {
		unsigned int from_rid;
		void *from_buf;
		u64 from_addr;
		unsigned int to_rid;
		u64 to_addr;
		unsigned length;
	} cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 122 */;
	struct efx_endpoint_page cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1184 */;
	struct efx_local_addr cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1177 */;
	struct efx_local_addr *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1172 */;
	struct vfdi_endpoint cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1142 */;
	struct list_head cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1086 */;
	struct vfdi_endpoint *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1084 */;
	struct siena_nic_data cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1078 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1075 */;
	const struct efx_channel_type cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1042 */;
	char *cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1037 */;
	struct siena_vf cocci_id/* drivers/net/ethernet/sfc/siena_sriov.c 1009 */;
}