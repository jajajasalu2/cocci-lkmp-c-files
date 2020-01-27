cocci_test_suite() {
	struct product *cocci_id/* tools/usb/usbip/libsrc/names.c 96 */;
	u_int16_t cocci_id/* tools/usb/usbip/libsrc/names.c 94 */;
	struct vendor *cocci_id/* tools/usb/usbip/libsrc/names.c 85 */;
	struct protocol *cocci_id/* tools/usb/usbip/libsrc/names.c 81 */[HASHSZ];
	struct subclass *cocci_id/* tools/usb/usbip/libsrc/names.c 80 */[HASHSZ];
	struct class *cocci_id/* tools/usb/usbip/libsrc/names.c 79 */[HASHSZ];
	struct product *cocci_id/* tools/usb/usbip/libsrc/names.c 78 */[HASHSZ];
	struct vendor *cocci_id/* tools/usb/usbip/libsrc/names.c 77 */[HASHSZ];
	unsigned int cocci_id/* tools/usb/usbip/libsrc/names.c 66 */;
	struct genericstrtable {
		struct genericstrtable *next;
		unsigned int num;
		char name[1];
	} cocci_id/* tools/usb/usbip/libsrc/names.c 55 */;
	struct protocol {
		struct protocol *next;
		u_int8_t classid,subclassid,protocolid;
		char name[1];
	} cocci_id/* tools/usb/usbip/libsrc/names.c 49 */;
	FILE *cocci_id/* tools/usb/usbip/libsrc/names.c 477 */;
	char *cocci_id/* tools/usb/usbip/libsrc/names.c 475 */;
	int cocci_id/* tools/usb/usbip/libsrc/names.c 475 */;
	struct subclass {
		struct subclass *next;
		u_int8_t classid,subclassid;
		char name[1];
	} cocci_id/* tools/usb/usbip/libsrc/names.c 43 */;
	struct class {
		struct class *next;
		u_int8_t classid;
		char name[1];
	} cocci_id/* tools/usb/usbip/libsrc/names.c 37 */;
	struct product {
		struct product *next;
		u_int16_t vendorid,productid;
		char name[1];
	} cocci_id/* tools/usb/usbip/libsrc/names.c 31 */;
	char cocci_id/* tools/usb/usbip/libsrc/names.c 293 */[512];
	struct protocol cocci_id/* tools/usb/usbip/libsrc/names.c 279 */;
	struct subclass cocci_id/* tools/usb/usbip/libsrc/names.c 256 */;
	struct vendor {
		struct vendor *next;
		u_int16_t vendorid;
		char name[1];
	} cocci_id/* tools/usb/usbip/libsrc/names.c 25 */;
	struct class cocci_id/* tools/usb/usbip/libsrc/names.c 237 */;
	struct product cocci_id/* tools/usb/usbip/libsrc/names.c 217 */;
	struct vendor cocci_id/* tools/usb/usbip/libsrc/names.c 197 */;
	void cocci_id/* tools/usb/usbip/libsrc/names.c 169 */;
	struct pool cocci_id/* tools/usb/usbip/libsrc/names.c 153 */;
	struct pool *cocci_id/* tools/usb/usbip/libsrc/names.c 151 */;
	void *cocci_id/* tools/usb/usbip/libsrc/names.c 149 */;
	size_t cocci_id/* tools/usb/usbip/libsrc/names.c 149 */;
	struct pool {
		struct pool *next;
		void *mem;
	} cocci_id/* tools/usb/usbip/libsrc/names.c 142 */;
	struct protocol *cocci_id/* tools/usb/usbip/libsrc/names.c 130 */;
	struct subclass *cocci_id/* tools/usb/usbip/libsrc/names.c 118 */;
	struct class *cocci_id/* tools/usb/usbip/libsrc/names.c 107 */;
	u_int8_t cocci_id/* tools/usb/usbip/libsrc/names.c 105 */;
	const char *cocci_id/* tools/usb/usbip/libsrc/names.c 105 */;
}
