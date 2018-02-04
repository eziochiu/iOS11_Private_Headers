/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUCallTreeLeafNode : VMUCallTreeNode {
    NSCountedSet * _addresses;
    NSString * _combinedName;
}

- (void).cxx_destruct;
- (void)addAddress:(unsigned long long)arg1;
- (void)getBrowserName:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;

@end