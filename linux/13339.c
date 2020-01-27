cocci_test_suite() {
	u8 cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 66 */[0x100];
	struct hexium {
		int type;
		struct video_device video_dev;
		struct i2c_adapter i2c_adapter;
		int cur_input;
		v4l2_std_id cur_std;
	} cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 54 */;
	struct hexium_data {
		s8 adr;
		u8 byte;
	} cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 45 */;
	void __exit cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 410 */;
	void cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 410 */;
	int __init cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 400 */;
	unsigned long cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 362 */;
	const struct pci_device_id cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 356 */[];
	struct saa7146_pci_extension_data cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 346 */;
	struct saa7146_extension cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 344 */;
	struct saa7146_standard *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 323 */;
	struct v4l2_input cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 31 */[HEXIUM_INPUTS];
	struct hexium *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 247 */;
	struct saa7146_pci_extension_data *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 245 */;
	struct saa7146_dev *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 245 */;
	struct saa7146_ext_vv cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 242 */;
	unsigned int cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 227 */;
	struct saa7146_fh *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 218 */;
	unsigned int *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 216 */;
	struct v4l2_input cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 210 */;
	struct v4l2_input *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 203 */;
	struct file *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 203 */;
	void *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 203 */;
	int cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 20 */;
	struct hexium_data *cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 184 */;
	union i2c_smbus_data cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 153 */;
	struct saa7146_standard cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 127 */[];
	struct hexium_data cocci_id/* drivers/media/pci/saa7146/hexium_gemini.c 113 */[];
}
