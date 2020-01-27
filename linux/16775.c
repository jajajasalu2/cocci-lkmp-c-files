cocci_test_suite() {
	u8 cocci_id/* drivers/input/rmi4/rmi_f55.c 64 */[256];
	struct f55_data *cocci_id/* drivers/input/rmi4/rmi_f55.c 40 */;
	struct rmi_driver_data *cocci_id/* drivers/input/rmi4/rmi_f55.c 39 */;
	struct rmi_device *cocci_id/* drivers/input/rmi4/rmi_f55.c 38 */;
	struct rmi_function *cocci_id/* drivers/input/rmi4/rmi_f55.c 36 */;
	int cocci_id/* drivers/input/rmi4/rmi_f55.c 36 */;
	struct f55_data {
		struct rmi_function *fn;
		u8 qry[F55_QUERY_LEN];
		u8 num_rx_electrodes;
		u8 cfg_num_rx_electrodes;
		u8 num_tx_electrodes;
		u8 cfg_num_tx_electrodes;
	} cocci_id/* drivers/input/rmi4/rmi_f55.c 26 */;
	struct rmi_function_handler cocci_id/* drivers/input/rmi4/rmi_f55.c 122 */;
	struct f55_data cocci_id/* drivers/input/rmi4/rmi_f55.c 112 */;
}
