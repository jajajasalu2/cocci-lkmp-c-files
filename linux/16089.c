cocci_test_suite() {
	enum{DT9812_LEAST_USB_FIRMWARE_CMD_CODE=0, DT9812_W_FLASH_DATA=0, DT9812_R_FLASH_DATA=1, DT9812_R_SINGLE_BYTE_REG=2, DT9812_W_SINGLE_BYTE_REG=3, DT9812_R_MULTI_BYTE_REG=4, DT9812_W_MULTI_BYTE_REG=5, DT9812_RMW_SINGLE_BYTE_REG=6, DT9812_RMW_MULTI_BYTE_REG=7, DT9812_R_SINGLE_BYTE_SMBUS=8, DT9812_W_SINGLE_BYTE_SMBUS=9, DT9812_R_MULTI_BYTE_SMBUS=10, DT9812_W_MULTI_BYTE_SMBUS=11, DT9812_R_SINGLE_BYTE_DEV=12, DT9812_W_SINGLE_BYTE_DEV=13, DT9812_R_MULTI_BYTE_DEV=14, DT9812_W_MULTI_BYTE_DEV=15, DT9812_W_DAC_THRESHOLD=16, DT9812_W_INT_ON_CHANGE_MASK=17, DT9812_W_CGL=18, DT9812_R_MULTI_BYTE_USBMEM=19, DT9812_W_MULTI_BYTE_USBMEM=20, DT9812_START_SUBSYSTEM=21, DT9812_STOP_SUBSYSTEM=22, DT9812_CALIBRATE_POT=23, DT9812_W_DAC_FIFO_SIZE=24, DT9812_W_CGL_DAC=25, DT9812_R_SINGLE_VALUE_CMD=26, DT9812_W_SINGLE_VALUE_CMD=27, DT9812_MAX_USB_FIRMWARE_CMD_CODE,} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 92 */;
	struct usb_driver cocci_id/* drivers/staging/comedi/drivers/dt9812.c 861 */;
	const struct usb_device_id cocci_id/* drivers/staging/comedi/drivers/dt9812.c 855 */[];
	const struct usb_device_id *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 850 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/dt9812.c 842 */;
	enum dt9812_gain{DT9812_GAIN_0PT25=1, DT9812_GAIN_0PT5=2, DT9812_GAIN_1=4, DT9812_GAIN_2=8, DT9812_GAIN_4=16, DT9812_GAIN_8=32, DT9812_GAIN_16=64,} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 82 */;
	enum{DT9812_DEVID_DT9812_10, DT9812_DEVID_DT9812_2PT5,} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 76 */;
	bool cocci_id/* drivers/staging/comedi/drivers/dt9812.c 758 */;
	struct usb_interface *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 755 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/dt9812.c 753 */;
	__le32 cocci_id/* drivers/staging/comedi/drivers/dt9812.c 688 */;
	__le16 cocci_id/* drivers/staging/comedi/drivers/dt9812.c 687 */;
	u32 cocci_id/* drivers/staging/comedi/drivers/dt9812.c 683 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 634 */;
	struct usb_host_interface *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 632 */;
	u16 cocci_id/* drivers/staging/comedi/drivers/dt9812.c 578 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/dt9812.c 577 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 575 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 574 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 573 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 572 */;
	int cocci_id/* drivers/staging/comedi/drivers/dt9812.c 572 */;
	u8 cocci_id/* drivers/staging/comedi/drivers/dt9812.c 547 */;
	u8 cocci_id/* drivers/staging/comedi/drivers/dt9812.c 430 */[3];
	struct dt9812_rmw_byte cocci_id/* drivers/staging/comedi/drivers/dt9812.c 429 */[3];
	struct dt9812_private *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 428 */;
	enum dt9812_gain cocci_id/* drivers/staging/comedi/drivers/dt9812.c 426 */;
	u16 *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 426 */;
	struct dt9812_rmw_byte *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 377 */;
	void cocci_id/* drivers/staging/comedi/drivers/dt9812.c 376 */;
	u8 cocci_id/* drivers/staging/comedi/drivers/dt9812.c 347 */[1];
	u8 cocci_id/* drivers/staging/comedi/drivers/dt9812.c 325 */[2];
	u8 *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 322 */;
	struct dt9812_usb_cmd cocci_id/* drivers/staging/comedi/drivers/dt9812.c 240 */;
	struct usb_device *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 238 */;
	void *cocci_id/* drivers/staging/comedi/drivers/dt9812.c 236 */;
	size_t cocci_id/* drivers/staging/comedi/drivers/dt9812.c 236 */;
	struct dt9812_private {
		struct mutex mut;
		struct {
			__u8 addr;
			size_t size;
		} cmd_wr,cmd_rd;
		u16 device;
	} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 226 */;
	struct dt9812_usb_cmd {
		__le32 cmd;
		union {
			struct dt9812_flash_data flash_data_info;
			struct dt9812_read_multi read_multi_info;
			struct dt9812_write_multi write_multi_info;
			struct dt9812_rmw_multi rmw_multi_info;
		} u;
	} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 216 */;
	struct dt9812_rmw_multi {
		u8 count;
		struct dt9812_rmw_byte rmw[DT9812_MAX_NUM_MULTI_BYTE_RMWS];
	} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 211 */;
	struct dt9812_rmw_byte cocci_id/* drivers/staging/comedi/drivers/dt9812.c 209 */;
	struct dt9812_rmw_byte {
		u8 address;
		u8 and_mask;
		u8 or_value;
	} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 201 */;
	struct dt9812_write_multi {
		u8 count;
		struct dt9812_write_byte write[DT9812_MAX_NUM_MULTI_BYTE_WRTS];
	} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 196 */;
	struct dt9812_write_byte cocci_id/* drivers/staging/comedi/drivers/dt9812.c 194 */;
	struct dt9812_write_byte {
		u8 address;
		u8 value;
	} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 187 */;
	struct dt9812_read_multi {
		u8 count;
		u8 address[DT9812_MAX_NUM_MULTI_BYTE_RDS];
	} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 182 */;
	struct dt9812_flash_data {
		__le16 numbytes;
		__le16 address;
	} cocci_id/* drivers/staging/comedi/drivers/dt9812.c 174 */;
}
