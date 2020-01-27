cocci_test_suite() {
	struct {
		struct hexium_data data[8];
	} cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 72 */[];
	u8 cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 62 */[53];
	struct hexium {
		int type;
		struct video_device video_dev;
		struct i2c_adapter i2c_adapter;
		int cur_input;
	} cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 52 */;
	void __exit cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 480 */;
	void cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 480 */;
	int __init cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 470 */;
	struct hexium_data {
		s8 adr;
		u8 byte;
	} cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 46 */;
	unsigned long cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 424 */;
	const struct pci_device_id cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 418 */[];
	struct saa7146_pci_extension_data cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 403 */;
	struct saa7146_extension cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 401 */;
	struct saa7146_standard *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 396 */;
	struct hexium *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 357 */;
	struct saa7146_pci_extension_data *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 355 */;
	struct saa7146_dev *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 355 */;
	struct saa7146_ext_vv cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 352 */;
	unsigned int cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 338 */;
	struct saa7146_fh *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 329 */;
	unsigned int *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 327 */;
	struct v4l2_input cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 321 */;
	struct v4l2_input cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 32 */[HEXIUM_INPUTS];
	struct v4l2_input *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 314 */;
	struct file *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 314 */;
	void *cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 314 */;
	union i2c_smbus_data cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 279 */;
	int cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 20 */;
	struct saa7146_standard cocci_id/* drivers/media/pci/saa7146/hexium_orion.c 177 */[];
}
