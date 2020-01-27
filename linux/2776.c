cocci_test_suite() {
	struct pinctrl_state *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 83 */;
	struct pinctrl *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 57 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 56 */;
	u32 cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 54 */;
	struct i2c_msg cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 38 */[];
	struct platform_driver cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 307 */;
	const struct of_device_id cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 301 */[];
	struct i2c_demux_pinctrl_priv {
		int cur_chan;
		int num_chan;
		struct device *dev;
		const char *bus_name;
		struct i2c_adapter cur_adap;
		struct i2c_algorithm algo;
		struct i2c_demux_pinctrl_chan chan[];
	} cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 28 */;
	struct i2c_demux_pinctrl_chan {
		struct device_node *parent_np;
		struct i2c_adapter *parent_adap;
		struct of_changeset chgset;
	} cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 22 */;
	struct property *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 212 */;
	struct device_node *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 210 */;
	struct platform_device *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 208 */;
	unsigned int cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 192 */;
	const char *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 189 */;
	size_t cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 189 */;
	int cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 167 */;
	struct i2c_demux_pinctrl_priv *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 166 */;
	char *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 164 */;
	struct device_attribute *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 163 */;
	struct device *cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 162 */;
	ssize_t cocci_id/* drivers/i2c/muxes/i2c-demux-pinctrl.c 162 */;
}
