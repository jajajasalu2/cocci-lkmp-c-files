cocci_test_suite() {
	struct btsdio_data cocci_id/* drivers/bluetooth/btsdio.c 93 */;
	struct work_struct *cocci_id/* drivers/bluetooth/btsdio.c 91 */;
	struct btsdio_data {
		struct hci_dev *hdev;
		struct sdio_func *func;
		struct work_struct work;
		struct sk_buff_head txq;
	} cocci_id/* drivers/bluetooth/btsdio.c 43 */;
	struct sdio_driver cocci_id/* drivers/bluetooth/btsdio.c 358 */;
	const struct sdio_device_id cocci_id/* drivers/bluetooth/btsdio.c 28 */[];
	struct sdio_func_tuple *cocci_id/* drivers/bluetooth/btsdio.c 271 */;
	const struct sdio_device_id *cocci_id/* drivers/bluetooth/btsdio.c 267 */;
	struct btsdio_data *cocci_id/* drivers/bluetooth/btsdio.c 209 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/btsdio.c 207 */;
	int cocci_id/* drivers/bluetooth/btsdio.c 207 */;
	struct sdio_func *cocci_id/* drivers/bluetooth/btsdio.c 159 */;
	void cocci_id/* drivers/bluetooth/btsdio.c 159 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/btsdio.c 116 */;
	u8 cocci_id/* drivers/bluetooth/btsdio.c 115 */[4]__attribute__((aligned(4)));
}
