/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFObjectTable : NSObject {
    NSMutableArray * m_objects;
}

- (void)clear;
- (void)dealloc;
- (int)deleteObject:(unsigned int)arg1;
- (id)getObject:(unsigned int)arg1;
- (id)init;
- (unsigned int)insertPos;
- (int)putObject:(id)arg1 in_objectPos:(unsigned int)arg2;
- (int)selectInto:(int)arg1 io_DC:(id)arg2;
- (int)size;

@end
