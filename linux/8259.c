cocci_test_suite() {
	struct efx_mcdi_async_param *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 979 */;
	unsigned long cocci_id/* drivers/net/ethernet/sfc/mcdi.c 976 */;
	efx_mcdi_async_completer *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 975 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/mcdi.c 858 */;
	struct efx_mcdi_iface *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 826 */;
	u32 cocci_id/* drivers/net/ethernet/sfc/mcdi.c 805 */;
	bool cocci_id/* drivers/net/ethernet/sfc/mcdi.c 803 */;
	int *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 803 */;
	size_t *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 803 */;
	efx_dword_t *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 802 */;
	const efx_dword_t *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 801 */;
	size_t cocci_id/* drivers/net/ethernet/sfc/mcdi.c 801 */;
	struct efx_nic *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 800 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/mcdi.c 800 */;
	int cocci_id/* drivers/net/ethernet/sfc/mcdi.c 800 */;
	char *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 75 */;
	u32 *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 653 */;
	const size_t cocci_id/* drivers/net/ethernet/sfc/mcdi.c 635 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 607 */;
	struct efx_mcdi_async_param cocci_id/* drivers/net/ethernet/sfc/mcdi.c 538 */;
	void cocci_id/* drivers/net/ethernet/sfc/mcdi.c 52 */(struct efx_nic *efx);
	bool cocci_id/* drivers/net/ethernet/sfc/mcdi.c 51 */(struct efx_nic *efx);
	int cocci_id/* drivers/net/ethernet/sfc/mcdi.c 49 */(struct efx_nic *efx,
							     bool driver_operating,
							     bool *was_attached_out);
	void cocci_id/* drivers/net/ethernet/sfc/mcdi.c 48 */(struct timer_list *t);
	struct efx_mcdi_async_param {
		struct list_head list;
		unsigned int cmd;
		size_t inlen;
		size_t outlen;
		bool quiet;
		efx_mcdi_async_completer *complete;
		unsigned long cookie;
	} cocci_id/* drivers/net/ethernet/sfc/mcdi.c 37 */;
	efx_dword_t cocci_id/* drivers/net/ethernet/sfc/mcdi.c 270 */;
	struct efx_mcdi_mtd_partition cocci_id/* drivers/net/ethernet/sfc/mcdi.c 2303 */;
	struct efx_mtd_partition *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 2300 */;
	const u8 *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 2256 */;
	struct efx_mcdi_mtd_partition *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 2227 */;
	loff_t cocci_id/* drivers/net/ethernet/sfc/mcdi.c 2225 */;
	struct mtd_info *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 2225 */;
	unsigned int *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 2034 */;
	struct efx_rx_queue *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1970 */;
	struct efx_channel *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1969 */;
	enum reset_type cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1851 */;
	enum efx_led_mode cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1804 */;
	const char *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1711 */;
	efx_dword_t cocci_id/* drivers/net/ethernet/sfc/mcdi.c 157 */[2];
	u16 *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1517 */;
	u8 *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1516 */;
	bool *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1450 */;
	struct efx_ef10_nic_data *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1428 */;
	__le16 *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1419 */;
	const __le16 *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1405 */;
	efx_qword_t *cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1302 */;
	void cocci_id/* drivers/net/ethernet/sfc/mcdi.c 1290 */;
}
