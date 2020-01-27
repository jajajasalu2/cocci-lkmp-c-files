cocci_test_suite() {
	u32 cocci_id/* drivers/reset/reset-ti-sci.c 77 */;
	const struct ti_sci_dev_ops *cocci_id/* drivers/reset/reset-ti-sci.c 75 */;
	const struct ti_sci_handle *cocci_id/* drivers/reset/reset-ti-sci.c 74 */;
	bool cocci_id/* drivers/reset/reset-ti-sci.c 71 */;
	struct ti_sci_reset_data cocci_id/* drivers/reset/reset-ti-sci.c 52 */;
	struct ti_sci_reset_data {
		struct reset_controller_dev rcdev;
		struct device *dev;
		const struct ti_sci_handle *sci;
		struct idr idr;
	} cocci_id/* drivers/reset/reset-ti-sci.c 44 */;
	struct ti_sci_reset_control {
		u32 dev_id;
		u32 reset_mask;
		struct mutex lock;
	} cocci_id/* drivers/reset/reset-ti-sci.c 31 */;
	struct platform_driver cocci_id/* drivers/reset/reset-ti-sci.c 257 */;
	struct platform_device *cocci_id/* drivers/reset/reset-ti-sci.c 218 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-ti-sci.c 212 */[];
	struct ti_sci_reset_control *cocci_id/* drivers/reset/reset-ti-sci.c 196 */;
	struct ti_sci_reset_data *cocci_id/* drivers/reset/reset-ti-sci.c 195 */;
	const struct of_phandle_args *cocci_id/* drivers/reset/reset-ti-sci.c 193 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-ti-sci.c 172 */;
	unsigned long cocci_id/* drivers/reset/reset-ti-sci.c 115 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-ti-sci.c 114 */;
	int cocci_id/* drivers/reset/reset-ti-sci.c 114 */;
}
