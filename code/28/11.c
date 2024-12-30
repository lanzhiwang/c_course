/**

strerror
char * strerror ( int errnum );

在 C 语言中有一个全局变量 errno, 当库函数的调用发生错误的时候, 就会将本次错误的错误码存放在 errno 这个变量中.
使用这个全局变量需要包含头文件 errno.h

 */

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void)
{
	FILE *pFile;
	pFile = fopen("unexist.ent", "r");
	if (pFile == NULL) {
		perror("The following error occurred");
		perror("fopen");
		printf("errno = %d\n", errno);
		printf("Error opening file unexist.ent: %s\n", strerror(errno));
	}

	for (int i = 0; i < 256; i++) {
		printf("i = %d: %s\n", i, strerror(i));
	}
	return 0;
}

/**

# ./main
The following error occurred: No such file or directory
fopen: No such file or directory
errno = 2
Error opening file unexist.ent: No such file or directory
i = 0: Success
i = 1: Operation not permitted
i = 2: No such file or directory
i = 3: No such process
i = 4: Interrupted system call
i = 5: Input/output error
i = 6: No such device or address
i = 7: Argument list too long
i = 8: Exec format error
i = 9: Bad file descriptor
i = 10: No child processes
i = 11: Resource temporarily unavailable
i = 12: Cannot allocate memory
i = 13: Permission denied
i = 14: Bad address
i = 15: Block device required
i = 16: Device or resource busy
i = 17: File exists
i = 18: Invalid cross-device link
i = 19: No such device
i = 20: Not a directory
i = 21: Is a directory
i = 22: Invalid argument
i = 23: Too many open files in system
i = 24: Too many open files
i = 25: Inappropriate ioctl for device
i = 26: Text file busy
i = 27: File too large
i = 28: No space left on device
i = 29: Illegal seek
i = 30: Read-only file system
i = 31: Too many links
i = 32: Broken pipe
i = 33: Numerical argument out of domain
i = 34: Numerical result out of range
i = 35: Resource deadlock avoided
i = 36: File name too long
i = 37: No locks available
i = 38: Function not implemented
i = 39: Directory not empty
i = 40: Too many levels of symbolic links
i = 41: Unknown error 41
i = 42: No message of desired type
i = 43: Identifier removed
i = 44: Channel number out of range
i = 45: Level 2 not synchronized
i = 46: Level 3 halted
i = 47: Level 3 reset
i = 48: Link number out of range
i = 49: Protocol driver not attached
i = 50: No CSI structure available
i = 51: Level 2 halted
i = 52: Invalid exchange
i = 53: Invalid request descriptor
i = 54: Exchange full
i = 55: No anode
i = 56: Invalid request code
i = 57: Invalid slot
i = 58: Unknown error 58
i = 59: Bad font file format
i = 60: Device not a stream
i = 61: No data available
i = 62: Timer expired
i = 63: Out of streams resources
i = 64: Machine is not on the network
i = 65: Package not installed
i = 66: Object is remote
i = 67: Link has been severed
i = 68: Advertise error
i = 69: Srmount error
i = 70: Communication error on send
i = 71: Protocol error
i = 72: Multihop attempted
i = 73: RFS specific error
i = 74: Bad message
i = 75: Value too large for defined data type
i = 76: Name not unique on network
i = 77: File descriptor in bad state
i = 78: Remote address changed
i = 79: Can not access a needed shared library
i = 80: Accessing a corrupted shared library
i = 81: .lib section in a.out corrupted
i = 82: Attempting to link in too many shared libraries
i = 83: Cannot exec a shared library directly
i = 84: Invalid or incomplete multibyte or wide character
i = 85: Interrupted system call should be restarted
i = 86: Streams pipe error
i = 87: Too many users
i = 88: Socket operation on non-socket
i = 89: Destination address required
i = 90: Message too long
i = 91: Protocol wrong type for socket
i = 92: Protocol not available
i = 93: Protocol not supported
i = 94: Socket type not supported
i = 95: Operation not supported
i = 96: Protocol family not supported
i = 97: Address family not supported by protocol
i = 98: Address already in use
i = 99: Cannot assign requested address
i = 100: Network is down
i = 101: Network is unreachable
i = 102: Network dropped connection on reset
i = 103: Software caused connection abort
i = 104: Connection reset by peer
i = 105: No buffer space available
i = 106: Transport endpoint is already connected
i = 107: Transport endpoint is not connected
i = 108: Cannot send after transport endpoint shutdown
i = 109: Too many references: cannot splice
i = 110: Connection timed out
i = 111: Connection refused
i = 112: Host is down
i = 113: No route to host
i = 114: Operation already in progress
i = 115: Operation now in progress
i = 116: Stale file handle
i = 117: Structure needs cleaning
i = 118: Not a XENIX named type file
i = 119: No XENIX semaphores available
i = 120: Is a named type file
i = 121: Remote I/O error
i = 122: Disk quota exceeded
i = 123: No medium found
i = 124: Wrong medium type
i = 125: Operation canceled
i = 126: Required key not available
i = 127: Key has expired
i = 128: Key has been revoked
i = 129: Key was rejected by service
i = 130: Owner died
i = 131: State not recoverable
i = 132: Operation not possible due to RF-kill
i = 133: Memory page has hardware error
i = 134: Unknown error 134
i = 135: Unknown error 135
i = 136: Unknown error 136
i = 137: Unknown error 137
i = 138: Unknown error 138
i = 139: Unknown error 139
i = 140: Unknown error 140
i = 141: Unknown error 141
i = 142: Unknown error 142
i = 143: Unknown error 143
i = 144: Unknown error 144
i = 145: Unknown error 145
i = 146: Unknown error 146
i = 147: Unknown error 147
i = 148: Unknown error 148
i = 149: Unknown error 149
i = 150: Unknown error 150
i = 151: Unknown error 151
i = 152: Unknown error 152
i = 153: Unknown error 153
i = 154: Unknown error 154
i = 155: Unknown error 155
i = 156: Unknown error 156
i = 157: Unknown error 157
i = 158: Unknown error 158
i = 159: Unknown error 159
i = 160: Unknown error 160
i = 161: Unknown error 161
i = 162: Unknown error 162
i = 163: Unknown error 163
i = 164: Unknown error 164
i = 165: Unknown error 165
i = 166: Unknown error 166
i = 167: Unknown error 167
i = 168: Unknown error 168
i = 169: Unknown error 169
i = 170: Unknown error 170
i = 171: Unknown error 171
i = 172: Unknown error 172
i = 173: Unknown error 173
i = 174: Unknown error 174
i = 175: Unknown error 175
i = 176: Unknown error 176
i = 177: Unknown error 177
i = 178: Unknown error 178
i = 179: Unknown error 179
i = 180: Unknown error 180
i = 181: Unknown error 181
i = 182: Unknown error 182
i = 183: Unknown error 183
i = 184: Unknown error 184
i = 185: Unknown error 185
i = 186: Unknown error 186
i = 187: Unknown error 187
i = 188: Unknown error 188
i = 189: Unknown error 189
i = 190: Unknown error 190
i = 191: Unknown error 191
i = 192: Unknown error 192
i = 193: Unknown error 193
i = 194: Unknown error 194
i = 195: Unknown error 195
i = 196: Unknown error 196
i = 197: Unknown error 197
i = 198: Unknown error 198
i = 199: Unknown error 199
i = 200: Unknown error 200
i = 201: Unknown error 201
i = 202: Unknown error 202
i = 203: Unknown error 203
i = 204: Unknown error 204
i = 205: Unknown error 205
i = 206: Unknown error 206
i = 207: Unknown error 207
i = 208: Unknown error 208
i = 209: Unknown error 209
i = 210: Unknown error 210
i = 211: Unknown error 211
i = 212: Unknown error 212
i = 213: Unknown error 213
i = 214: Unknown error 214
i = 215: Unknown error 215
i = 216: Unknown error 216
i = 217: Unknown error 217
i = 218: Unknown error 218
i = 219: Unknown error 219
i = 220: Unknown error 220
i = 221: Unknown error 221
i = 222: Unknown error 222
i = 223: Unknown error 223
i = 224: Unknown error 224
i = 225: Unknown error 225
i = 226: Unknown error 226
i = 227: Unknown error 227
i = 228: Unknown error 228
i = 229: Unknown error 229
i = 230: Unknown error 230
i = 231: Unknown error 231
i = 232: Unknown error 232
i = 233: Unknown error 233
i = 234: Unknown error 234
i = 235: Unknown error 235
i = 236: Unknown error 236
i = 237: Unknown error 237
i = 238: Unknown error 238
i = 239: Unknown error 239
i = 240: Unknown error 240
i = 241: Unknown error 241
i = 242: Unknown error 242
i = 243: Unknown error 243
i = 244: Unknown error 244
i = 245: Unknown error 245
i = 246: Unknown error 246
i = 247: Unknown error 247
i = 248: Unknown error 248
i = 249: Unknown error 249
i = 250: Unknown error 250
i = 251: Unknown error 251
i = 252: Unknown error 252
i = 253: Unknown error 253
i = 254: Unknown error 254
i = 255: Unknown error 255
#

 */
