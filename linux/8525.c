cocci_test_suite() {
	s32 cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 83 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 68 */;
	struct net_device *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 67 */;
	struct qcauart *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 66 */;
	size_t cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 64 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 63 */;
	struct serdev_device *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 63 */;
	int cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 62 */;
	struct qcauart {
		struct net_device *net_dev;
		spinlock_t lock;
		struct work_struct tx_work;
		struct serdev_device *serdev;
		struct qcafrm_handle frm_handle;
		struct sk_buff *rx_skb;
		unsigned char *tx_head;
		int tx_left;
		unsigned char *tx_buffer;
	} cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 48 */;
	struct serdev_device_driver cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 407 */;
	u32 cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 327 */;
	const char *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 326 */;
	struct qcauart cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 324 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 314 */[];
	const struct net_device_ops cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 291 */;
	u8 *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 205 */;
	u8 cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 203 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 199 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 198 */;
	struct serdev_device_ops cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 170 */;
	void cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 163 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/qualcomm/qca_uart.c 127 */;
}
