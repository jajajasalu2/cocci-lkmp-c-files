cocci_test_suite() {
	u8 cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 84 */[I2C_MAX_BYTES * 2];
	u8 cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 82 */;
	u8 *cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 82 */;
	struct hdcs {
		enum hdcs_power_state state;
		int w,h;
		struct {
			int left,top;
			int width,height;
			int border;
		} array;
		struct {
			u8 cto;
			u8 cpo;
			u16 rs;
			u16 er;
		} exp;
		int psmp;
	} cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 57 */;
	u16 cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 522 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 520 */;
	int cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 520 */;
	enum hdcs_power_state{HDCS_STATE_SLEEP, HDCS_STATE_IDLE, HDCS_STATE_RUN,} cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 50 */;
	struct hdcs *cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 475 */;
	struct hdcs cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 428 */;
	struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 36 */[];
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 346 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 340 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 326 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 325 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 323 */;
	unsigned int cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 276 */;
	u8 cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 253 */[4];
	u8 cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 177 */[14];
	__s32 cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 161 */;
	enum hdcs_power_state cocci_id/* drivers/media/usb/gspca/stv06xx/stv06xx_hdcs.c 102 */;
}
