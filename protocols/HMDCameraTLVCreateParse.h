/* made by EzioChiu.
 */

@protocol HMDCameraTLVCreateParse

@required

- (bool)_parseFromTLVData;
- (NSString *)descriptionWithIndent:(HMUIndent *)arg1;
- (NSData *)tlvData;

@end
