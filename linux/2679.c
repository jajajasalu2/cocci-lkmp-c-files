cocci_test_suite() {
	struct nmk_i2c_dev cocci_id/* drivers/i2c/busses/i2c-nomadik.c 973 */;
	struct i2c_vendor_data *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 970 */;
	const struct amba_id *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 964 */;
	struct amba_device *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 964 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 947 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-nomadik.c 942 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 937 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-nomadik.c 937 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 889 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-nomadik.c 724 */;
	void *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 724 */;
	int cocci_id/* drivers/i2c/busses/i2c-nomadik.c 705 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-nomadik.c 662 */[];
	unsigned short cocci_id/* drivers/i2c/busses/i2c-nomadik.c 303 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-nomadik.c 300 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-nomadik.c 262 */;
	struct nmk_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 260 */;
	void cocci_id/* drivers/i2c/busses/i2c-nomadik.c 260 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-nomadik.c 218 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 202 */;
	const char *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 187 */[];
	struct nmk_i2c_dev {
		struct i2c_vendor_data *vendor;
		struct amba_device *adev;
		struct i2c_adapter adap;
		int irq;
		void __iomem *virtbase;
		struct clk *clk;
		struct i2c_nmk_client cli;
		u32 clk_freq;
		unsigned char tft;
		unsigned char rft;
		int timeout;
		enum i2c_freq_mode sm;
		int stop;
		struct completion xfer_complete;
		int result;
	} cocci_id/* drivers/i2c/busses/i2c-nomadik.c 168 */;
	struct i2c_nmk_client {
		unsigned short slave_adr;
		unsigned long count;
		unsigned char *buffer;
		unsigned long xfer_bytes;
		enum i2c_operation operation;
	} cocci_id/* drivers/i2c/busses/i2c-nomadik.c 142 */;
	enum i2c_operation{I2C_NO_OPERATION=0xff, I2C_WRITE=0x00, I2C_READ=0x01,} cocci_id/* drivers/i2c/busses/i2c-nomadik.c 128 */;
	enum i2c_status{I2C_NOP, I2C_ON_GOING, I2C_OK, I2C_ABORT,} cocci_id/* drivers/i2c/busses/i2c-nomadik.c 120 */;
	struct i2c_vendor_data {
		bool has_mtdws;
		u32 fifodepth;
	} cocci_id/* drivers/i2c/busses/i2c-nomadik.c 115 */;
	void __exit cocci_id/* drivers/i2c/busses/i2c-nomadik.c 1117 */;
	int __init cocci_id/* drivers/i2c/busses/i2c-nomadik.c 1112 */;
	struct amba_driver cocci_id/* drivers/i2c/busses/i2c-nomadik.c 1101 */;
	const struct amba_id cocci_id/* drivers/i2c/busses/i2c-nomadik.c 1085 */[];
	struct i2c_vendor_data cocci_id/* drivers/i2c/busses/i2c-nomadik.c 1080 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-nomadik.c 1060 */;
	enum i2c_freq_mode{I2C_FREQ_MODE_STANDARD, I2C_FREQ_MODE_FAST, I2C_FREQ_MODE_HIGH_SPEED, I2C_FREQ_MODE_FAST_PLUS,} cocci_id/* drivers/i2c/busses/i2c-nomadik.c 103 */;
}
