/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSEditFloatRow : PTSRow {
    unsigned long long  _precision;
}

@property (nonatomic) unsigned long long precision;

- (id)between:(double)arg1 and:(double)arg2;
- (id)init;
- (unsigned long long)precision;
- (id)precision:(unsigned long long)arg1;
- (Class)rowTableViewCellClass;
- (void)setPrecision:(unsigned long long)arg1;
- (void)updateWithRow:(id)arg1;

@end
